/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface NFMIDSMessageInstance : NSObject {
    id _retryAction;
    long long _retryCount;
    double _retryInterval;
}

@property(copy) id retryAction;
@property long long retryCount;
@property double retryInterval;

+ (id)newMessageInstanceWithAction:(id)arg1 retryCount:(long long)arg2 retryInterval:(double)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)retryAction;
- (long long)retryCount;
- (double)retryInterval;
- (void)setRetryAction:(id)arg1;
- (void)setRetryCount:(long long)arg1;
- (void)setRetryInterval:(double)arg1;

@end
