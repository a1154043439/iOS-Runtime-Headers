/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSResponseCodeMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int responseCode : 1; 
    } _has;
    int _responseCode;
}

@property bool hasResponseCode;
@property int responseCode;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasResponseCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)responseCode;
- (void)setHasResponseCode:(bool)arg1;
- (void)setResponseCode:(int)arg1;
- (void)writeTo:(id)arg1;

@end
