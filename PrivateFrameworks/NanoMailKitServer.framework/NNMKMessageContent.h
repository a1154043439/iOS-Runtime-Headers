/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@class NSArray, NSData, NSString;

@interface NNMKMessageContent : NSObject <NSSecureCoding> {
    NSArray *_attachments;
    NSString *_messageId;
    NSData *_textData;
    bool_mainAlternativeValid;
    bool_partiallyLoaded;
}

@property(retain) NSArray * attachments;
@property bool mainAlternativeValid;
@property(retain) NSString * messageId;
@property bool partiallyLoaded;
@property(retain) NSData * textData;

+ (id)classesForUnarchivingTextData;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachments;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)mainAlternativeValid;
- (id)messageId;
- (bool)partiallyLoaded;
- (void)setAttachments:(id)arg1;
- (void)setMainAlternativeValid:(bool)arg1;
- (void)setMessageId:(id)arg1;
- (void)setPartiallyLoaded:(bool)arg1;
- (void)setTextData:(id)arg1;
- (id)textData;

@end
