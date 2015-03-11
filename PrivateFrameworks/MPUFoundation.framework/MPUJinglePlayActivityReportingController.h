/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@class NSObject<OS_dispatch_queue>, NSString, SSVPlayActivityController;

@interface MPUJinglePlayActivityReportingController : MPUReportingController {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    double _nonCatalogAggregatePlayDuration;
    double _nonCatalogAggregateStartTime;
    NSString *_nonCatalogDeviceName;
    unsigned long long _nonCatalogSourceType;
    unsigned long long _nonCatalogStoreAccountID;
    SSVPlayActivityController *_playActivityController;
    bool_nonCatalogOffline;
    bool_nonCatalogSBEnabled;
    bool_shouldReportPlayActivityEvents;
}

@property(readonly) SSVPlayActivityController * playActivityController;
@property bool shouldReportPlayActivityEvents;

- (void).cxx_destruct;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (id)_captureNonCatalogAggregatePlayActivityEvent;
- (void)_clearNonCatalogAggregatePlayActivityEventData;
- (void)_recordReportingEvents:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithWritingStyle:(unsigned long long)arg1;
- (id)playActivityController;
- (void)setShouldReportPlayActivityEvents:(bool)arg1;
- (bool)shouldReportPlayActivityEvents;

@end
