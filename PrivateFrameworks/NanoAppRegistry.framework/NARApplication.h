/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/NanoAppRegistry
 */

@class NSArray, NSDictionary, NSString;

@interface NARApplication : NSObject <NSSecureCoding> {
    NSDictionary *_iTunesPlistStrings;
    NSDictionary *_infoPlist;
    NSString *_launchServicesBundleType;
    NSDictionary *_localizedStrings;
    unsigned long long _sequenceNumber;
}

@property(readonly) NSString * applicationIdentifier;
@property(readonly) NSString * bundleName;
@property(readonly) NSString * bundleVersion;
@property(retain) NSDictionary * iTunesPlistStrings;
@property(retain) NSDictionary * infoPlist;
@property(readonly) NSString * itemName;
@property(copy) NSString * launchServicesBundleType;
@property(readonly) NSArray * localizations;
@property(readonly) NSDictionary * localizedBundleNames;
@property(readonly) NSString * localizedDisplayName;
@property(readonly) NSDictionary * localizedDisplayNames;
@property(retain) NSDictionary * localizedStrings;
@property unsigned long long sequenceNumber;
@property(readonly) NSArray * supportedSchemes;
@property(readonly) NSString * vendorName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)bundleName;
- (id)bundleVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)iTunesPlistStrings;
- (id)infoPlist;
- (id)initWithCoder:(id)arg1;
- (id)itemName;
- (id)launchServicesBundleType;
- (id)localizations;
- (id)localizedBundleNames;
- (id)localizedDisplayName;
- (id)localizedDisplayNames;
- (id)localizedStrings;
- (id)objectForInfoDictionaryKey:(id)arg1 localization:(id)arg2;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (unsigned long long)sequenceNumber;
- (void)setITunesPlistStrings:(id)arg1;
- (void)setInfoPlist:(id)arg1;
- (void)setLaunchServicesBundleType:(id)arg1;
- (void)setLocalizedStrings:(id)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (id)supportedSchemes;
- (id)vendorName;

@end
