/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface RUJingleTiltReportingController : MPUReportingController {
    NSObject<OS_dispatch_queue> *_accessQueue;
    double _flushInterval;
    NSMutableArray *_pendingReportingEvents;
    NSObject<OS_dispatch_source> *_playEventFlushTimerSource;
}

- (void).cxx_destruct;
- (void)_addPendingReportingEvents:(id)arg1;
- (void)_cancelPlaybackFlushTimer;
- (void)_flushEvents;
- (void)_recordReportingEvents:(id)arg1;
- (void)_schedulePlaybackFlushTimer;
- (void)_storeBagDidLoadNotification:(id)arg1;
- (void)_updateForLoadedStoreBag:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)popPendingReportingEvents;

@end
