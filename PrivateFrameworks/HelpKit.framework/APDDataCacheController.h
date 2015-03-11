/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@class NSMutableArray, NSMutableDictionary, NSString;

@interface APDDataCacheController : NSObject {
    long long _URLSessionDataType;
    NSString *_cacheDirectory;
    unsigned long long _cacheSize;
    NSMutableArray *_dataCacheArray;
    NSMutableDictionary *_dataCacheMap;
    NSString *_identifier;
    NSString *_locale;
    unsigned long long _maxDataCacheSize;
}

@property(retain) NSMutableArray * dataCacheArray;
@property(retain) NSString * locale;

+ (void)removeInstance;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addDataCache:(id)arg1;
- (id)cacheFileURLForDataCache:(id)arg1;
- (bool)cacheValidForPath:(id)arg1;
- (id)dataCacheArray;
- (id)dataCacheForPath:(id)arg1 completionHandler:(id)arg2;
- (id)dataCacheForPath:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 directoryName:(id)arg2 maxCacheSize:(unsigned long long)arg3 URLSessionDataType:(long long)arg4;
- (id)locale;
- (void)moveCacheToEnd:(id)arg1;
- (id)newDataCache;
- (void)removeAllDataCache;
- (void)removeDataCache:(id)arg1 updateCache:(bool)arg2;
- (void)removeDataCache:(id)arg1;
- (void)setDataCacheArray:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)updateCache;
- (void)updateCacheDelay;
- (id)updateDataCacheForURL:(id)arg1 data:(id)arg2 lastModified:(id)arg3;

@end
