/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSDB.framework/CoreSDB
 */

@class NSObject<OS_dispatch_queue>, NSRunLoop, NSString, NSThread;

@interface _CSDBThreadObject : NSObject {
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_queueContext;
    NSRunLoop *_runLoop;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSThread *_thread;
}

- (void)_threadedMain;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (bool)isCurrentThreadOtherwiseAssert:(bool)arg1;
- (void)performBlock:(id)arg1 afterDelay:(double)arg2;
- (void)performBlock:(id)arg1 waitUntilDone:(bool)arg2;
- (void)performBlock:(id)arg1;
- (id)thread;

@end
