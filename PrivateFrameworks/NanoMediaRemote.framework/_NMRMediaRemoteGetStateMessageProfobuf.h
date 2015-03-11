/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@class NSData;

@interface _NMRMediaRemoteGetStateMessageProfobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int state : 1; 
    NSData *_applicationInfoDigest;
    } _has;
    NSData *_knownDigest;
    NSData *_nowPlayingInfoDigest;
    int _state;
    NSData *_supportedCommandsDigest;
    double _timestamp;
}

@property(retain) NSData * applicationInfoDigest;
@property(readonly) bool hasApplicationInfoDigest;
@property(readonly) bool hasKnownDigest;
@property(readonly) bool hasNowPlayingInfoDigest;
@property bool hasState;
@property(readonly) bool hasSupportedCommandsDigest;
@property bool hasTimestamp;
@property(retain) NSData * knownDigest;
@property(retain) NSData * nowPlayingInfoDigest;
@property int state;
@property(retain) NSData * supportedCommandsDigest;
@property double timestamp;

- (void).cxx_destruct;
- (id)applicationInfoDigest;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasApplicationInfoDigest;
- (bool)hasKnownDigest;
- (bool)hasNowPlayingInfoDigest;
- (bool)hasState;
- (bool)hasSupportedCommandsDigest;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)knownDigest;
- (void)mergeFrom:(id)arg1;
- (id)nowPlayingInfoDigest;
- (bool)readFrom:(id)arg1;
- (void)setApplicationInfoDigest:(id)arg1;
- (void)setHasState:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setKnownDigest:(id)arg1;
- (void)setNowPlayingInfoDigest:(id)arg1;
- (void)setState:(int)arg1;
- (void)setSupportedCommandsDigest:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (int)state;
- (id)supportedCommandsDigest;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
