/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class AFAlarm;

@interface AFCreateAlarmRequest : AFSiriRequest {
    AFAlarm *_alarm;
}

@property(retain) AFAlarm * alarm;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alarm;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAlarm:(id)arg1;

@end
