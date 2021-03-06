/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class CLLocationManager, NFCardManager, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSTimer, PKPaymentDeviceProvisioningData;

@interface PKPaymentDevice : NSObject <CLLocationManagerDelegate> {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NFCardManager *_cardManager;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_locationFixTimeout;
    CLLocationManager *_locationManager;
    NSMutableArray *_provisioningCompletions;
    PKPaymentDeviceProvisioningData *_provisioningData;
    BOOL _skipLocationCheck;
    NSTimer *_timer;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL skipLocationCheck;
@property(readonly) Class superclass;

+ (id)clientInfoHTTPHeader;

- (void)_executeProvisioningCompletionHandlers;
- (void)_finishLocationFixWithLocation:(id)arg1;
- (void)configurationDataWithCompletionHandler:(id)arg1;
- (void)dealloc;
- (void)deleteApplicationWithAID:(id)arg1;
- (id)init;
- (id)initWithCallbackQueue:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)provisioningDataWithCompletionHandler:(id)arg1;
- (void)queueConnectionToTrustedServiceManager;
- (void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1;
- (void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(id)arg2;
- (void)queueConnectionToTrustedServiceManagerWithCompletion:(id)arg1;
- (void)registrationDataWithAuthToken:(id)arg1 completionHandler:(id)arg2;
- (void)rewrapDataWithDeviceIdentifier:(id)arg1 completionHandler:(id)arg2;
- (void)secureElementSigningKeyTypeWithCompletion:(id)arg1;
- (void)setRegistrationRegionMap:(id)arg1;
- (void)setSkipLocationCheck:(BOOL)arg1;
- (BOOL)skipLocationCheck;

@end
