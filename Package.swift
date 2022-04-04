// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "marpa-xcframework",
    platforms: [.macOS(.v10_13), .iOS(.v11)],
    products: [
        .library(
            name: "marpa",
            targets: ["marpa"]),
    ],
    dependencies: [],
    targets: [
        .binaryTarget(
            name: "marpa",
            path: "marpa.xcframework"
        ),
    ]
)
