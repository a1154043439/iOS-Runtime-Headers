/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>;

@interface _HKTaskCompletionCounter : NSObject {
    id _completion;
    NSObject<OS_dispatch_queue> *_queue;
    long long _target;
}

+ (id)counterWithTargetCount:(long long)arg1 queue:(id)arg2 completion:(id)arg3;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)decrementCounter;

@end
