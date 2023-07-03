#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class FetchRocketsRocketKMMLineMeasure, FetchRocketsRocketKMMWeightScale, FetchRocketsRocketKMMStage, FetchRocketsRocketKMMCompanion, FetchRocketsRocketKMM, FetchRocketsRocketKMMLineMeasureCompanion, FetchRocketsRocketKMMStageCompanion, FetchRocketsRocketKMMWeightScaleCompanion, FetchRocketsKotlinThrowable, FetchRocketsKotlinArray<T>, FetchRocketsRocketException, FetchRocketsKtor_httpHttpStatusCode, FetchRocketsRocketExceptionHttpError, FetchRocketsRocketExceptionNetworkError, FetchRocketsRocketExceptionUnknownError, FetchRocketsRocketResult<__covariant T>, FetchRocketsRocketResultFailure, FetchRocketsKotlinNothing, FetchRocketsRocketResultSuccess<__covariant T>, FetchRocketsRocketApi, FetchRocketsKotlinUnit, NSError, FetchRocketsKotlinException, FetchRocketsKotlinRuntimeException, FetchRocketsKotlinIllegalStateException, FetchRocketsKtor_httpHttpStatusCodeCompanion, FetchRocketsKotlinx_serialization_coreSerializersModule, FetchRocketsKotlinx_serialization_coreSerialKind;

@protocol FetchRocketsPlatform, FetchRocketsUseCase, FetchRocketsKotlinx_serialization_coreKSerializer, FetchRocketsSuspendUseCase, FetchRocketsSynchronousUseCase, FetchRocketsKotlinx_serialization_coreEncoder, FetchRocketsKotlinx_serialization_coreSerialDescriptor, FetchRocketsKotlinx_serialization_coreSerializationStrategy, FetchRocketsKotlinx_serialization_coreDecoder, FetchRocketsKotlinx_serialization_coreDeserializationStrategy, FetchRocketsKotlinIterator, FetchRocketsKotlinComparable, FetchRocketsKotlinx_serialization_coreCompositeEncoder, FetchRocketsKotlinAnnotation, FetchRocketsKotlinx_serialization_coreCompositeDecoder, FetchRocketsKotlinx_serialization_coreSerializersModuleCollector, FetchRocketsKotlinKClass, FetchRocketsKotlinKDeclarationContainer, FetchRocketsKotlinKAnnotatedElement, FetchRocketsKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface FetchRocketsBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface FetchRocketsBase (FetchRocketsBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface FetchRocketsMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface FetchRocketsMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorFetchRocketsKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface FetchRocketsNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface FetchRocketsByte : FetchRocketsNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface FetchRocketsUByte : FetchRocketsNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface FetchRocketsShort : FetchRocketsNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface FetchRocketsUShort : FetchRocketsNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface FetchRocketsInt : FetchRocketsNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface FetchRocketsUInt : FetchRocketsNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface FetchRocketsLong : FetchRocketsNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface FetchRocketsULong : FetchRocketsNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface FetchRocketsFloat : FetchRocketsNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface FetchRocketsDouble : FetchRocketsNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface FetchRocketsBoolean : FetchRocketsNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface FetchRocketsGreeting : FetchRocketsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((swift_name("Platform")))
@protocol FetchRocketsPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface FetchRocketsIOSPlatform : FetchRocketsBase <FetchRocketsPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("UseCase")))
@protocol FetchRocketsUseCase
@required
@end

__attribute__((swift_name("SuspendUseCase")))
@protocol FetchRocketsSuspendUseCase <FetchRocketsUseCase>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeInput:(id _Nullable)input completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(input:completionHandler:)")));
@end

