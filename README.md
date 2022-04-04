# marpa-xcframework
XCFramework wrapper for libmarpa

This is a **pre-built** version [libmarpa](https://github.com/jeffreykegler/libmarpa), the C library that implements the MARPA parsing algorithm. If you actually want to use MARPA from Swift, check out [SwiftMarpa](https://github.com/dabrahams/SwiftMarpa).

## Why?

This only exists for convenient integration with the Swift Package Manager. There are many reasons why you might not want to use a pre-built binary. I just wanted to get going, so I threw this together.

## Building

When included as an SPM dependency, this has no build requirements. But, if you want to try building libmarpa yourself, you need `automake` and `texlive`. The latter is a pretty big and complex dependency, and is only needed to get the libmarpa build scripts to work.

```sh
sh build-xcframework.sh
```

### Suggestions or Feedback

We'd love to hear from you! Get in touch via [twitter](https://twitter.com/chimehq), an issue, or a pull request.

Please note that this project is released with a [Contributor Code of Conduct](CODE_OF_CONDUCT.md). By participating in this project you agree to abide by its terms.
