#!/usr/bin/env sh

set -euxo pipefail

if [ ! -d libmarpa ]; then
    git clone --depth 1 https://github.com/jeffreykegler/libmarpa.git
fi

pushd libmarpa

git checkout -- .

make clean
make dists

popd

IPHONEOS_SYSROOT=$(xcrun --sdk iphoneos --show-sdk-path)
IPHONESIMULATOR_SYSROOT=$(xcrun --sdk iphonesimulator --show-sdk-path)

MACOS_COMMON_FLAGS="-arch arm64 -arch x86_64 -mmacosx-version-min=10.12"
IPHONEOS_COMMON_FLAGS="-arch arm64 -miphoneos-version-min=11.0 -fembed-bitcode -isysroot $IPHONEOS_SYSROOT"
MACCATALYST_COMMON_FLAGS="-arch arm64 -arch x86_64 -target x86_64-apple-ios-macabi -fembed-bitcode -miphoneos-version-min=11.0"
IPHONESIMULATOR_COMMON_FLAGS="-arch arm64 -arch x86_64 -miphonesimulator-version-min=11.0 -isysroot $IPHONESIMULATOR_SYSROOT"

rm -rf build
mkdir -p build/macos

pushd build/macos

CFLAGS=$MACOS_COMMON_FLAGS LDFLAGS=$MACOS_COMMON_FLAGS cmake ../../libmarpa/cm_dist
CFLAGS=$MACOS_COMMON_FLAGS LDFLAGS=$MACOS_COMMON_FLAGS cmake --build .
cp ../../libmarpa/work/public/marpa.h .
mv libmarpa_s.a libmarpa.a
rm libmarpa.dylib

popd

mkdir -p build/iphoneos

pushd build/iphoneos

CFLAGS=$IPHONEOS_COMMON_FLAGS LDFLAGS=$IPHONEOS_COMMON_FLAGS cmake ../../libmarpa/cm_dist
CFLAGS=$IPHONEOS_COMMON_FLAGS LDFLAGS=$IPHONEOS_COMMON_FLAGS cmake --build .
cp ../../libmarpa/work/public/marpa.h .
mv libmarpa_s.a libmarpa.a
rm libmarpa.dylib

popd

echo "Build frameworks"

pushd build/macos

mkdir -p marpa.framework/Versions/A/{Headers,Modules,Resources}
cp -f libmarpa.a marpa.framework/Versions/A/marpa
cp marpa.h marpa.framework/Versions/A/Headers
cp ../../shim/shim.h marpa.framework/Versions/A/Headers
cp ../../macos-Info.plist marpa.framework/Versions/A/Resources/Info.plist
cp ../../shim/module.modulemap marpa.framework/Versions/A/Modules

pushd marpa.framework/Versions
ln -s A Current
popd

pushd marpa.framework
ln -s Versions/Current/Headers Headers
ln -s Versions/Current/Modules Modules
ln -s Versions/Current/Resources Resources
ln -s Versions/Current/marpa marpa
popd

popd

pushd build/iphoneos

mkdir -p marpa.framework/{Headers,Modules}
cp -f libmarpa.a marpa.framework/marpa
cp marpa.h marpa.framework/Headers
cp ../../shim/shim.h marpa.framework/Headers
cp ../../iphoneos-Info.plist marpa.framework/Info.plist
cp ../../shim/module.modulemap marpa.framework/Modules

popd

rm -rf marpa.xcframework

xcodebuild -create-xcframework \
    -framework build/macos/marpa.framework \
    -framework build/iphoneos/marpa.framework \
    -output marpa.xcframework
