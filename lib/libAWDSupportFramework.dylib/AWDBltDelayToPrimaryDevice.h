/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDBltDelayToPrimaryDevice : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int delayMs : 1; 
    unsigned int _delayMs;
    } _has;
    unsigned long long _timestamp;
    NSString *_uniqueid;
}

@property unsigned int delayMs;
@property bool hasDelayMs;
@property bool hasTimestamp;
@property(readonly) bool hasUniqueid;
@property unsigned long long timestamp;
@property(retain) NSString * uniqueid;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)delayMs;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDelayMs;
- (bool)hasTimestamp;
- (bool)hasUniqueid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDelayMs:(unsigned int)arg1;
- (void)setHasDelayMs:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUniqueid:(id)arg1;
- (unsigned long long)timestamp;
- (id)uniqueid;
- (void)writeTo:(id)arg1;

@end
