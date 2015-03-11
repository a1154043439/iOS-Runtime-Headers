/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class NSData, NSDictionary, NSString;

@interface SFActivityAdvertisement : NSObject <NSSecureCoding> {
    NSData *_activityPayload;
    NSData *_advertisementPayload;
    NSString *_deviceIdentifier;
    NSString *_deviceModelIdentifier;
    NSString *_deviceName;
    NSDictionary *_options;
}

@property(retain) NSData * activityPayload;
@property(retain,readonly) NSData * advertisementPayload;
@property(retain,readonly) NSString * deviceIdentifier;
@property(retain,readonly) NSString * deviceModelIdentifier;
@property(retain,readonly) NSString * deviceName;
@property(retain,readonly) NSDictionary * options;

+ (bool)supportsSecureCoding;

- (id)activityPayload;
- (id)advertisementPayload;
- (void)dealloc;
- (id)description;
- (id)deviceIdentifier;
- (id)deviceModelIdentifier;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAdvertisementPayload:(id)arg1 options:(id)arg2 deviceName:(id)arg3 deviceModelIdentifier:(id)arg4 fromDeviceID:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)options;
- (void)setActivityPayload:(id)arg1;

@end
