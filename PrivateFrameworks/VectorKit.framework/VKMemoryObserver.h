/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSObject<OS_dispatch_source>;

@interface VKMemoryObserver : NSObject {
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    SEL _selector;
    id _target;
}

- (void)_receivedMemoryNotification:(bool)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)triggerMemoryNotification:(bool)arg1;

@end
