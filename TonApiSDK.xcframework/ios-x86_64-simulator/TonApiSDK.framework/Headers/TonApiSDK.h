#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class TASDKTonApiDataAccountCompanion, TASDKTonApiDataAccount, TASDKTonApiDataAccountAddressCompanion, TASDKTonApiDataAccountAddress, TASDKTonApiDataAnnotationCompanion, TASDKTonApiDataAnnotation, TASDKTonApiDataAnnotationsCompanion, TASDKTonApiDataAnnotations, TASDKTonApiDataBlockCompanion, TASDKTonApiDataBlock, TASDKTonApiDataErrorCompanion, TASDKTonApiDataError, TASDKTonApiDataJettonBalanceCompanion, TASDKTonApiDataJettonBalance, TASDKTonApiDataJettonInfoCompanion, TASDKTonApiDataJettonInfo, TASDKTonApiDataJettonsBalancesCompanion, TASDKTonApiDataJettonsBalances, TASDKTonApiDataMessageCompanion, TASDKTonApiDataMessage, TASDKTonApiDataNftCollectionCompanion, TASDKTonApiDataNftCollection, TASDKTonApiDataNftCollectionsCompanion, TASDKTonApiDataNftCollections, TASDKTonApiDataNftItem, TASDKTonApiDataNftForSaleCompanion, TASDKTonApiDataNftForSale, TASDKTonApiDataNftItemCompanion, TASDKTonApiDataNftItemsCompanion, TASDKTonApiDataNftItems, TASDKTonApiDataNftSalesResponseCompanion, TASDKTonApiDataNftSalesResponse, TASDKTonApiDataTraceCompanion, TASDKTonApiDataTrace, TASDKTonApiDataTraceTX, TASDKTonApiDataTraceMsgCompanion, TASDKTonApiDataTraceMsg, TASDKTonApiDataTxAnnotation, TASDKTonApiDataTraceTXCompanion, TASDKTonApiDataTracesCompanion, TASDKTonApiDataTraces, TASDKTonApiDataTransactionCompanion, TASDKTonApiDataTransaction, TASDKTonApiDataTransactionsCompanion, TASDKTonApiDataTransactions, TASDKTonApiDataTxAnnotationCompanion, TASDKTonApiDataWalletCompanion, TASDKTonApiDataWallet, TASDKTonApiDataWalletsCompanion, TASDKTonApiDataWallets, TASDKKtor_client_coreHttpClient, TASDKKtor_httpUrl, TASDKTonApiMethodBaseParams, TASDKTonApiMethodBaseQuery, TASDKTonApiMethodBase, TASDKTonKeeperDataLoginResolve, TASDKTonApiSdkCompanion, TASDKTonKeeperAuth, TASDKTonApiMethodV1, TASDKKotlinThrowable, TASDKKotlinArray<T>, TASDKURLEncoder, TASDKUrlParserCompanion, TASDKTonApiSdk, TASDKTonKeeperDataPayload, TASDKTonKeeperDataLoginResolveCompanion, TASDKTonKeeperDataPayloadCompanion, TASDKKtor_client_coreHttpClientEngineConfig, TASDKKtor_client_coreHttpClientConfig<T>, TASDKKtor_eventsEvents, TASDKKtor_client_coreHttpReceivePipeline, TASDKKtor_client_coreHttpRequestPipeline, TASDKKtor_client_coreHttpResponsePipeline, TASDKKtor_client_coreHttpSendPipeline, TASDKKtor_httpUrlCompanion, TASDKKtor_httpURLProtocol, TASDKKotlinx_serialization_coreSerializersModule, TASDKKotlinx_serialization_coreSerialKind, TASDKKotlinNothing, TASDKKtor_client_coreHttpRequestData, TASDKKtor_client_coreHttpResponseData, TASDKKotlinx_coroutines_coreCoroutineDispatcher, TASDKKtor_client_coreProxyConfig, TASDKKtor_utilsAttributeKey<T>, TASDKKtor_eventsEventDefinition<T>, TASDKKtor_utilsPipelinePhase, TASDKKtor_utilsPipeline<TSubject, TContext>, TASDKKtor_client_coreHttpReceivePipelinePhases, TASDKKtor_client_coreHttpResponse, TASDKKotlinUnit, TASDKKtor_client_coreHttpRequestPipelinePhases, TASDKKtor_client_coreHttpRequestBuilder, TASDKKtor_client_coreHttpResponsePipelinePhases, TASDKKtor_client_coreHttpResponseContainer, TASDKKtor_client_coreHttpClientCall, TASDKKtor_client_coreHttpSendPipelinePhases, TASDKKtor_httpURLProtocolCompanion, TASDKKotlinException, TASDKKotlinRuntimeException, TASDKKotlinIllegalStateException, TASDKKtor_httpHttpMethod, TASDKKtor_httpOutgoingContent, TASDKKtor_httpHttpStatusCode, TASDKKtor_utilsGMTDate, TASDKKtor_httpHttpProtocolVersion, TASDKKotlinAbstractCoroutineContextElement, TASDKKotlinx_coroutines_coreCoroutineDispatcherKey, TASDKKtor_httpHeadersBuilder, TASDKKtor_client_coreHttpRequestBuilderCompanion, TASDKKtor_httpURLBuilder, TASDKKtor_utilsTypeInfo, TASDKKtor_client_coreHttpClientCallCompanion, TASDKKtor_httpHttpMethodCompanion, TASDKKtor_httpContentType, TASDKKotlinCancellationException, TASDKKtor_httpHttpStatusCodeCompanion, TASDKKtor_utilsGMTDateCompanion, TASDKKtor_utilsWeekDay, TASDKKtor_utilsMonth, TASDKKtor_httpHttpProtocolVersionCompanion, TASDKKotlinAbstractCoroutineContextKey<B, E>, TASDKKtor_ioMemory, TASDKKtor_ioChunkBuffer, TASDKKotlinByteArray, TASDKKtor_ioBuffer, TASDKKtor_ioByteReadPacket, TASDKKtor_utilsStringValuesBuilderImpl, TASDKKtor_httpURLBuilderCompanion, TASDKKtor_httpHeaderValueParam, TASDKKtor_httpHeaderValueWithParametersCompanion, TASDKKtor_httpHeaderValueWithParameters, TASDKKtor_httpContentTypeCompanion, TASDKKotlinEnumCompanion, TASDKKotlinEnum<E>, TASDKKtor_utilsWeekDayCompanion, TASDKKtor_utilsMonthCompanion, TASDKKtor_ioMemoryCompanion, TASDKKtor_ioBufferCompanion, TASDKKtor_ioChunkBufferCompanion, TASDKKotlinByteIterator, TASDKKtor_ioInputCompanion, TASDKKtor_ioInput, TASDKKtor_ioByteReadPacketCompanion, TASDKKotlinKTypeProjection, TASDKKotlinx_coroutines_coreAtomicDesc, TASDKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, TASDKKotlinKVariance, TASDKKotlinKTypeProjectionCompanion, TASDKKotlinx_coroutines_coreAtomicOp<__contravariant T>, TASDKKotlinx_coroutines_coreOpDescriptor, TASDKKotlinx_coroutines_coreLockFreeLinkedListNode, TASDKKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, TASDKKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, TASDKKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol TASDKKotlinx_serialization_coreKSerializer, TASDKKotlinx_serialization_coreEncoder, TASDKKotlinx_serialization_coreSerialDescriptor, TASDKKotlinx_serialization_coreSerializationStrategy, TASDKKotlinx_serialization_coreDecoder, TASDKKotlinx_serialization_coreDeserializationStrategy, TASDKKotlinCoroutineContext, TASDKKotlinx_coroutines_coreCoroutineScope, TASDKKtor_ioCloseable, TASDKKtor_client_coreHttpClientEngine, TASDKKtor_client_coreHttpClientEngineCapability, TASDKKtor_utilsAttributes, TASDKKtor_httpParameters, TASDKKotlinIterator, TASDKKotlinx_serialization_coreCompositeEncoder, TASDKKotlinAnnotation, TASDKKotlinx_serialization_coreCompositeDecoder, TASDKKotlinCoroutineContextElement, TASDKKotlinCoroutineContextKey, TASDKKtor_client_coreHttpClientPlugin, TASDKKotlinx_coroutines_coreDisposableHandle, TASDKKotlinSuspendFunction2, TASDKKotlinMapEntry, TASDKKtor_utilsStringValues, TASDKKotlinx_serialization_coreSerializersModuleCollector, TASDKKotlinKClass, TASDKKtor_httpHeaders, TASDKKotlinx_coroutines_coreJob, TASDKKotlinContinuation, TASDKKotlinContinuationInterceptor, TASDKKotlinx_coroutines_coreRunnable, TASDKKotlinFunction, TASDKKtor_httpHttpMessage, TASDKKtor_ioByteReadChannel, TASDKKtor_httpHttpMessageBuilder, TASDKKtor_client_coreHttpRequest, TASDKKotlinKDeclarationContainer, TASDKKotlinKAnnotatedElement, TASDKKotlinKClassifier, TASDKKotlinx_coroutines_coreChildHandle, TASDKKotlinx_coroutines_coreChildJob, TASDKKotlinSequence, TASDKKotlinx_coroutines_coreSelectClause0, TASDKKotlinComparable, TASDKKtor_ioReadSession, TASDKKotlinSuspendFunction1, TASDKKotlinAppendable, TASDKKtor_utilsStringValuesBuilder, TASDKKtor_httpParametersBuilder, TASDKKotlinKType, TASDKKotlinx_coroutines_coreParentJob, TASDKKotlinx_coroutines_coreSelectInstance, TASDKKotlinSuspendFunction0, TASDKKtor_ioObjectPool;

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
@interface TASDKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface TASDKBase (TASDKBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface TASDKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface TASDKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorTASDKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface TASDKNumber : NSNumber
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
@end;

__attribute__((swift_name("KotlinByte")))
@interface TASDKByte : TASDKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface TASDKUByte : TASDKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface TASDKShort : TASDKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface TASDKUShort : TASDKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface TASDKInt : TASDKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface TASDKUInt : TASDKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface TASDKLong : TASDKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface TASDKULong : TASDKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface TASDKFloat : TASDKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface TASDKDouble : TASDKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface TASDKBoolean : TASDKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData")))
@interface TASDKTonApiData : TASDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.Account")))
@interface TASDKTonApiDataAccount : TASDKBase
- (instancetype)initWithBalance:(int64_t)balance code:(NSString * _Nullable)code data:(NSString * _Nullable)data interfaces:(NSMutableArray<NSString *> * _Nullable)interfaces status:(NSString *)status __attribute__((swift_name("init(balance:code:data:interfaces:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataAccountCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSMutableArray<NSString *> * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataAccount *)doCopyBalance:(int64_t)balance code:(NSString * _Nullable)code data:(NSString * _Nullable)data interfaces:(NSMutableArray<NSString *> * _Nullable)interfaces status:(NSString *)status __attribute__((swift_name("doCopy(balance:code:data:interfaces:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t balance __attribute__((swift_name("balance")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSMutableArray<NSString *> * _Nullable interfaces __attribute__((swift_name("interfaces")));
@property (readonly) float readableBalance __attribute__((swift_name("readableBalance")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.AccountCompanion")))
@interface TASDKTonApiDataAccountCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataAccountCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.AccountAddress")))
@interface TASDKTonApiDataAccountAddress : TASDKBase
- (instancetype)initWithAddress:(NSString *)address icon:(NSString * _Nullable)icon isScam:(TASDKBoolean * _Nullable)isScam name:(NSString * _Nullable)name __attribute__((swift_name("init(address:icon:isScam:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataAccountAddressCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKBoolean * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataAccountAddress *)doCopyAddress:(NSString *)address icon:(NSString * _Nullable)icon isScam:(TASDKBoolean * _Nullable)isScam name:(NSString * _Nullable)name __attribute__((swift_name("doCopy(address:icon:isScam:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *address __attribute__((swift_name("address")));
@property (readonly) NSString * _Nullable icon __attribute__((swift_name("icon")));
@property (readonly) TASDKBoolean * _Nullable isScam __attribute__((swift_name("isScam")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.AccountAddressCompanion")))
@interface TASDKTonApiDataAccountAddressCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataAccountAddressCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.Annotation")))
@interface TASDKTonApiDataAnnotation : TASDKBase
- (instancetype)initWithAddress:(TASDKTonApiDataAccountAddress *)address hash:(NSString *)hash name:(NSString *)name traceId:(NSString * _Nullable)traceId utime:(int64_t)utime __attribute__((swift_name("init(address:hash:name:traceId:utime:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataAnnotationCompanion *companion __attribute__((swift_name("companion")));
- (TASDKTonApiDataAccountAddress *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataAnnotation *)doCopyAddress:(TASDKTonApiDataAccountAddress *)address hash:(NSString *)hash name:(NSString *)name traceId:(NSString * _Nullable)traceId utime:(int64_t)utime __attribute__((swift_name("doCopy(address:hash:name:traceId:utime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TASDKTonApiDataAccountAddress *address __attribute__((swift_name("address")));
@property (readonly, getter=hash_) NSString *hash __attribute__((swift_name("hash")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable traceId __attribute__((swift_name("traceId")));
@property (readonly) int64_t utime __attribute__((swift_name("utime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.AnnotationCompanion")))
@interface TASDKTonApiDataAnnotationCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataAnnotationCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.Annotations")))
@interface TASDKTonApiDataAnnotations : TASDKBase
- (instancetype)initWithAnnotations:(NSMutableArray<TASDKTonApiDataAnnotation *> *)annotations __attribute__((swift_name("init(annotations:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataAnnotationsCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<TASDKTonApiDataAnnotation *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataAnnotations *)doCopyAnnotations:(NSMutableArray<TASDKTonApiDataAnnotation *> *)annotations __attribute__((swift_name("doCopy(annotations:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSMutableArray<TASDKTonApiDataAnnotation *> *annotations __attribute__((swift_name("annotations")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.AnnotationsCompanion")))
@interface TASDKTonApiDataAnnotationsCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataAnnotationsCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.Block")))
@interface TASDKTonApiDataBlock : TASDKBase
- (instancetype)initWithEndLt:(int64_t)endLt fileHash:(NSString *)fileHash rootHash:(NSString *)rootHash seqno:(int32_t)seqno shard:(int64_t)shard startLt:(int64_t)startLt workchainId:(int32_t)workchainId __attribute__((swift_name("init(endLt:fileHash:rootHash:seqno:shard:startLt:workchainId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataBlockCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataBlock *)doCopyEndLt:(int64_t)endLt fileHash:(NSString *)fileHash rootHash:(NSString *)rootHash seqno:(int32_t)seqno shard:(int64_t)shard startLt:(int64_t)startLt workchainId:(int32_t)workchainId __attribute__((swift_name("doCopy(endLt:fileHash:rootHash:seqno:shard:startLt:workchainId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t endLt __attribute__((swift_name("endLt")));
@property (readonly) NSString *fileHash __attribute__((swift_name("fileHash")));
@property (readonly) NSString *rootHash __attribute__((swift_name("rootHash")));
@property (readonly) int32_t seqno __attribute__((swift_name("seqno")));
@property (readonly) int64_t shard __attribute__((swift_name("shard")));
@property (readonly) int64_t startLt __attribute__((swift_name("startLt")));
@property (readonly) int32_t workchainId __attribute__((swift_name("workchainId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.BlockCompanion")))
@interface TASDKTonApiDataBlockCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataBlockCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.Error")))
@interface TASDKTonApiDataError : TASDKBase
- (instancetype)initWithError:(NSString * _Nullable)error message:(NSString * _Nullable)message __attribute__((swift_name("init(error:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataErrorCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataError *)doCopyError:(NSString * _Nullable)error message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(error:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.ErrorCompanion")))
@interface TASDKTonApiDataErrorCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataErrorCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.JettonBalance")))
@interface TASDKTonApiDataJettonBalance : TASDKBase
- (instancetype)initWithBalance:(NSString *)balance jettonAddress:(NSString *)jettonAddress walletAddress:(TASDKTonApiDataAccountAddress *)walletAddress __attribute__((swift_name("init(balance:jettonAddress:walletAddress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataJettonBalanceCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataAccountAddress *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataJettonBalance *)doCopyBalance:(NSString *)balance jettonAddress:(NSString *)jettonAddress walletAddress:(TASDKTonApiDataAccountAddress *)walletAddress __attribute__((swift_name("doCopy(balance:jettonAddress:walletAddress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *balance __attribute__((swift_name("balance")));
@property (readonly) NSString *jettonAddress __attribute__((swift_name("jettonAddress")));
@property (readonly) TASDKTonApiDataAccountAddress *walletAddress __attribute__((swift_name("walletAddress")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.JettonBalanceCompanion")))
@interface TASDKTonApiDataJettonBalanceCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataJettonBalanceCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.JettonInfo")))
@interface TASDKTonApiDataJettonInfo : TASDKBase
- (instancetype)initWithMintable:(BOOL)mintable totalSupply:(NSString *)totalSupply __attribute__((swift_name("init(mintable:totalSupply:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataJettonInfoCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataJettonInfo *)doCopyMintable:(BOOL)mintable totalSupply:(NSString *)totalSupply __attribute__((swift_name("doCopy(mintable:totalSupply:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL mintable __attribute__((swift_name("mintable")));
@property (readonly) NSString *totalSupply __attribute__((swift_name("totalSupply")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.JettonInfoCompanion")))
@interface TASDKTonApiDataJettonInfoCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataJettonInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.JettonsBalances")))
@interface TASDKTonApiDataJettonsBalances : TASDKBase
- (instancetype)initWithBalances:(NSMutableArray<TASDKTonApiDataJettonBalance *> *)balances __attribute__((swift_name("init(balances:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataJettonsBalancesCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<TASDKTonApiDataJettonBalance *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataJettonsBalances *)doCopyBalances:(NSMutableArray<TASDKTonApiDataJettonBalance *> *)balances __attribute__((swift_name("doCopy(balances:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSMutableArray<TASDKTonApiDataJettonBalance *> *balances __attribute__((swift_name("balances")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.JettonsBalancesCompanion")))
@interface TASDKTonApiDataJettonsBalancesCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataJettonsBalancesCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.Message")))
@interface TASDKTonApiDataMessage : TASDKBase
- (instancetype)initWithCreatedLt:(int64_t)createdLt destination:(TASDKTonApiDataAccountAddress * _Nullable)destination fwdFee:(int64_t)fwdFee ihrFee:(int64_t)ihrFee source:(TASDKTonApiDataAccountAddress * _Nullable)source value:(int64_t)value __attribute__((swift_name("init(createdLt:destination:fwdFee:ihrFee:source:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataMessageCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataAccountAddress * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataAccountAddress * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataMessage *)doCopyCreatedLt:(int64_t)createdLt destination:(TASDKTonApiDataAccountAddress * _Nullable)destination fwdFee:(int64_t)fwdFee ihrFee:(int64_t)ihrFee source:(TASDKTonApiDataAccountAddress * _Nullable)source value:(int64_t)value __attribute__((swift_name("doCopy(createdLt:destination:fwdFee:ihrFee:source:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t createdLt __attribute__((swift_name("createdLt")));
@property (readonly) TASDKTonApiDataAccountAddress * _Nullable destination __attribute__((swift_name("destination")));
@property (readonly) int64_t fwdFee __attribute__((swift_name("fwdFee")));
@property (readonly) int64_t ihrFee __attribute__((swift_name("ihrFee")));
@property (readonly) TASDKTonApiDataAccountAddress * _Nullable source __attribute__((swift_name("source")));
@property (readonly) int64_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.MessageCompanion")))
@interface TASDKTonApiDataMessageCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.NftCollection")))
@interface TASDKTonApiDataNftCollection : TASDKBase
- (instancetype)initWithAddress:(NSString *)address nextItemIndex:(int64_t)nextItemIndex owner:(TASDKTonApiDataAccountAddress * _Nullable)owner rawCollectionContent:(NSString *)rawCollectionContent __attribute__((swift_name("init(address:nextItemIndex:owner:rawCollectionContent:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataNftCollectionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataAccountAddress * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataNftCollection *)doCopyAddress:(NSString *)address nextItemIndex:(int64_t)nextItemIndex owner:(TASDKTonApiDataAccountAddress * _Nullable)owner rawCollectionContent:(NSString *)rawCollectionContent __attribute__((swift_name("doCopy(address:nextItemIndex:owner:rawCollectionContent:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *address __attribute__((swift_name("address")));
@property (readonly) int64_t nextItemIndex __attribute__((swift_name("nextItemIndex")));
@property (readonly) TASDKTonApiDataAccountAddress * _Nullable owner __attribute__((swift_name("owner")));
@property (readonly) NSString *rawCollectionContent __attribute__((swift_name("rawCollectionContent")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.NftCollectionCompanion")))
@interface TASDKTonApiDataNftCollectionCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataNftCollectionCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.NftCollections")))
@interface TASDKTonApiDataNftCollections : TASDKBase
- (instancetype)initWithNftCollections:(NSMutableArray<TASDKTonApiDataNftCollection *> *)nftCollections __attribute__((swift_name("init(nftCollections:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataNftCollectionsCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<TASDKTonApiDataNftCollection *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataNftCollections *)doCopyNftCollections:(NSMutableArray<TASDKTonApiDataNftCollection *> *)nftCollections __attribute__((swift_name("doCopy(nftCollections:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSMutableArray<TASDKTonApiDataNftCollection *> *nftCollections __attribute__((swift_name("nftCollections")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.NftCollectionsCompanion")))
@interface TASDKTonApiDataNftCollectionsCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataNftCollectionsCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.NftForSale")))
@interface TASDKTonApiDataNftForSale : TASDKBase
- (instancetype)initWithNft:(TASDKTonApiDataNftItem *)nft saleContract:(NSString *)saleContract __attribute__((swift_name("init(nft:saleContract:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataNftForSaleCompanion *companion __attribute__((swift_name("companion")));
- (TASDKTonApiDataNftItem *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataNftForSale *)doCopyNft:(TASDKTonApiDataNftItem *)nft saleContract:(NSString *)saleContract __attribute__((swift_name("doCopy(nft:saleContract:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TASDKTonApiDataNftItem *nft __attribute__((swift_name("nft")));
@property (readonly) NSString *saleContract __attribute__((swift_name("saleContract")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.NftForSaleCompanion")))
@interface TASDKTonApiDataNftForSaleCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataNftForSaleCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.NftItem")))
@interface TASDKTonApiDataNftItem : TASDKBase
- (instancetype)initWithAddress:(NSString *)address collectionAddress:(NSString * _Nullable)collectionAddress index:(int64_t)index init:(BOOL)init owner:(TASDKTonApiDataAccountAddress * _Nullable)owner rawIndividualContent:(NSString *)rawIndividualContent verified:(BOOL)verified __attribute__((swift_name("init(address:collectionAddress:index:init:owner:rawIndividualContent:verified:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataNftItemCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataAccountAddress * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataNftItem *)doCopyAddress:(NSString *)address collectionAddress:(NSString * _Nullable)collectionAddress index:(int64_t)index init:(BOOL)init owner:(TASDKTonApiDataAccountAddress * _Nullable)owner rawIndividualContent:(NSString *)rawIndividualContent verified:(BOOL)verified __attribute__((swift_name("doCopy(address:collectionAddress:index:init:owner:rawIndividualContent:verified:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *address __attribute__((swift_name("address")));
@property (readonly) NSString * _Nullable collectionAddress __attribute__((swift_name("collectionAddress")));
@property (readonly) int64_t index __attribute__((swift_name("index")));
@property (readonly, getter=doInit) BOOL init __attribute__((swift_name("init")));
@property (readonly) TASDKTonApiDataAccountAddress * _Nullable owner __attribute__((swift_name("owner")));
@property (readonly) NSString *rawIndividualContent __attribute__((swift_name("rawIndividualContent")));
@property (readonly) BOOL verified __attribute__((swift_name("verified")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.NftItemCompanion")))
@interface TASDKTonApiDataNftItemCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataNftItemCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.NftItems")))
@interface TASDKTonApiDataNftItems : TASDKBase
- (instancetype)initWithNftItems:(NSMutableArray<TASDKTonApiDataNftItem *> *)nftItems __attribute__((swift_name("init(nftItems:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataNftItemsCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<TASDKTonApiDataNftItem *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataNftItems *)doCopyNftItems:(NSMutableArray<TASDKTonApiDataNftItem *> *)nftItems __attribute__((swift_name("doCopy(nftItems:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSMutableArray<TASDKTonApiDataNftItem *> *nftItems __attribute__((swift_name("nftItems")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.NftItemsCompanion")))
@interface TASDKTonApiDataNftItemsCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataNftItemsCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.NftSalesResponse")))
@interface TASDKTonApiDataNftSalesResponse : TASDKBase
- (instancetype)initWithDisintar:(NSMutableArray<TASDKTonApiDataNftForSale *> * _Nullable)disintar getgems:(NSMutableArray<TASDKTonApiDataNftForSale *> * _Nullable)getgems __attribute__((swift_name("init(disintar:getgems:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataNftSalesResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<TASDKTonApiDataNftForSale *> * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSMutableArray<TASDKTonApiDataNftForSale *> * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataNftSalesResponse *)doCopyDisintar:(NSMutableArray<TASDKTonApiDataNftForSale *> * _Nullable)disintar getgems:(NSMutableArray<TASDKTonApiDataNftForSale *> * _Nullable)getgems __attribute__((swift_name("doCopy(disintar:getgems:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSMutableArray<TASDKTonApiDataNftForSale *> * _Nullable disintar __attribute__((swift_name("disintar")));
@property (readonly) NSMutableArray<TASDKTonApiDataNftForSale *> * _Nullable getgems __attribute__((swift_name("getgems")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.NftSalesResponseCompanion")))
@interface TASDKTonApiDataNftSalesResponseCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataNftSalesResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.Trace")))
@interface TASDKTonApiDataTrace : TASDKBase
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataTraceCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataTrace *)doCopyId:(NSString *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.TraceCompanion")))
@interface TASDKTonApiDataTraceCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataTraceCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.TraceMsg")))
@interface TASDKTonApiDataTraceMsg : TASDKBase
- (instancetype)initWithComment:(NSString * _Nullable)comment createdLt:(int64_t)createdLt destination:(TASDKTonApiDataAccountAddress *)destination fwdFee:(int64_t)fwdFee ihrFee:(int64_t)ihrFee source:(TASDKTonApiDataAccountAddress *)source tx:(TASDKTonApiDataTraceTX * _Nullable)tx value:(int64_t)value __attribute__((swift_name("init(comment:createdLt:destination:fwdFee:ihrFee:source:tx:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataTraceMsgCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataAccountAddress *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataAccountAddress *)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataTraceTX * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataTraceMsg *)doCopyComment:(NSString * _Nullable)comment createdLt:(int64_t)createdLt destination:(TASDKTonApiDataAccountAddress *)destination fwdFee:(int64_t)fwdFee ihrFee:(int64_t)ihrFee source:(TASDKTonApiDataAccountAddress *)source tx:(TASDKTonApiDataTraceTX * _Nullable)tx value:(int64_t)value __attribute__((swift_name("doCopy(comment:createdLt:destination:fwdFee:ihrFee:source:tx:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable comment __attribute__((swift_name("comment")));
@property (readonly) int64_t createdLt __attribute__((swift_name("createdLt")));
@property (readonly) TASDKTonApiDataAccountAddress *destination __attribute__((swift_name("destination")));
@property (readonly) int64_t fwdFee __attribute__((swift_name("fwdFee")));
@property (readonly) int64_t ihrFee __attribute__((swift_name("ihrFee")));
@property (readonly) TASDKTonApiDataAccountAddress *source __attribute__((swift_name("source")));
@property (readonly) TASDKTonApiDataTraceTX * _Nullable tx __attribute__((swift_name("tx")));
@property (readonly) int64_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.TraceMsgCompanion")))
@interface TASDKTonApiDataTraceMsgCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataTraceMsgCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.TraceTX")))
@interface TASDKTonApiDataTraceTX : TASDKBase
- (instancetype)initWithAnnotations:(NSMutableArray<TASDKTonApiDataTxAnnotation *> *)annotations blockHash:(NSString *)blockHash fee:(int64_t)fee hash:(NSString *)hash lt:(int64_t)lt otherFee:(int64_t)otherFee outMsgs:(NSMutableArray<TASDKTonApiDataTraceMsg *> *)outMsgs storageFee:(int64_t)storageFee utime:(int64_t)utime __attribute__((swift_name("init(annotations:blockHash:fee:hash:lt:otherFee:outMsgs:storageFee:utime:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataTraceTXCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<TASDKTonApiDataTxAnnotation *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSMutableArray<TASDKTonApiDataTraceMsg *> *)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataTraceTX *)doCopyAnnotations:(NSMutableArray<TASDKTonApiDataTxAnnotation *> *)annotations blockHash:(NSString *)blockHash fee:(int64_t)fee hash:(NSString *)hash lt:(int64_t)lt otherFee:(int64_t)otherFee outMsgs:(NSMutableArray<TASDKTonApiDataTraceMsg *> *)outMsgs storageFee:(int64_t)storageFee utime:(int64_t)utime __attribute__((swift_name("doCopy(annotations:blockHash:fee:hash:lt:otherFee:outMsgs:storageFee:utime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSMutableArray<TASDKTonApiDataTxAnnotation *> *annotations __attribute__((swift_name("annotations")));
@property (readonly) NSString *blockHash __attribute__((swift_name("blockHash")));
@property (readonly) int64_t fee __attribute__((swift_name("fee")));
@property (readonly, getter=hash_) NSString *hash __attribute__((swift_name("hash")));
@property (readonly) int64_t lt __attribute__((swift_name("lt")));
@property (readonly) int64_t otherFee __attribute__((swift_name("otherFee")));
@property (readonly) NSMutableArray<TASDKTonApiDataTraceMsg *> *outMsgs __attribute__((swift_name("outMsgs")));
@property (readonly) int64_t storageFee __attribute__((swift_name("storageFee")));
@property (readonly) int64_t utime __attribute__((swift_name("utime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.TraceTXCompanion")))
@interface TASDKTonApiDataTraceTXCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataTraceTXCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.Traces")))
@interface TASDKTonApiDataTraces : TASDKBase
- (instancetype)initWithTraces:(NSMutableArray<TASDKTonApiDataTrace *> *)traces __attribute__((swift_name("init(traces:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataTracesCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<TASDKTonApiDataTrace *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataTraces *)doCopyTraces:(NSMutableArray<TASDKTonApiDataTrace *> *)traces __attribute__((swift_name("doCopy(traces:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSMutableArray<TASDKTonApiDataTrace *> *traces __attribute__((swift_name("traces")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.TracesCompanion")))
@interface TASDKTonApiDataTracesCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataTracesCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.Transaction")))
@interface TASDKTonApiDataTransaction : TASDKBase
- (instancetype)initWithAccount:(TASDKTonApiDataAccountAddress *)account data:(NSString *)data fee:(int64_t)fee hash:(NSString *)hash inMsg:(TASDKTonApiDataMessage * _Nullable)inMsg lt:(int64_t)lt otherFee:(int64_t)otherFee outMsgs:(NSMutableArray<TASDKTonApiDataMessage *> *)outMsgs storageFee:(int64_t)storageFee utime:(int64_t)utime __attribute__((swift_name("init(account:data:fee:hash:inMsg:lt:otherFee:outMsgs:storageFee:utime:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataTransactionCompanion *companion __attribute__((swift_name("companion")));
- (TASDKTonApiDataAccountAddress *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataMessage * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSMutableArray<TASDKTonApiDataMessage *> *)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataTransaction *)doCopyAccount:(TASDKTonApiDataAccountAddress *)account data:(NSString *)data fee:(int64_t)fee hash:(NSString *)hash inMsg:(TASDKTonApiDataMessage * _Nullable)inMsg lt:(int64_t)lt otherFee:(int64_t)otherFee outMsgs:(NSMutableArray<TASDKTonApiDataMessage *> *)outMsgs storageFee:(int64_t)storageFee utime:(int64_t)utime __attribute__((swift_name("doCopy(account:data:fee:hash:inMsg:lt:otherFee:outMsgs:storageFee:utime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TASDKTonApiDataAccountAddress *account __attribute__((swift_name("account")));
@property (readonly) NSString *data __attribute__((swift_name("data")));
@property (readonly) int64_t fee __attribute__((swift_name("fee")));
@property (readonly, getter=hash_) NSString *hash __attribute__((swift_name("hash")));
@property (readonly) TASDKTonApiDataMessage * _Nullable inMsg __attribute__((swift_name("inMsg")));
@property (readonly) int64_t lt __attribute__((swift_name("lt")));
@property (readonly) int64_t otherFee __attribute__((swift_name("otherFee")));
@property (readonly) NSMutableArray<TASDKTonApiDataMessage *> *outMsgs __attribute__((swift_name("outMsgs")));
@property (readonly) int64_t storageFee __attribute__((swift_name("storageFee")));
@property (readonly) int64_t utime __attribute__((swift_name("utime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.TransactionCompanion")))
@interface TASDKTonApiDataTransactionCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataTransactionCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.Transactions")))
@interface TASDKTonApiDataTransactions : TASDKBase
- (instancetype)initWithTransactions:(NSMutableArray<TASDKTonApiDataTransaction *> *)transactions __attribute__((swift_name("init(transactions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataTransactionsCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<TASDKTonApiDataTransaction *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataTransactions *)doCopyTransactions:(NSMutableArray<TASDKTonApiDataTransaction *> *)transactions __attribute__((swift_name("doCopy(transactions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSMutableArray<TASDKTonApiDataTransaction *> *transactions __attribute__((swift_name("transactions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.TransactionsCompanion")))
@interface TASDKTonApiDataTransactionsCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataTransactionsCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.TxAnnotation")))
@interface TASDKTonApiDataTxAnnotation : TASDKBase
- (instancetype)initWithAddress:(TASDKTonApiDataAccountAddress *)address name:(NSString *)name __attribute__((swift_name("init(address:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataTxAnnotationCompanion *companion __attribute__((swift_name("companion")));
- (TASDKTonApiDataAccountAddress *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataTxAnnotation *)doCopyAddress:(TASDKTonApiDataAccountAddress *)address name:(NSString *)name __attribute__((swift_name("doCopy(address:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TASDKTonApiDataAccountAddress *address __attribute__((swift_name("address")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.TxAnnotationCompanion")))
@interface TASDKTonApiDataTxAnnotationCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataTxAnnotationCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.Wallet")))
@interface TASDKTonApiDataWallet : TASDKBase
- (instancetype)initWithAddress:(NSString *)address tag:(NSString *)tag __attribute__((swift_name("init(address:tag:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataWalletCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataWallet *)doCopyAddress:(NSString *)address tag:(NSString *)tag __attribute__((swift_name("doCopy(address:tag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *address __attribute__((swift_name("address")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.WalletCompanion")))
@interface TASDKTonApiDataWalletCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataWalletCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.Wallets")))
@interface TASDKTonApiDataWallets : TASDKBase
- (instancetype)initWithWallets:(NSMutableArray<TASDKTonApiDataWallet *> *)wallets __attribute__((swift_name("init(wallets:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonApiDataWalletsCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<TASDKTonApiDataWallet *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonApiDataWallets *)doCopyWallets:(NSMutableArray<TASDKTonApiDataWallet *> *)wallets __attribute__((swift_name("doCopy(wallets:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSMutableArray<TASDKTonApiDataWallet *> *wallets __attribute__((swift_name("wallets")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiData.WalletsCompanion")))
@interface TASDKTonApiDataWalletsCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiDataWalletsCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("TonApiMethodBase")))
@interface TASDKTonApiMethodBase : TASDKBase
- (instancetype)initWithVersion:(int32_t)version httpClient:(TASDKKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(version:httpClient:)"))) __attribute__((objc_designated_initializer));
- (TASDKKtor_httpUrl *)buildUrlSection:(NSString *)section method:(NSString *)method params:(TASDKTonApiMethodBaseParams *)params __attribute__((swift_name("buildUrl(section:method:params:)")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)executeSection:(NSString *)section method:(NSString *)method block:(void (^)(TASDKTonApiMethodBaseParams *))block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(section:method:block:completionHandler:)")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)requestUrl:(TASDKKtor_httpUrl *)url completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("request(url:completionHandler:)")));
- (TASDKTonApiMethodBaseParams *)get:(void (^)(TASDKTonApiMethodBaseParams *))receiver __attribute__((swift_name("get(_:)")));
@property (readonly) TASDKKtor_client_coreHttpClient *httpClient __attribute__((swift_name("httpClient")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiMethodBase.Params")))
@interface TASDKTonApiMethodBaseParams : TASDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) TASDKTonApiMethodBaseQuery *query __attribute__((swift_name("query")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiMethodBase.Query")))
@interface TASDKTonApiMethodBaseQuery : TASDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)setKey:(NSString *)key value:(id)value __attribute__((swift_name("set(key:value:)")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) TASDKMutableDictionary<NSString *, id> *map __attribute__((swift_name("map")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiMethodV1")))
@interface TASDKTonApiMethodV1 : TASDKTonApiMethodBase
- (instancetype)initWithClient:(TASDKKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithVersion:(int32_t)version httpClient:(TASDKKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(version:httpClient:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)annotationGetByAccountAccount:(NSString *)account limit:(int32_t)limit completionHandler:(void (^)(TASDKTonApiDataAnnotations * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("annotationGetByAccount(account:limit:completionHandler:)")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)authLoginTonlogin:(NSString *)tonlogin completionHandler:(void (^)(TASDKTonKeeperDataLoginResolve * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("authLogin(tonlogin:completionHandler:)")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)blockchainGetAccountAccount:(NSString *)account completionHandler:(void (^)(TASDKTonApiDataAccount * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("blockchainGetAccount(account:completionHandler:)")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)blockchainGetBlockBlockHash:(NSString *)blockHash completionHandler:(void (^)(TASDKTonApiDataBlock * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("blockchainGetBlock(blockHash:completionHandler:)")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)blockchainGetTransactionHash:(NSString *)hash completionHandler:(void (^)(TASDKTonApiDataTransaction * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("blockchainGetTransaction(hash:completionHandler:)")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)blockchainGetTransactionsAccount:(NSString *)account maxLt:(int64_t)maxLt minLt:(int64_t)minLt limit:(int32_t)limit completionHandler:(void (^)(TASDKTonApiDataTransactions * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("blockchainGetTransactions(account:maxLt:minLt:limit:completionHandler:)")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)jettonGetBalancesAccount:(NSString *)account completionHandler:(void (^)(TASDKTonApiDataJettonsBalances * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("jettonGetBalances(account:completionHandler:)")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)jettonGetInfoAccount:(NSString *)account completionHandler:(void (^)(TASDKTonApiDataJettonInfo * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("jettonGetInfo(account:completionHandler:)")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)ntfGetCollectionAccount:(NSString *)account completionHandler:(void (^)(TASDKTonApiDataNftCollection * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("ntfGetCollection(account:completionHandler:)")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)ntfGetCollectionsWithCompletionHandler:(void (^)(TASDKTonApiDataNftCollections * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("ntfGetCollections(completionHandler:)")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)ntfGetItemAccount:(NSString *)account completionHandler:(void (^)(TASDKTonApiDataNftItem * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("ntfGetItem(account:completionHandler:)")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)ntfGetItemsByCollectionAddressAccount:(NSString *)account completionHandler:(void (^)(TASDKTonApiDataNftItems * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("ntfGetItemsByCollectionAddress(account:completionHandler:)")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)ntfGetItemsByOwnerAddressAccount:(NSString *)account completionHandler:(void (^)(TASDKTonApiDataNftItems * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("ntfGetItemsByOwnerAddress(account:completionHandler:)")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)ntfGetNftForSaleAccount:(NSString *)account completionHandler:(void (^)(TASDKTonApiDataNftSalesResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("ntfGetNftForSale(account:completionHandler:)")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)traceGetAccountHistoryAccount:(NSString *)account completionHandler:(void (^)(TASDKTonApiDataTraces * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("traceGetAccountHistory(account:completionHandler:)")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)traceGetTraceTraceId:(NSString *)traceId completionHandler:(void (^)(TASDKTonApiDataTrace * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("traceGetTrace(traceId:completionHandler:)")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)walletFindByPubkeyPublicKey:(NSString *)publicKey completionHandler:(void (^)(TASDKTonApiDataTrace * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("walletFindByPubkey(publicKey:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiSdk")))
@interface TASDKTonApiSdk : TASDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TASDKTonApiSdkCompanion *companion __attribute__((swift_name("companion")));
- (void)logout __attribute__((swift_name("logout()")));
- (TASDKTonKeeperAuth *)tonKeeperAuthScheme:(NSString *)scheme callback:(void (^)(NSString *))callback __attribute__((swift_name("tonKeeperAuth(scheme:callback:)")));
@property (readonly) TASDKTonApiMethodV1 *v1 __attribute__((swift_name("v1")));
@property (readonly) NSString * _Nullable wallet __attribute__((swift_name("wallet")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiSdk.Companion")))
@interface TASDKTonApiSdkCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonApiSdkCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface TASDKKotlinThrowable : TASDKBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TASDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TASDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (TASDKKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TASDKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonApiThrow")))
@interface TASDKTonApiThrow : TASDKKotlinThrowable
- (instancetype)initWithError:(TASDKTonApiDataError *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(TASDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TASDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSString *)getLocalizedMessage __attribute__((swift_name("getLocalizedMessage()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("fsdfsd")))
@interface TASDKfsdfsd : TASDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KeyValue")))
@interface TASDKKeyValue : TASDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)getBooleanKey:(NSString *)key default:(BOOL)default_ __attribute__((swift_name("getBoolean(key:default:)")));
- (float)getFloatKey:(NSString *)key default:(float)default_ __attribute__((swift_name("getFloat(key:default:)")));
- (int32_t)getIntKey:(NSString *)key default:(int32_t)default_ __attribute__((swift_name("getInt(key:default:)")));
- (int64_t)getLongKey:(NSString *)key default:(int64_t)default_ __attribute__((swift_name("getLong(key:default:)")));
- (NSString * _Nullable)getStringKey:(NSString *)key default:(NSString * _Nullable)default_ __attribute__((swift_name("getString(key:default:)")));
- (void)setBooleanKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("setBoolean(key:value:)")));
- (void)setFloatKey:(NSString *)key value:(float)value __attribute__((swift_name("setFloat(key:value:)")));
- (void)setIntKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("setInt(key:value:)")));
- (void)setLongKey:(NSString *)key value:(int64_t)value __attribute__((swift_name("setLong(key:value:)")));
- (void)setStringKey:(NSString *)key value:(NSString * _Nullable)value __attribute__((swift_name("setString(key:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("URLEncoder")))
@interface TASDKURLEncoder : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)uRLEncoder __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKURLEncoder *shared __attribute__((swift_name("shared")));
- (NSString * _Nullable)encodeValue:(NSString * _Nullable)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UrlParser")))
@interface TASDKUrlParser : TASDKBase
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKUrlParserCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)getQueryKey:(NSString *)key __attribute__((swift_name("getQuery(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable path __attribute__((swift_name("path")));
@property (readonly) NSString * _Nullable query __attribute__((swift_name("query")));
@property (readonly) NSString * _Nullable scheme __attribute__((swift_name("scheme")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UrlParser.Companion")))
@interface TASDKUrlParserCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKUrlParserCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonKeeperAuth")))
@interface TASDKTonKeeperAuth : TASDKBase
- (instancetype)initWithTonApiSdk:(TASDKTonApiSdk *)tonApiSdk scheme:(NSString *)scheme callback:(void (^)(NSString *))callback __attribute__((swift_name("init(tonApiSdk:scheme:callback:)"))) __attribute__((objc_designated_initializer));
- (BOOL)handleURLUrl:(NSString *)url __attribute__((swift_name("handleURL(url:)")));
- (void)launch __attribute__((swift_name("launch()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonKeeperAuthImpl")))
@interface TASDKTonKeeperAuthImpl : TASDKBase
- (instancetype)initWithTonApiSdk:(TASDKTonApiSdk *)tonApiSdk scheme:(NSString *)scheme callback:(void (^)(NSString *))callback __attribute__((swift_name("init(tonApiSdk:scheme:callback:)"))) __attribute__((objc_designated_initializer));
- (BOOL)handleURLUrl:(NSString *)url __attribute__((swift_name("handleURL(url:)")));
- (BOOL)returnReadyWallet __attribute__((swift_name("returnReadyWallet()")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonKeeperData")))
@interface TASDKTonKeeperData : TASDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonKeeperData.LoginResolve")))
@interface TASDKTonKeeperDataLoginResolve : TASDKBase
- (instancetype)initWithClient_id:(NSString *)client_id payload:(NSMutableArray<TASDKTonKeeperDataPayload *> *)payload __attribute__((swift_name("init(client_id:payload:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonKeeperDataLoginResolveCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSMutableArray<TASDKTonKeeperDataPayload *> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonKeeperDataLoginResolve *)doCopyClient_id:(NSString *)client_id payload:(NSMutableArray<TASDKTonKeeperDataPayload *> *)payload __attribute__((swift_name("doCopy(client_id:payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *client_id __attribute__((swift_name("client_id")));
@property (readonly) NSMutableArray<TASDKTonKeeperDataPayload *> *payload __attribute__((swift_name("payload")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonKeeperData.LoginResolveCompanion")))
@interface TASDKTonKeeperDataLoginResolveCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonKeeperDataLoginResolveCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonKeeperData.Payload")))
@interface TASDKTonKeeperDataPayload : TASDKBase
- (instancetype)initWithType:(NSString *)type address:(NSString *)address __attribute__((swift_name("init(type:address:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKTonKeeperDataPayloadCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKTonKeeperDataPayload *)doCopyType:(NSString *)type address:(NSString *)address __attribute__((swift_name("doCopy(type:address:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *address __attribute__((swift_name("address")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonKeeperData.PayloadCompanion")))
@interface TASDKTonKeeperDataPayloadCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKTonKeeperDataPayloadCompanion *shared __attribute__((swift_name("shared")));
- (id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonKeeperTransfer")))
@interface TASDKTonKeeperTransfer : TASDKBase
- (instancetype)initWithAddress:(NSString *)address amount:(float)amount text:(NSString * _Nullable)text __attribute__((swift_name("init(address:amount:text:)"))) __attribute__((objc_designated_initializer));
- (void)launch __attribute__((swift_name("launch()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TonKeeperTransferImpl")))
@interface TASDKTonKeeperTransferImpl : TASDKBase
- (instancetype)initWithAddress:(NSString *)address amount:(float)amount text:(NSString * _Nullable)text __attribute__((swift_name("init(address:amount:text:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol TASDKKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<TASDKKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<TASDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol TASDKKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<TASDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<TASDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol TASDKKotlinx_serialization_coreKSerializer <TASDKKotlinx_serialization_coreSerializationStrategy, TASDKKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol TASDKKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<TASDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol TASDKKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface TASDKKtor_client_coreHttpClient : TASDKBase <TASDKKotlinx_coroutines_coreCoroutineScope, TASDKKtor_ioCloseable>
- (instancetype)initWithEngine:(id<TASDKKtor_client_coreHttpClientEngine>)engine userConfig:(TASDKKtor_client_coreHttpClientConfig<TASDKKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (TASDKKtor_client_coreHttpClient *)configBlock:(void (^)(TASDKKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<TASDKKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<TASDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<TASDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<TASDKKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) TASDKKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) TASDKKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) TASDKKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) TASDKKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) TASDKKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) TASDKKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface TASDKKtor_httpUrl : TASDKBase
@property (class, readonly, getter=companion) TASDKKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<TASDKKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) TASDKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface TASDKKotlinArray<T> : TASDKBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(TASDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<TASDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol TASDKKotlinx_serialization_coreEncoder
@required
- (id<TASDKKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<TASDKKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<TASDKKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<TASDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<TASDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) TASDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol TASDKKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<TASDKKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<TASDKKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<TASDKKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) TASDKKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol TASDKKotlinx_serialization_coreDecoder
@required
- (id<TASDKKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<TASDKKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (TASDKKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<TASDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<TASDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) TASDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol TASDKKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<TASDKKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<TASDKKotlinCoroutineContextElement> _Nullable)getKey:(id<TASDKKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<TASDKKotlinCoroutineContext>)minusKeyKey:(id<TASDKKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<TASDKKotlinCoroutineContext>)plusContext:(id<TASDKKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol TASDKKtor_client_coreHttpClientEngine <TASDKKotlinx_coroutines_coreCoroutineScope, TASDKKtor_ioCloseable>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(TASDKKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(TASDKKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(TASDKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) TASDKKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) TASDKKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<TASDKKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface TASDKKtor_client_coreHttpClientEngineConfig : TASDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property TASDKKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface TASDKKtor_client_coreHttpClientConfig<T> : TASDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (TASDKKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(TASDKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<TASDKKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(TASDKKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(TASDKKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol TASDKKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol TASDKKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(TASDKKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(TASDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(TASDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(TASDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(TASDKKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(TASDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(TASDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(TASDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<TASDKKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface TASDKKtor_eventsEvents : TASDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(TASDKKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<TASDKKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(TASDKKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(TASDKKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface TASDKKtor_utilsPipeline<TSubject, TContext> : TASDKBase
- (instancetype)initWithPhase:(TASDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<TASDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(TASDKKotlinArray<TASDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(TASDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(TASDKKtor_utilsPipelinePhase *)reference phase:(TASDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(TASDKKtor_utilsPipelinePhase *)reference phase:(TASDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(TASDKKtor_utilsPipelinePhase *)phase block:(id<TASDKKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<TASDKKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(TASDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(TASDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(TASDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(TASDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<TASDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<TASDKKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface TASDKKtor_client_coreHttpReceivePipeline : TASDKKtor_utilsPipeline<TASDKKtor_client_coreHttpResponse *, TASDKKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(TASDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<TASDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(TASDKKotlinArray<TASDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TASDKKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface TASDKKtor_client_coreHttpRequestPipeline : TASDKKtor_utilsPipeline<id, TASDKKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(TASDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<TASDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(TASDKKotlinArray<TASDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TASDKKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface TASDKKtor_client_coreHttpResponsePipeline : TASDKKtor_utilsPipeline<TASDKKtor_client_coreHttpResponseContainer *, TASDKKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(TASDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<TASDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(TASDKKotlinArray<TASDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TASDKKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface TASDKKtor_client_coreHttpSendPipeline : TASDKKtor_utilsPipeline<id, TASDKKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(TASDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<TASDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(TASDKKotlinArray<TASDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TASDKKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface TASDKKtor_httpUrlCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol TASDKKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<TASDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol TASDKKtor_httpParameters <TASDKKtor_utilsStringValues>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface TASDKKtor_httpURLProtocol : TASDKBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol TASDKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol TASDKKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<TASDKKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<TASDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<TASDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) TASDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface TASDKKotlinx_serialization_coreSerializersModule : TASDKBase
- (void)dumpToCollector:(id<TASDKKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<TASDKKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<TASDKKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<TASDKKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<TASDKKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<TASDKKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<TASDKKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<TASDKKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol TASDKKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface TASDKKotlinx_serialization_coreSerialKind : TASDKBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol TASDKKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<TASDKKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<TASDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<TASDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<TASDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) TASDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface TASDKKotlinNothing : TASDKBase
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol TASDKKotlinCoroutineContextElement <TASDKKotlinCoroutineContext>
@required
@property (readonly) id<TASDKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol TASDKKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinException")))
@interface TASDKKotlinException : TASDKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TASDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TASDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface TASDKKotlinRuntimeException : TASDKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TASDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TASDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface TASDKKotlinIllegalStateException : TASDKKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TASDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TASDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface TASDKKotlinCancellationException : TASDKKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TASDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TASDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface TASDKKtor_client_coreHttpRequestData : TASDKBase
- (instancetype)initWithUrl:(TASDKKtor_httpUrl *)url method:(TASDKKtor_httpHttpMethod *)method headers:(id<TASDKKtor_httpHeaders>)headers body:(TASDKKtor_httpOutgoingContent *)body executionContext:(id<TASDKKotlinx_coroutines_coreJob>)executionContext attributes:(id<TASDKKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<TASDKKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<TASDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) TASDKKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<TASDKKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<TASDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) TASDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) TASDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface TASDKKtor_client_coreHttpResponseData : TASDKBase
- (instancetype)initWithStatusCode:(TASDKKtor_httpHttpStatusCode *)statusCode requestTime:(TASDKKtor_utilsGMTDate *)requestTime headers:(id<TASDKKtor_httpHeaders>)headers version:(TASDKKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<TASDKKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<TASDKKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<TASDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) TASDKKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) TASDKKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) TASDKKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) TASDKKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface TASDKKotlinAbstractCoroutineContextElement : TASDKBase <TASDKKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<TASDKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<TASDKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol TASDKKotlinContinuationInterceptor <TASDKKotlinCoroutineContextElement>
@required
- (id<TASDKKotlinContinuation>)interceptContinuationContinuation:(id<TASDKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<TASDKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface TASDKKotlinx_coroutines_coreCoroutineDispatcher : TASDKKotlinAbstractCoroutineContextElement <TASDKKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<TASDKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TASDKKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<TASDKKotlinCoroutineContext>)context block:(id<TASDKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<TASDKKotlinCoroutineContext>)context block:(id<TASDKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<TASDKKotlinContinuation>)interceptContinuationContinuation:(id<TASDKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<TASDKKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (TASDKKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (TASDKKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(TASDKKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<TASDKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface TASDKKtor_client_coreProxyConfig : TASDKBase
- (instancetype)initWithUrl:(TASDKKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TASDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol TASDKKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(TASDKKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) TASDKKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface TASDKKtor_utilsAttributeKey<T> : TASDKBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface TASDKKtor_eventsEventDefinition<T> : TASDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol TASDKKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface TASDKKtor_utilsPipelinePhase : TASDKBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol TASDKKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol TASDKKotlinSuspendFunction2 <TASDKKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface TASDKKtor_client_coreHttpReceivePipelinePhases : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) TASDKKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) TASDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) TASDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol TASDKKtor_httpHttpMessage
@required
@property (readonly) id<TASDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface TASDKKtor_client_coreHttpResponse : TASDKBase <TASDKKtor_httpHttpMessage, TASDKKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TASDKKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<TASDKKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) TASDKKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) TASDKKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) TASDKKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) TASDKKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface TASDKKotlinUnit : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface TASDKKtor_client_coreHttpRequestPipelinePhases : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) TASDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) TASDKKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) TASDKKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) TASDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) TASDKKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol TASDKKtor_httpHttpMessageBuilder
@required
@property (readonly) TASDKKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface TASDKKtor_client_coreHttpRequestBuilder : TASDKBase <TASDKKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TASDKKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (TASDKKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<TASDKKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<TASDKKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<TASDKKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (TASDKKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(TASDKKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (TASDKKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(TASDKKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(TASDKKtor_httpURLBuilder *, TASDKKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<TASDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property TASDKKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<TASDKKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) TASDKKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property TASDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) TASDKKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface TASDKKtor_client_coreHttpResponsePipelinePhases : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) TASDKKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) TASDKKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) TASDKKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) TASDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) TASDKKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface TASDKKtor_client_coreHttpResponseContainer : TASDKBase
- (instancetype)initWithExpectedType:(TASDKKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (TASDKKtor_utilsTypeInfo *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(TASDKKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TASDKKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface TASDKKtor_client_coreHttpClientCall : TASDKBase <TASDKKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(TASDKKtor_client_coreHttpClient *)client requestData:(TASDKKtor_client_coreHttpRequestData *)requestData responseData:(TASDKKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(TASDKKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(TASDKKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<TASDKKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<TASDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) TASDKKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<TASDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<TASDKKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property TASDKKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface TASDKKtor_client_coreHttpSendPipelinePhases : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) TASDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) TASDKKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) TASDKKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) TASDKKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) TASDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol TASDKKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface TASDKKtor_httpURLProtocolCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (TASDKKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) TASDKKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) TASDKKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) TASDKKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) TASDKKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) TASDKKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, TASDKKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol TASDKKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<TASDKKotlinKClass>)kClass provider:(id<TASDKKotlinx_serialization_coreKSerializer> (^)(NSArray<id<TASDKKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<TASDKKotlinKClass>)kClass serializer:(id<TASDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<TASDKKotlinKClass>)baseClass actualClass:(id<TASDKKotlinKClass>)actualClass actualSerializer:(id<TASDKKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<TASDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<TASDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<TASDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<TASDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<TASDKKotlinKClass>)baseClass defaultSerializerProvider:(id<TASDKKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol TASDKKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol TASDKKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol TASDKKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol TASDKKotlinKClass <TASDKKotlinKDeclarationContainer, TASDKKotlinKAnnotatedElement, TASDKKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface TASDKKtor_httpHttpMethod : TASDKBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol TASDKKtor_httpHeaders <TASDKKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface TASDKKtor_httpOutgoingContent : TASDKBase
- (id _Nullable)getPropertyKey:(TASDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(TASDKKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<TASDKKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) TASDKLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) TASDKKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<TASDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) TASDKKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol TASDKKotlinx_coroutines_coreJob <TASDKKotlinCoroutineContextElement>
@required
- (id<TASDKKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<TASDKKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(TASDKKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (TASDKKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<TASDKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(TASDKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<TASDKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(TASDKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<TASDKKotlinx_coroutines_coreJob>)plusOther_:(id<TASDKKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<TASDKKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<TASDKKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface TASDKKtor_httpHttpStatusCode : TASDKBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (TASDKKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol TASDKKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface TASDKKtor_utilsGMTDate : TASDKBase <TASDKKotlinComparable>
@property (class, readonly, getter=companion) TASDKKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(TASDKKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKKtor_utilsMonth *)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(TASDKKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(TASDKKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) TASDKKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) TASDKKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface TASDKKtor_httpHttpProtocolVersion : TASDKBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol TASDKKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<TASDKKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface TASDKKotlinAbstractCoroutineContextKey<B, E> : TASDKBase <TASDKKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<TASDKKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<TASDKKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface TASDKKotlinx_coroutines_coreCoroutineDispatcherKey : TASDKKotlinAbstractCoroutineContextKey<id<TASDKKotlinContinuationInterceptor>, TASDKKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<TASDKKotlinCoroutineContextKey>)baseKey safeCast:(id<TASDKKotlinCoroutineContextElement> _Nullable (^)(id<TASDKKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol TASDKKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol TASDKKtor_ioByteReadChannel
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(TASDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(TASDKLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(TASDKKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(TASDKLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(TASDKKtor_ioChunkBuffer *)dst completionHandler:(void (^)(TASDKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(TASDKKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(TASDKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(TASDKKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(TASDKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(TASDKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(TASDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(TASDKByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(TASDKDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(TASDKFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(TASDKKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(TASDKKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(TASDKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(TASDKLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(TASDKKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(TASDKKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<TASDKKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(TASDKShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<TASDKKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<TASDKKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(TASDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) TASDKKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol TASDKKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<TASDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<TASDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<TASDKKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<TASDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface TASDKKtor_utilsStringValuesBuilderImpl : TASDKBase <TASDKKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<TASDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<TASDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<TASDKKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<TASDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) TASDKMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface TASDKKtor_httpHeadersBuilder : TASDKKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<TASDKKtor_httpHeaders>)build __attribute__((swift_name("build()")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface TASDKKtor_client_coreHttpRequestBuilderCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface TASDKKtor_httpURLBuilder : TASDKBase
- (instancetype)initWithProtocol:(TASDKKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<TASDKKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (TASDKKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<TASDKKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<TASDKKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property TASDKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface TASDKKtor_utilsTypeInfo : TASDKBase
- (instancetype)initWithType:(id<TASDKKotlinKClass>)type reifiedType:(id<TASDKKotlinKType>)reifiedType kotlinType:(id<TASDKKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (id<TASDKKotlinKClass>)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<TASDKKotlinKType>)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<TASDKKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKKtor_utilsTypeInfo *)doCopyType:(id<TASDKKotlinKClass>)type reifiedType:(id<TASDKKotlinKType>)reifiedType kotlinType:(id<TASDKKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<TASDKKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<TASDKKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<TASDKKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface TASDKKtor_client_coreHttpClientCallCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) TASDKKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol TASDKKtor_client_coreHttpRequest <TASDKKtor_httpHttpMessage, TASDKKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<TASDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) TASDKKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) TASDKKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) TASDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) TASDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface TASDKKtor_httpHttpMethodCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (TASDKKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<TASDKKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) TASDKKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) TASDKKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) TASDKKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) TASDKKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) TASDKKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) TASDKKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) TASDKKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface TASDKKtor_httpHeaderValueWithParameters : TASDKBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<TASDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<TASDKKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface TASDKKtor_httpContentType : TASDKKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<TASDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<TASDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TASDKKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(TASDKKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (TASDKKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (TASDKKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol TASDKKotlinx_coroutines_coreChildHandle <TASDKKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(TASDKKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<TASDKKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol TASDKKotlinx_coroutines_coreChildJob <TASDKKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<TASDKKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol TASDKKotlinSequence
@required
- (id<TASDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol TASDKKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<TASDKKotlinx_coroutines_coreSelectInstance>)select block:(id<TASDKKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface TASDKKtor_httpHttpStatusCodeCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (TASDKKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) TASDKKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) TASDKKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) TASDKKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) TASDKKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) TASDKKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) TASDKKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) TASDKKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) TASDKKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) TASDKKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) TASDKKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) TASDKKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) TASDKKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) TASDKKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) TASDKKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) TASDKKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) TASDKKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) TASDKKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) TASDKKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) TASDKKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) TASDKKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) TASDKKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) TASDKKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) TASDKKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) TASDKKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) TASDKKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) TASDKKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) TASDKKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) TASDKKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) TASDKKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) TASDKKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) TASDKKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) TASDKKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) TASDKKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) TASDKKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) TASDKKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) TASDKKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) TASDKKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) TASDKKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) TASDKKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) TASDKKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) TASDKKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) TASDKKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) TASDKKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) TASDKKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) TASDKKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) TASDKKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) TASDKKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) TASDKKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) TASDKKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) TASDKKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) TASDKKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) TASDKKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<TASDKKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface TASDKKtor_utilsGMTDateCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) TASDKKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface TASDKKotlinEnum<E> : TASDKBase <TASDKKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface TASDKKtor_utilsWeekDay : TASDKKotlinEnum<TASDKKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TASDKKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) TASDKKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) TASDKKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) TASDKKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) TASDKKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) TASDKKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) TASDKKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) TASDKKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (TASDKKotlinArray<TASDKKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface TASDKKtor_utilsMonth : TASDKKotlinEnum<TASDKKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TASDKKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) TASDKKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) TASDKKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) TASDKKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) TASDKKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) TASDKKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) TASDKKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) TASDKKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) TASDKKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) TASDKKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) TASDKKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) TASDKKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) TASDKKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (TASDKKotlinArray<TASDKKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface TASDKKtor_httpHttpProtocolVersionCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (TASDKKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (TASDKKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) TASDKKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) TASDKKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) TASDKKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) TASDKKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) TASDKKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface TASDKKtor_ioMemory : TASDKBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(TASDKKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(TASDKKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (TASDKKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (TASDKKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end;

__attribute__((swift_name("Ktor_ioBuffer")))
@interface TASDKKtor_ioBuffer : TASDKBase
- (instancetype)initWithMemory:(TASDKKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (TASDKKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)duplicateToCopy:(TASDKKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) TASDKKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end;

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface TASDKKtor_ioChunkBuffer : TASDKKtor_ioBuffer
- (instancetype)initWithMemory:(TASDKKtor_ioMemory *)memory origin:(TASDKKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<TASDKKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(TASDKKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TASDKKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (TASDKKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (TASDKKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<TASDKKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) TASDKKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) TASDKKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface TASDKKotlinByteArray : TASDKBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(TASDKByte *(^)(TASDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (TASDKKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Ktor_ioInput")))
@interface TASDKKtor_ioInput : TASDKBase <TASDKKtor_ioCloseable>
- (instancetype)initWithHead:(TASDKKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<TASDKKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (TASDKKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(TASDKKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(TASDKKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)peekToBuffer:(TASDKKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<TASDKKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<TASDKKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<TASDKKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface TASDKKtor_ioByteReadPacket : TASDKKtor_ioInput
- (instancetype)initWithHead:(TASDKKtor_ioChunkBuffer *)head pool:(id<TASDKKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(TASDKKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<TASDKKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TASDKKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (TASDKKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));
- (TASDKKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(TASDKKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol TASDKKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (TASDKKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol TASDKKotlinSuspendFunction1 <TASDKKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol TASDKKotlinAppendable
@required
- (id<TASDKKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<TASDKKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<TASDKKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface TASDKKtor_httpURLBuilderCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol TASDKKtor_httpParametersBuilder <TASDKKtor_utilsStringValuesBuilder>
@required
@end;

__attribute__((swift_name("KotlinKType")))
@protocol TASDKKotlinKType
@required
@property (readonly) NSArray<TASDKKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<TASDKKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface TASDKKtor_httpHeaderValueParam : TASDKBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface TASDKKtor_httpHeaderValueWithParametersCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<TASDKKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface TASDKKtor_httpContentTypeCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (TASDKKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) TASDKKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol TASDKKotlinx_coroutines_coreParentJob <TASDKKotlinx_coroutines_coreJob>
@required
- (TASDKKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol TASDKKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<TASDKKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(TASDKKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(TASDKKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<TASDKKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol TASDKKotlinSuspendFunction0 <TASDKKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface TASDKKotlinEnumCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface TASDKKtor_utilsWeekDayCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (TASDKKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (TASDKKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface TASDKKtor_utilsMonthCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (TASDKKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (TASDKKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface TASDKKtor_ioMemoryCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) TASDKKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface TASDKKtor_ioBufferCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) TASDKKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol TASDKKtor_ioObjectPool <TASDKKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface TASDKKtor_ioChunkBufferCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) TASDKKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<TASDKKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<TASDKKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface TASDKKotlinByteIterator : TASDKBase <TASDKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (TASDKByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface TASDKKtor_ioInputCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface TASDKKtor_ioByteReadPacketCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) TASDKKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface TASDKKotlinKTypeProjection : TASDKBase
- (instancetype)initWithVariance:(TASDKKotlinKVariance * _Nullable)variance type:(id<TASDKKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TASDKKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (TASDKKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<TASDKKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (TASDKKotlinKTypeProjection *)doCopyVariance:(TASDKKotlinKVariance * _Nullable)variance type:(id<TASDKKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<TASDKKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) TASDKKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface TASDKKotlinx_coroutines_coreAtomicDesc : TASDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(TASDKKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(TASDKKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property TASDKKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface TASDKKotlinx_coroutines_coreOpDescriptor : TASDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(TASDKKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TASDKKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface TASDKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : TASDKKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) TASDKKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) TASDKKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface TASDKKotlinKVariance : TASDKKotlinEnum<TASDKKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) TASDKKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) TASDKKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) TASDKKotlinKVariance *out __attribute__((swift_name("out")));
+ (TASDKKotlinArray<TASDKKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface TASDKKotlinKTypeProjectionCompanion : TASDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TASDKKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (TASDKKotlinKTypeProjection *)contravariantType:(id<TASDKKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (TASDKKotlinKTypeProjection *)covariantType:(id<TASDKKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (TASDKKotlinKTypeProjection *)invariantType:(id<TASDKKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) TASDKKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface TASDKKotlinx_coroutines_coreAtomicOp<__contravariant T> : TASDKKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) TASDKKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface TASDKKotlinx_coroutines_coreLockFreeLinkedListNode : TASDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(TASDKBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(TASDKBoolean *(^)(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(TASDKBoolean *(^)(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(TASDKBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (TASDKKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (TASDKKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (TASDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(TASDKBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (TASDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id next __attribute__((swift_name("next")));
@property (readonly) TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface TASDKKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : TASDKKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(TASDKKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(TASDKKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (TASDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(TASDKKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) TASDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) TASDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface TASDKKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : TASDKKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (TASDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(TASDKKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) TASDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface TASDKKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : TASDKKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (TASDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(TASDKKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) TASDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) TASDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) TASDKKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
