/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface ATLockdownSocket : ATSocket {
    struct _lockdown_connection { } *_connection;
    void *_lockdownInfo;
    BOOL _readBuffer[65536];
    NSObject<OS_dispatch_source> *_recvSource;
    NSObject<OS_dispatch_queue> *_socketRWQueue;
}

@property(readonly) bool isWifi;

- (void).cxx_destruct;
- (void)_readLength:(unsigned long long)arg1;
- (void)close;
- (void)dealloc;
- (id)initWithLockdownInfo:(void*)arg1;
- (bool)isOpen;
- (bool)isWifi;
- (bool)open;
- (int)recv:(char *)arg1 offset:(unsigned int)arg2 len:(unsigned int)arg3 error:(id*)arg4;
- (int)send:(const char *)arg1 offset:(unsigned int)arg2 len:(unsigned int)arg3 error:(id*)arg4;
- (void)writeData:(id)arg1 withCompletion:(id)arg2;

@end