__attribute__((swift_name("SynchronousUseCase")))
@protocol FetchRocketsSynchronousUseCase <FetchRocketsUseCase>
@required
- (id _Nullable)invokeInput:(id _Nullable)input __attribute__((swift_name("invoke(input:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketKMM")))
@interface FetchRocketsRocketKMM : FetchRocketsBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name overview:(NSString *)overview height:(FetchRocketsRocketKMMLineMeasure *)height diameter:(FetchRocketsRocketKMMLineMeasure *)diameter mass:(FetchRocketsRocketKMMWeightScale *)mass firstStage:(FetchRocketsRocketKMMStage *)firstStage secondStage:(FetchRocketsRocketKMMStage *)secondStage firstFlight:(NSString *)firstFlight photos:(NSArray<NSString *> *)photos __attribute__((swift_name("init(id:name:overview:height:diameter:mass:firstStage:secondStage:firstFlight:photos:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FetchRocketsRocketKMMCompanion *companion __attribute__((swift_name("companion")));
- (FetchRocketsRocketKMM *)doCopyId:(NSString *)id name:(NSString *)name overview:(NSString *)overview height:(FetchRocketsRocketKMMLineMeasure *)height diameter:(FetchRocketsRocketKMMLineMeasure *)diameter mass:(FetchRocketsRocketKMMWeightScale *)mass firstStage:(FetchRocketsRocketKMMStage *)firstStage secondStage:(FetchRocketsRocketKMMStage *)secondStage firstFlight:(NSString *)firstFlight photos:(NSArray<NSString *> *)photos __attribute__((swift_name("doCopy(id:name:overview:height:diameter:mass:firstStage:secondStage:firstFlight:photos:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FetchRocketsRocketKMMLineMeasure *diameter __attribute__((swift_name("diameter")));
@property (readonly) NSString *firstFlight __attribute__((swift_name("firstFlight")));
@property (readonly) FetchRocketsRocketKMMStage *firstStage __attribute__((swift_name("firstStage")));
@property (readonly) FetchRocketsRocketKMMLineMeasure *height __attribute__((swift_name("height")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) FetchRocketsRocketKMMWeightScale *mass __attribute__((swift_name("mass")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *overview __attribute__((swift_name("overview")));
@property (readonly) NSArray<NSString *> *photos __attribute__((swift_name("photos")));
@property (readonly) FetchRocketsRocketKMMStage *secondStage __attribute__((swift_name("secondStage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketKMM.Companion")))
@interface FetchRocketsRocketKMMCompanion : FetchRocketsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FetchRocketsRocketKMMCompanion *shared __attribute__((swift_name("shared")));
- (id<FetchRocketsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketKMM.LineMeasure")))
@interface FetchRocketsRocketKMMLineMeasure : FetchRocketsBase
- (instancetype)initWithMeters:(float)meters feet:(float)feet __attribute__((swift_name("init(meters:feet:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FetchRocketsRocketKMMLineMeasureCompanion *companion __attribute__((swift_name("companion")));
- (FetchRocketsRocketKMMLineMeasure *)doCopyMeters:(float)meters feet:(float)feet __attribute__((swift_name("doCopy(meters:feet:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float feet __attribute__((swift_name("feet")));
@property (readonly) float meters __attribute__((swift_name("meters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketKMM.LineMeasureCompanion")))
@interface FetchRocketsRocketKMMLineMeasureCompanion : FetchRocketsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FetchRocketsRocketKMMLineMeasureCompanion *shared __attribute__((swift_name("shared")));
- (id<FetchRocketsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketKMM.Stage")))
@interface FetchRocketsRocketKMMStage : FetchRocketsBase
- (instancetype)initWithReusable:(BOOL)reusable engines:(int32_t)engines fuelMass:(float)fuelMass burnTime:(FetchRocketsInt * _Nullable)burnTime __attribute__((swift_name("init(reusable:engines:fuelMass:burnTime:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FetchRocketsRocketKMMStageCompanion *companion __attribute__((swift_name("companion")));
- (FetchRocketsRocketKMMStage *)doCopyReusable:(BOOL)reusable engines:(int32_t)engines fuelMass:(float)fuelMass burnTime:(FetchRocketsInt * _Nullable)burnTime __attribute__((swift_name("doCopy(reusable:engines:fuelMass:burnTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FetchRocketsInt * _Nullable burnTime __attribute__((swift_name("burnTime")));
@property (readonly) int32_t engines __attribute__((swift_name("engines")));
@property (readonly) float fuelMass __attribute__((swift_name("fuelMass")));
@property (readonly) BOOL reusable __attribute__((swift_name("reusable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketKMM.StageCompanion")))
@interface FetchRocketsRocketKMMStageCompanion : FetchRocketsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FetchRocketsRocketKMMStageCompanion *shared __attribute__((swift_name("shared")));
- (id<FetchRocketsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketKMM.WeightScale")))
@interface FetchRocketsRocketKMMWeightScale : FetchRocketsBase
- (instancetype)initWithKilograms:(float)kilograms pounds:(float)pounds __attribute__((swift_name("init(kilograms:pounds:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FetchRocketsRocketKMMWeightScaleCompanion *companion __attribute__((swift_name("companion")));
- (FetchRocketsRocketKMMWeightScale *)doCopyKilograms:(float)kilograms pounds:(float)pounds __attribute__((swift_name("doCopy(kilograms:pounds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float kilograms __attribute__((swift_name("kilograms")));
@property (readonly) float pounds __attribute__((swift_name("pounds")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketKMM.WeightScaleCompanion")))
@interface FetchRocketsRocketKMMWeightScaleCompanion : FetchRocketsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FetchRocketsRocketKMMWeightScaleCompanion *shared __attribute__((swift_name("shared")));
- (id<FetchRocketsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketApi")))
@interface FetchRocketsRocketApi : FetchRocketsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface FetchRocketsKotlinThrowable : FetchRocketsBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FetchRocketsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FetchRocketsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (FetchRocketsKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FetchRocketsKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("RocketException")))
@interface FetchRocketsRocketException : FetchRocketsKotlinThrowable
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(FetchRocketsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FetchRocketsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketException.HttpError")))
@interface FetchRocketsRocketExceptionHttpError : FetchRocketsRocketException
- (instancetype)initWithStatusCode:(FetchRocketsKtor_httpHttpStatusCode *)statusCode __attribute__((swift_name("init(statusCode:)"))) __attribute__((objc_designated_initializer));
- (FetchRocketsRocketExceptionHttpError *)doCopyStatusCode:(FetchRocketsKtor_httpHttpStatusCode *)statusCode __attribute__((swift_name("doCopy(statusCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketException.NetworkError")))
@interface FetchRocketsRocketExceptionNetworkError : FetchRocketsRocketException
- (instancetype)initWithErrorMessage:(NSString *)errorMessage __attribute__((swift_name("init(errorMessage:)"))) __attribute__((objc_designated_initializer));
- (FetchRocketsRocketExceptionNetworkError *)doCopyErrorMessage:(NSString *)errorMessage __attribute__((swift_name("doCopy(errorMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *errorMessage __attribute__((swift_name("errorMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketException.UnknownError")))
@interface FetchRocketsRocketExceptionUnknownError : FetchRocketsRocketException
- (instancetype)initWithErrorMessage:(NSString *)errorMessage __attribute__((swift_name("init(errorMessage:)"))) __attribute__((objc_designated_initializer));
- (FetchRocketsRocketExceptionUnknownError *)doCopyErrorMessage:(NSString *)errorMessage __attribute__((swift_name("doCopy(errorMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *errorMessage __attribute__((swift_name("errorMessage")));
@end

__attribute__((swift_name("RocketResult")))
@interface FetchRocketsRocketResult<__covariant T> : FetchRocketsBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketResultFailure")))
@interface FetchRocketsRocketResultFailure : FetchRocketsRocketResult<FetchRocketsKotlinNothing *>
- (instancetype)initWithError:(FetchRocketsRocketException *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (FetchRocketsRocketResultFailure *)doCopyError:(FetchRocketsRocketException *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FetchRocketsRocketException *error __attribute__((swift_name("error")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketResultSuccess")))
@interface FetchRocketsRocketResultSuccess<__covariant T> : FetchRocketsRocketResult<T>
- (instancetype)initWithData:(T _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (FetchRocketsRocketResultSuccess<T> *)doCopyData:(T _Nullable)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@end

@interface FetchRocketsRocketApi (Extensions)
- (FetchRocketsKotlinUnit *(^(^)(FetchRocketsKotlinUnit *(^)(FetchRocketsRocketResult<NSArray<FetchRocketsRocketKMM *> *> *, FetchRocketsKotlinUnit *), FetchRocketsKotlinUnit *(^)(NSError *, FetchRocketsKotlinUnit *), FetchRocketsKotlinUnit *(^)(NSError *, FetchRocketsKotlinUnit *)))(void))fetchAllRockets __attribute__((swift_name("fetchAllRockets()")));
- (FetchRocketsKotlinUnit *(^(^)(FetchRocketsKotlinUnit *(^)(FetchRocketsRocketResult<NSArray<FetchRocketsRocketKMM *> *> *, FetchRocketsKotlinUnit *), FetchRocketsKotlinUnit *(^)(NSError *, FetchRocketsKotlinUnit *), FetchRocketsKotlinUnit *(^)(NSError *, FetchRocketsKotlinUnit *)))(void))fetchFailRockets __attribute__((swift_name("fetchFailRockets()")));
- (FetchRocketsKotlinUnit *(^(^)(FetchRocketsKotlinUnit *(^)(FetchRocketsRocketResult<FetchRocketsRocketKMM *> *, FetchRocketsKotlinUnit *), FetchRocketsKotlinUnit *(^)(NSError *, FetchRocketsKotlinUnit *), FetchRocketsKotlinUnit *(^)(NSError *, FetchRocketsKotlinUnit *)))(void))fetchRocketByIdRocketId:(NSString *)rocketId __attribute__((swift_name("fetchRocketById(rocketId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface FetchRocketsPlatform_iosKt : FetchRocketsBase
+ (id<FetchRocketsPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UseCaseKt")))
@interface FetchRocketsUseCaseKt : FetchRocketsBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)invoke:(id<FetchRocketsSuspendUseCase>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(_:completionHandler:)")));
+ (id _Nullable)invoke:(id<FetchRocketsSynchronousUseCase>)receiver __attribute__((swift_name("invoke(_:)")));
@end

__attribute__((swift_name("KotlinException")))
@interface FetchRocketsKotlinException : FetchRocketsKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FetchRocketsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FetchRocketsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface FetchRocketsKotlinRuntimeException : FetchRocketsKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FetchRocketsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FetchRocketsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface FetchRocketsKotlinIllegalStateException : FetchRocketsKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FetchRocketsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FetchRocketsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface FetchRocketsKotlinCancellationException : FetchRocketsKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FetchRocketsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FetchRocketsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol FetchRocketsKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<FetchRocketsKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<FetchRocketsKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol FetchRocketsKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<FetchRocketsKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<FetchRocketsKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol FetchRocketsKotlinx_serialization_coreKSerializer <FetchRocketsKotlinx_serialization_coreSerializationStrategy, FetchRocketsKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface FetchRocketsKotlinArray<T> : FetchRocketsBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(FetchRocketsInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<FetchRocketsKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol FetchRocketsKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface FetchRocketsKtor_httpHttpStatusCode : FetchRocketsBase <FetchRocketsKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FetchRocketsKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(FetchRocketsKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (FetchRocketsKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (FetchRocketsKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface FetchRocketsKotlinNothing : FetchRocketsBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface FetchRocketsKotlinUnit : FetchRocketsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FetchRocketsKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol FetchRocketsKotlinx_serialization_coreEncoder
@required
- (id<FetchRocketsKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<FetchRocketsKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<FetchRocketsKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<FetchRocketsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<FetchRocketsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) FetchRocketsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol FetchRocketsKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<FetchRocketsKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<FetchRocketsKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) FetchRocketsKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol FetchRocketsKotlinx_serialization_coreDecoder
@required
- (id<FetchRocketsKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<FetchRocketsKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (FetchRocketsKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<FetchRocketsKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<FetchRocketsKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) FetchRocketsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol FetchRocketsKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface FetchRocketsKtor_httpHttpStatusCodeCompanion : FetchRocketsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FetchRocketsKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (FetchRocketsKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) FetchRocketsKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<FetchRocketsKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol FetchRocketsKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<FetchRocketsKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<FetchRocketsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<FetchRocketsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) FetchRocketsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface FetchRocketsKotlinx_serialization_coreSerializersModule : FetchRocketsBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<FetchRocketsKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<FetchRocketsKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<FetchRocketsKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<FetchRocketsKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<FetchRocketsKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<FetchRocketsKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<FetchRocketsKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<FetchRocketsKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol FetchRocketsKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface FetchRocketsKotlinx_serialization_coreSerialKind : FetchRocketsBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol FetchRocketsKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<FetchRocketsKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<FetchRocketsKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<FetchRocketsKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<FetchRocketsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) FetchRocketsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol FetchRocketsKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<FetchRocketsKotlinKClass>)kClass provider:(id<FetchRocketsKotlinx_serialization_coreKSerializer> (^)(NSArray<id<FetchRocketsKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<FetchRocketsKotlinKClass>)kClass serializer:(id<FetchRocketsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<FetchRocketsKotlinKClass>)baseClass actualClass:(id<FetchRocketsKotlinKClass>)actualClass actualSerializer:(id<FetchRocketsKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<FetchRocketsKotlinKClass>)baseClass defaultDeserializerProvider:(id<FetchRocketsKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<FetchRocketsKotlinKClass>)baseClass defaultDeserializerProvider:(id<FetchRocketsKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<FetchRocketsKotlinKClass>)baseClass defaultSerializerProvider:(id<FetchRocketsKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol FetchRocketsKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol FetchRocketsKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol FetchRocketsKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol FetchRocketsKotlinKClass <FetchRocketsKotlinKDeclarationContainer, FetchRocketsKotlinKAnnotatedElement, FetchRocketsKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
