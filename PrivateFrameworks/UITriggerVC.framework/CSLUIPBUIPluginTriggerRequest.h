/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
 */

@class NSMutableArray, NSString;

@interface CSLUIPBUIPluginTriggerRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int reason : 1; 
    NSMutableArray *_dictionarys;
    } _has;
    NSString *_name;
    int _reason;
}

@property(retain) NSMutableArray * dictionarys;
@property(readonly) bool hasName;
@property bool hasReason;
@property(retain) NSString * name;
@property int reason;

- (void).cxx_destruct;
- (void)addDictionary:(id)arg1;
- (void)clearDictionarys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryAtIndex:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (id)dictionarys;
- (unsigned long long)dictionarysCount;
- (bool)hasName;
- (bool)hasReason;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (void)setDictionarys:(id)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setReason:(int)arg1;
- (void)writeTo:(id)arg1;

@end
