// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "fetchRockets",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "fetchRockets",
            targets: ["fetchRockets"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "fetchRockets",
            path: "./fetchRockets.xcframework"
        ),
    ]
)
