//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PKPaymentWebService, PKPaymentWebServiceBackgroundContext, PKPaymentWebServiceContext;

@protocol PKPaymentProvisioningServiceDelegate <NSObject>
- (void)shouldArchiveBackgroundContext:(PKPaymentWebServiceBackgroundContext *)arg1;
- (void)shouldArchiveContext:(PKPaymentWebServiceContext *)arg1;

@optional
- (void)deleteCardWithAID:(NSString *)arg1;
- (void)paymentWebServiceDidRegister:(PKPaymentWebService *)arg1;
- (void)provisioningDataWithCompletionHandler:(void (^)(PKPaymentDeviceProvisioningData *, NSError *))arg1;
- (void)registrationDataWithAuthToken:(NSString *)arg1 completionHandler:(void (^)(PKPaymentDeviceRegistrationData *, NSError *))arg2;
- (void)configurationDataWithCompletionHandler:(void (^)(PKPaymentDeviceConfigurationData *, NSError *))arg1;
- (void)queueConnectionToTrustedServiceManagerWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)setNewAuthRandomIfNecessary:(void (^)(BOOL))arg1;
- (BOOL)hasDevelopmentSignedSE;
@end

