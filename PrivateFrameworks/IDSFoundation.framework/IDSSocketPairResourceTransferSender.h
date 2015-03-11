/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSDictionary, NSString;

@interface IDSSocketPairResourceTransferSender : IDSSocketPairMessage {
    int _fileDescriptor;
    unsigned int _maxChunkSize;
    NSString *_messageUUID;
    NSDictionary *_metadata;
    unsigned long long _nextByte;
    NSString *_peerResponseIdentifier;
    NSDictionary *_resourceAttributes;
    NSString *_resourcePath;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    unsigned long long _totalBytes;
    bool_compressed;
    bool_done;
    bool_expectsPeerResponse;
    bool_sentFirstMessage;
    bool_wantsAppAck;
}

@property(readonly) bool isDone;
@property unsigned int maxChunkSize;
@property(retain,readonly) NSString * messageUUID;
@property(readonly) bool sentFirstMessage;
@property unsigned int sequenceNumber;

- (unsigned char)command;
- (void)dealloc;
- (id)description;
- (id)initWithResourceAtPath:(id)arg1 metadata:(id)arg2 sequenceNumber:(unsigned int)arg3 streamID:(unsigned short)arg4 expectsPeerResponse:(bool)arg5 wantsAppAck:(bool)arg6 compressed:(bool)arg7 peerResponseIdentifier:(id)arg8 messageUUID:(id)arg9;
- (bool)isDone;
- (unsigned int)maxChunkSize;
- (id)messageUUID;
- (id)nextMessage;
- (id)readNextBytes;
- (void)reset;
- (bool)sentFirstMessage;
- (unsigned int)sequenceNumber;
- (void)setMaxChunkSize:(unsigned int)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;

@end
