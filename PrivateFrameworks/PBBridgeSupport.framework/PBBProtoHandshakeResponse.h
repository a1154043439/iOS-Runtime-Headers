/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBProtoHandshakeResponse : PBCodable <NSCopying> {
    unsigned int _position;
    unsigned int _state;
    unsigned int _version;
}

@property unsigned int position;
@property unsigned int state;
@property unsigned int version;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)position;
- (bool)readFrom:(id)arg1;
- (void)setPosition:(unsigned int)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)state;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
