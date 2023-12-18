plugins {
    //trick: for the same plugin versions in all sub-modules
    id("com.android.application").version("8.2.0").apply(false)
    id("com.android.library").version("8.2.0").apply(false)
    kotlin("android").version("1.9.20").apply(false)
    kotlin("multiplatform").version("1.9.20").apply(false)
    //id("com.chromaticnoise.multiplatform-swiftpackage") version "2.0.3"
    //id("com.google.devtools.ksp") version "1.8.21-1.0.11"
    //id("com.rickclephas.kmp.nativecoroutines") version "1.0.0-ALPHA-8"
}

tasks.register("clean", Delete::class) {
    delete(rootProject.buildDir)
}
