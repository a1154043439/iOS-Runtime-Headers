/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitExtensions.framework/HealthKitExtensions
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, NSString, NSXPCConnection, _HKExtendedHealthStoreProxy;

@interface HKExtendedHealthStore : NSObject <HKExtendedClientInterface> {
    id _achievementsAddedHandler;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSXPCConnection *_connection;
    _HKExtendedHealthStoreProxy *_connectionProxy;
}

@property(copy) id achievementsAddedHandler;
@property(readonly) NSObject<OS_dispatch_queue> * clientQueue;
@property(retain) NSXPCConnection * connection;
@property(retain) _HKExtendedHealthStoreProxy * connectionProxy;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)achievementsAddedHandler;
- (void)achievementsWereAdded;
- (void)addAchievement:(id)arg1 completion:(id)arg2;
- (id)clientInterface;
- (id)clientQueue;
- (id)connection;
- (id)connectionProxy;
- (void)daemonDidStart;
- (void)dealloc;
- (void)fetchAchievementsWithCompletedDateBetweenStart:(id)arg1 end:(id)arg2 completion:(id)arg3;
- (void)fetchAchievementsWithCompletion:(id)arg1;
- (void)fetchNumberOfUnviewedAchievementsWithCompletion:(id)arg1;
- (void)fetchUnalertedAchievementsWithCompletion:(id)arg1;
- (void)forceNanoSyncWithPullRequest:(bool)arg1 completion:(id)arg2;
- (id)init;
- (void)markAchievementAsViewed:(id)arg1 completion:(id)arg2;
- (void)markAchievementsAlerted:(id)arg1 completion:(id)arg2;
- (id)remoteObjectProxyWithErrorHandler:(id)arg1;
- (void)resetNanoSyncWithCompletion:(id)arg1;
- (id)serverInterface;
- (void)setAchievementsAddedHandler:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setConnectionProxy:(id)arg1;

@end
