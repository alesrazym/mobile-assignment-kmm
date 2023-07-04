# mobile-assignment-kmm
`fetchRockets` module for solution application.

Simple library in Kotlin Multiplatform Mobile that provides REST API requests.

Those are used in our example app in Quanti [mobile-assignment](https://github.com/Qase/mobile-assignment).

KMM is used for both iOS (Swift) and Android (Kotlin) versions of mobile development. It is a modern way of creating shared code for apps.
This project offers use cases of `RocketClient`. Such use cases do the work of creating API request, serializing (parsing) data from `json` to `struct/class` and then providing the data to platform-specific project. 

## API requests 
```Kotlin 
 fetchAllRockets(): RocketResult<List<RocketKMM>>
 fetchRocketById(rocketId: String): RocketResutl<RocketKMM>
 fetchFailRockets: RocketResult<RocketException> // Made for testing error handling
```

`RocketKMM` is basically `DTO` model for rocket api - `https://api.spacexdata.com/v4/rockets/`.

 - Additional information is available in the [SpaceX API](https://docs.spacexdata.com).

`RocketResult` is custom result type (`Success` and `Failure`) used because Swift cannot handle build-in `Result` type and casts it as a `Any?`.

## NativeCoroutines
 - All functions are using a `@NativeCoroutines` modifier provided via special library: [KMP-Native-Coroutines](https://github.com/rickclephas/KMP-NativeCoroutines.git)
 - The library basically creates "new" functions, that are thread-safe. Those functions are called differently.

## How to use it in Swift
Calling basic functions in Swift is very easy, just declare the struct and then use the functions like so:
```Swift 
 let rocketApi = RocketApi()
 let rockets = try await rocketApi.fetchAllRockets()
```
  and handle errors in `do-catch` clause.

Functions in **NativeCoroutines** are handled this way:
```Swift 
 let rockets = try await asyncFunction(for: rocketApi.fetchAllRockets())
```
- Note that the `asyncFunction` is from the **NativeCoroutines** library that needs to be imported.

## Full implementation in Swift
```Swift 
 do {
      let rockets = try await asyncFunction(for: rocketApi.fetchAllRockets())
      //MARK: Even though warning is saying "always fails" it in fact does not fail at all. Swift is confused about KMM. - Ignore this warrning
      switch rockets {
      case let success as RocketResultSuccess<AnyObject>:
         //Custom mapping into domain model
      case let failure as RocketResult<RocketException>:
         //Custoom error mapping to domain error
      default:
        throw DomainError.undefinedError
      }
 } catch {
   throw error
 }
```
