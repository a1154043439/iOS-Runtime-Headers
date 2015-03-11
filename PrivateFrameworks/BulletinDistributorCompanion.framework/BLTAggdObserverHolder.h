/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@class BBObserver, NSString;

@interface BLTAggdObserverHolder : NSObject <BBObserverDelegate> {
    BBObserver *_observer;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_reconnectObserver;
- (void)dealloc;
- (id)init;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(bool)arg4 withReply:(id)arg5;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(bool)arg2;

@end
