/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface LoopbackIDSTunnel : NSObject <VideoConferenceRealTimeChannel> {
    id _dataHandler;
    struct OpaqueFigThread { } *_idsReceiveTID;
    int _packetSendFailureCount;
    int _socket;
    id _terminationHandler;
    bool_stopIDSReceiveThread;
}

@property(copy) id receiveHandler;
@property(readonly) bool stopIDSReceiveThread;
@property(copy) id terminationHandler;

- (void)callTerminationHandlerWithError:(id)arg1;
- (void)cleanup;
- (void)dealloc;
- (id)initWithSocket:(int)arg1 error:(id*)arg2;
- (bool)processSocketRead;
- (id)receiveHandler;
- (void)setReceiveHandler:(id)arg1;
- (void)setTerminationHandler:(id)arg1;
- (bool)stopIDSReceiveThread;
- (id)terminationHandler;
- (void)vcArg:(id)arg1 sendRealTimeData:(id)arg2 toParticipantID:(id)arg3;

@end
