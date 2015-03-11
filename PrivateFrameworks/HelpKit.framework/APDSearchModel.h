/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@class NSArray, NSDictionary, NSString;

@interface APDSearchModel : APDGenericModel {
    NSString *_copyrightTopicId;
    NSArray *_currentSearchResults;
    NSDictionary *_searchIndex;
    NSArray *_searchTerms;
    NSString *_searchText;
}

@property(retain) NSString * copyrightTopicId;
@property(retain) NSArray * currentSearchResults;
@property(retain) NSDictionary * searchIndex;
@property(retain) NSArray * searchTerms;
@property(retain) NSString * searchText;

- (void).cxx_destruct;
- (void)clearData;
- (id)copyrightTopicId;
- (id)currentSearchResults;
- (id)indexTermsForSearchTermRoot:(id)arg1;
- (bool)processLocalDataFromLocalResource;
- (void)processRequestData:(id)arg1;
- (void)processSearchJSONData:(id)arg1;
- (id)searchIndex;
- (id)searchTerms;
- (id)searchText;
- (void)setCopyrightTopicId:(id)arg1;
- (void)setCurrentSearchResults:(id)arg1;
- (void)setSearchIndex:(id)arg1;
- (void)setSearchTerms:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)updateResultsForSearch:(id)arg1 forLocale:(struct __CFLocale { }*)arg2 withRoots:(bool)arg3;

@end
