/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@class NSString, SSVPlayActivityEvent;

@interface MPUReportingPlaybackActivityEvent : NSObject <MPUReportingEvent> {
    SSVPlayActivityEvent *_playActivityEvent;
    NSString *_playbackSessionID;
    bool_shouldReportToStore;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) SSVPlayActivityEvent * playActivityEvent;
@property(copy) NSString * playbackSessionID;
@property bool shouldReportToStore;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (bool)isValidReportingEvent;
- (id)playActivityEvent;
- (id)playbackSessionID;
- (unsigned long long)reportingEventType;
- (void)setPlayActivityEvent:(id)arg1;
- (void)setPlaybackSessionID:(id)arg1;
- (void)setShouldReportToStore:(bool)arg1;
- (bool)shouldReportToStore;

@end
