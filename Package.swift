// swift-tools-version: 5.6
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "AppMetricaKiwi",
    platforms: [
        .iOS(.v13),
        .tvOS(.v13),
        .macOS(.v10_13)
    ],
    products: [
        .library(name: "AppMetricaKiwi", targets: ["AppMetricaKiwi"])
    ],
    dependencies: [
        .package(
            url: "https://github.com/Quick/Nimble", "8.0.0"..<"9.0.0"
        )
    ],
    targets: [
        .target(
            name: "AppMetricaKiwi",
            cSettings: [
                .headerSearchPath("./"),
                .headerSearchPath("./include/AppMetricaKiwi"),
                .headerSearchPath("./Config"),
                .headerSearchPath("./Core"),
                .headerSearchPath("./Matchers"),
                .headerSearchPath("./Mocking"),
                .headerSearchPath("./Nodes"),
                .headerSearchPath("./Shared Examples"),
                .headerSearchPath("./Stubbing"),
                .headerSearchPath("./Verifiers"),
            ]
        ),
        .target(
            name: "Test Classes",
            dependencies: [
                "AppMetricaKiwi"
            ],
            publicHeadersPath: "./",
            cSettings: [
                .headerSearchPath("./"),
                .headerSearchPath("../AppMetricaKiwi"),
                .headerSearchPath("../AppMetricaKiwi/include/AppMetricaKiwi"),
                .headerSearchPath("../AppMetricaKiwi/Config"),
                .headerSearchPath("../AppMetricaKiwi/Matchers"),
                .headerSearchPath("../AppMetricaKiwi/Nodes"),
                .headerSearchPath("../AppMetricaKiwi/Stubbing"),
                .headerSearchPath("../AppMetricaKiwi/Core"),
                .headerSearchPath("../AppMetricaKiwi/Mocking"),
                .headerSearchPath("../AppMetricaKiwi/Shared Examples"),
                .headerSearchPath("../AppMetricaKiwi/Verifiers"),
            ]
        ),
        .testTarget(
            name: "KiwiTests",
            dependencies: [
                "AppMetricaKiwi",
                "Nimble",
                "Test Classes"
            ],
            cSettings: [
                .headerSearchPath("./"),
                .headerSearchPath("../../Sources/AppMetricaKiwi"),
                .headerSearchPath("../../Sources/AppMetricaKiwi/include/AppMetricaKiwi"),
                .headerSearchPath("../../Sources/AppMetricaKiwi/Config"),
                .headerSearchPath("../../Sources/AppMetricaKiwi/Matchers"),
                .headerSearchPath("../../Sources/AppMetricaKiwi/Nodes"),
                .headerSearchPath("../../Sources/AppMetricaKiwi/Stubbing"),
                .headerSearchPath("../../Sources/AppMetricaKiwi/Core"),
                .headerSearchPath("../../Sources/AppMetricaKiwi/Mocking"),
                .headerSearchPath("../../Sources/AppMetricaKiwi/Shared Examples"),
                .headerSearchPath("../../Sources/AppMetricaKiwi/Verifiers"),
            ]
        ),
        .testTarget(
            name: "KiwiTestsNoArc",
            dependencies: [
                "AppMetricaKiwi",
                "Test Classes"
            ],
            cSettings: [
                .headerSearchPath("../KiwiTests"),
                .headerSearchPath("../../Sources/AppMetricaKiwi"),
                .headerSearchPath("../../Sources/AppMetricaKiwi/include/AppMetricaKiwi"),
                .headerSearchPath("../../Sources/AppMetricaKiwi/Config"),
                .headerSearchPath("../../Sources/AppMetricaKiwi/Matchers"),
                .headerSearchPath("../../Sources/AppMetricaKiwi/Nodes"),
                .headerSearchPath("../../Sources/AppMetricaKiwi/Stubbing"),
                .headerSearchPath("../../Sources/AppMetricaKiwi/Core"),
                .headerSearchPath("../../Sources/AppMetricaKiwi/Mocking"),
                .headerSearchPath("../../Sources/AppMetricaKiwi/Shared Examples"),
                .headerSearchPath("../../Sources/AppMetricaKiwi/Verifiers"),
                .unsafeFlags(["-fno-objc-arc"])
            ]
        ),
        .testTarget(
            name: "KiwiTestsSwift",
            dependencies: [
                "AppMetricaKiwi",
                "Nimble"
            ]
        )
    ]
)
