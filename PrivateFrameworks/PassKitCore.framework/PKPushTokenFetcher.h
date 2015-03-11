/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class APSConnection, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface PKPushTokenFetcher : NSObject <APSConnectionDelegate> {
    NSMutableArray *_completionHandlers;
    NSObject<OS_dispatch_queue> *_internalQueue;
    APSConnection *_pushConnection;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void)_handleTimeout;
- (void)_invokeCompletionWithPushToken:(id)arg1;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)dealloc;
- (void)fetchPushTokenWithTimeout:(double)arg1 completion:(id)arg2;
- (id)init;

@end
