/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSBeginDiscoveryMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int discoveryTypes : 1; 
    int _discoveryTypes;
    } _has;
}

@property int discoveryTypes;
@property bool hasDiscoveryTypes;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)discoveryTypes;
- (bool)hasDiscoveryTypes;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDiscoveryTypes:(int)arg1;
- (void)setHasDiscoveryTypes:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
