/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@class NSArray, NSString;

@interface APDNavigationTopic : APDNavigationItem {
    NSArray *_categories;
    NSString *_href;
}

@property(retain) NSArray * categories;
@property(getter=isCopyright,readonly) bool copyright;
@property(getter=isGlossary,readonly) bool glossary;
@property(copy) NSString * href;

- (void).cxx_destruct;
- (id)categories;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)href;
- (id)initWithDictionary:(id)arg1;
- (bool)isCopyright;
- (bool)isGlossary;
- (void)setCategories:(id)arg1;
- (void)setHref:(id)arg1;

@end
