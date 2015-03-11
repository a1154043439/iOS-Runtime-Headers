/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray;

@interface SAStartLocalRequest : SABaseClientBoundCommand {
}

@property(copy) NSArray * clientBoundCommands;

+ (id)startLocalRequest;
+ (id)startLocalRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)clientBoundCommands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setClientBoundCommands:(id)arg1;

@end
