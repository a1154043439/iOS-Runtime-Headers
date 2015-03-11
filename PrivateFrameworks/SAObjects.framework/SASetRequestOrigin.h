/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString;

@interface SASetRequestOrigin : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSNumber * age;
@property double altitude;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) NSString * desiredAccuracy;
@property double direction;
@property(readonly) unsigned long long hash;
@property double horizontalAccuracy;
@property double latitude;
@property double longitude;
@property(copy) NSString * refId;
@property double speed;
@property(copy) NSString * status;
@property(readonly) Class superclass;
@property double verticalAccuracy;

+ (id)setRequestOrigin;
+ (id)setRequestOriginWithDictionary:(id)arg1 context:(id)arg2;

- (id)age;
- (double)altitude;
- (id)desiredAccuracy;
- (double)direction;
- (id)encodedClassName;
- (id)groupIdentifier;
- (double)horizontalAccuracy;
- (double)latitude;
- (double)longitude;
- (void)setAge:(id)arg1;
- (void)setAltitude:(double)arg1;
- (void)setDesiredAccuracy:(id)arg1;
- (void)setDirection:(double)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setSpeed:(double)arg1;
- (void)setStatus:(id)arg1;
- (void)setVerticalAccuracy:(double)arg1;
- (double)speed;
- (id)status;
- (double)verticalAccuracy;

@end
