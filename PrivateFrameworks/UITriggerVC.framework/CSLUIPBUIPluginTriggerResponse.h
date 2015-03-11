/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
 */

@class NSString;

@interface CSLUIPBUIPluginTriggerResponse : PBCodable <NSCopying> {
    NSString *_errorString;
    bool_success;
}

@property(retain) NSString * errorString;
@property(readonly) bool hasErrorString;
@property bool success;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorString;
- (bool)hasErrorString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorString:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end
