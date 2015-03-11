/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class NSString;

@interface HDCodableSource : PBCodable <NSCopying> {
    struct { 
        unsigned int options : 1; 
    NSString *_bundleIdentifier;
    } _has;
    NSString *_name;
    long long _options;
    NSString *_productType;
}

@property(retain) NSString * bundleIdentifier;
@property(readonly) bool hasBundleIdentifier;
@property(readonly) bool hasName;
@property bool hasOptions;
@property(readonly) bool hasProductType;
@property(retain) NSString * name;
@property long long options;
@property(retain) NSString * productType;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleIdentifier;
- (bool)hasName;
- (bool)hasOptions;
- (bool)hasProductType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (long long)options;
- (id)productType;
- (bool)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setHasOptions:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setOptions:(long long)arg1;
- (void)setProductType:(id)arg1;
- (void)writeTo:(id)arg1;

@end
