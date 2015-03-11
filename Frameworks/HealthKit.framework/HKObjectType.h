/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class NSString;

@interface HKObjectType : NSObject <NSSecureCoding, NSCopying> {
    long long _code;
    Class _dataObjectClass;
    NSString *_identifier;
}

@property(readonly) long long code;
@property(readonly) Class dataObjectClass;
@property(readonly) NSString * identifier;

+ (id)_allDataTypeIdentifiers;
+ (bool)_allowAuthorizationForReadingWithTypes:(id)arg1 entitlements:(id)arg2 disallowedTypes:(id)arg3;
+ (bool)_allowAuthorizationForSharing:(bool)arg1 types:(id)arg2 entitlements:(id)arg3 disallowedTypes:(id)arg4;
+ (bool)_allowAuthorizationForSharingWithTypes:(id)arg1 entitlements:(id)arg2 disallowedTypes:(id)arg3;
+ (void)_insertCode:(long long)arg1 forIdentifier:(id)arg2;
+ (id)activityCacheType;
+ (id)briskMinuteDataType;
+ (id)calorieGoal;
+ (id)categoryTypeForIdentifier:(id)arg1;
+ (id)characteristicTypeForIdentifier:(id)arg1;
+ (id)correlationTypeForIdentifier:(id)arg1;
+ (id)dataTypeWithCode:(long long)arg1;
+ (id)quantityTypeForIdentifier:(id)arg1;
+ (id)sedentaryMissedHourDataType;
+ (bool)supportsSecureCoding;
+ (id)workoutType;

- (void).cxx_destruct;
- (bool)_allowAuthorizationForReadingWithEntitlements:(id)arg1;
- (bool)_allowAuthorizationForSharingWithEntitlements:(id)arg1;
- (id)_initWithDefinition:(struct { long long x1; char *x2; char *x3; long long x4; char *x5; char *x6; }*)arg1;
- (bool)_requiresAuthorization;
- (id)_safeDescription;
- (long long)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (Class)dataObjectClass;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hk_categoryID;
- (id)hk_localizedName;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
