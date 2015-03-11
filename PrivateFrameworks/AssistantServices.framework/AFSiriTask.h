/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class AFSiriRequest, NSString, NSXPCListenerEndpoint;

@interface AFSiriTask : NSObject <BSXPCCoding, NSSecureCoding> {
    NSXPCListenerEndpoint *_remoteResponseListenerEndpoint;
    AFSiriRequest *_request;
    NSXPCListenerEndpoint *_usageResultListenerEndpoint;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithRequest:(id)arg1 remoteResponseListenerEndpoint:(id)arg2 usageResultListenerEndpoint:(id)arg3;
- (id)_responseHandlerConnection;
- (id)_usageResultHandlerConnection;
- (void)completeWithResponse:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)failWithError:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)reportUsageResult:(id)arg1;
- (id)request;

@end
