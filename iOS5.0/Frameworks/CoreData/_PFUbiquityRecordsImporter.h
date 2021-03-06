/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSManagedObjectContextFaultingDelegate-Protocol.h"
#import "PFUbiquityBaselineRecoveryOperationDelegate-Protocol.h"
#import "PFUbiquityBaselineRollOperationDelegate-Protocol.h"
#import "PFUbiquityImportScanOperationDelegate-Protocol.h"
#import "_PFUbiquityRecordImportOperationDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSOperationQueue, NSRecursiveLock, NSString, PFUbiquityLocation, PFUbiquityMetadataQueryMonitor;

@interface _PFUbiquityRecordsImporter : NSObject <_PFUbiquityRecordImportOperationDelegate, NSManagedObjectContextFaultingDelegate, PFUbiquityImportScanOperationDelegate, PFUbiquityBaselineRollOperationDelegate, PFUbiquityBaselineRecoveryOperationDelegate>
{
    NSOperationQueue *_importQueue;
    NSMutableDictionary *_ubiquityLocationToMonitoringDictionary;
    BOOL _isMonitoring;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    struct dispatch_source_s *_logRestartTimer;
    NSRecursiveLock *_schedulingLock;
    PFUbiquityMetadataQueryMonitor *_queryMonitor;
    BOOL _importOnlyActiveStores;
    BOOL _throttleNotifications;
    unsigned int _numPendingNotifications;
    NSMutableDictionary *_pendingNotificationUserInfo;
    BOOL _allowBaselineRoll;
}

+ (void)initialize;
+ (BOOL)canProcessContentsOfUbiquityRootPath:(id)arg1;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)awakeFromLaunch:(BOOL)arg1;
- (id)createScoresForPeerStates:(id)arg1 andLocalPeerStates:(id)arg2;
- (id)createSortedOperationsArrayForLogLocations:(id)arg1;
- (BOOL)canProcessTransactionLogWithScore:(id)arg1 afterLogWithScore:(id)arg2;
- (void)scheduleTransactionLogOperations:(id)arg1 synchronous:(BOOL)arg2;
- (id)createDictionaryOfStoreNameToLocations:(id)arg1;
- (id)createPeerStatesDictionaryFromTransactionLog:(id)arg1 andAddLocalPeerStatesToDictionary:(id)arg2 withStack:(id)arg3;
- (struct dispatch_source_s *)createDispatchSourceForFileDescriptor:(int)arg1 forLocation:(id)arg2;
- (id)createMonitoringDictionaryForUbiquityLocation:(id)arg1;
- (void)updateMonitoredPeerURLs;
- (BOOL)startMonitor:(id *)arg1;
- (void)stopMonitor;
- (void)stopMonitoringDictionary:(id)arg1;
- (void)stopMonitoringURLsForStoreName:(id)arg1;
- (void)_applicationResumed:(id)arg1;
- (BOOL)shouldThrottleNotificationsWithOperation:(id)arg1;
- (void)postImportNotificationForStoreName:(id)arg1 andLocalPeerID:(id)arg2 withUserInfo:(id)arg3;
- (void)operationDidFinish:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationWasInterruptedDuringImport:(id)arg1;
- (void)scheduleRecoveryTimer;
- (void)scheduleUbiquityRootScan:(BOOL)arg1 withLocalPeerLogs:(BOOL)arg2;
- (void)scanOperationFinished:(id)arg1 withDiscoveredLogLocation:(id)arg2;
- (void)scanOperation:(id)arg1 discoveredPeerStoreVersionLocations:(id)arg2;
- (void)scanOperation:(id)arg1 failedWithError:(id)arg2;
- (int)compareScoreDictionary:(id)arg1 withScoreDictionary:(id)arg2;
- (int)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (void)requestBaselineRollForStore:(id)arg1;
- (void)baselineRollOperationEncounteredAnInconsistentBaselineState:(id)arg1;
- (void)recoveryOperation:(id)arg1 didReplaceLocalStoreFileWithBaseline:(id)arg2;
@property BOOL allowBaselineRoll; // @synthesize allowBaselineRoll=_allowBaselineRoll;
@property BOOL importOnlyActiveStores; // @synthesize importOnlyActiveStores=_importOnlyActiveStores;
@property(readonly) PFUbiquityMetadataQueryMonitor *queryMonitor; // @synthesize queryMonitor=_queryMonitor;
@property(readonly) NSDictionary *ubiquityLocationToMonitoringDictionary; // @synthesize ubiquityLocationToMonitoringDictionary=_ubiquityLocationToMonitoringDictionary;
@property BOOL throttleNotifications; // @synthesize throttleNotifications=_throttleNotifications;
@property(readonly, nonatomic) NSRecursiveLock *schedulingLock; // @synthesize schedulingLock=_schedulingLock;
@property struct dispatch_source_s *logRestartTimer; // @synthesize logRestartTimer=_logRestartTimer;
@property(readonly) PFUbiquityLocation *ubiquityRootLocation; // @synthesize ubiquityRootLocation=_ubiquityRootLocation;
@property(readonly) BOOL isMonitoring; // @synthesize isMonitoring=_isMonitoring;
@property(readonly) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;
@property(readonly) NSOperationQueue *importQueue; // @synthesize importQueue=_importQueue;

@end

