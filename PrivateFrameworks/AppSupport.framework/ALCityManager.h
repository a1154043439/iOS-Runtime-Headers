/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class CPSearchMatcher;

@interface ALCityManager : NSObject {
    CPSearchMatcher *_citySearchMatcher;
    struct sqlite3 { } *_db;
    struct sqlite3 { } *_localizedDb;
}

@property(readonly) CPSearchMatcher * citySearchMatcher;

+ (id)_localeDictionaryFromSQLRow:(char **)arg1;
+ (struct __CFArray { }*)legacyCityForCity:(id)arg1;
+ (id)newCitiesByIdentifierMap:(id)arg1;
+ (id)sharedManager;

- (id)_cityForTimeZone:(id)arg1 localeCode:(id)arg2;
- (id)_defaultCityForTimeZone:(id)arg1 localeCode:(id)arg2;
- (id)allCities;
- (id)allLocales;
- (id)bestCityForLegacyCity:(struct __CFArray { }*)arg1;
- (id)citiesMatchingName:(id)arg1 localized:(bool)arg2;
- (id)citiesMatchingName:(id)arg1;
- (id)citiesMatchingQualifier:(id)arg1;
- (id)citiesWithIdentifiers:(id)arg1;
- (id)citiesWithTimeZone:(id)arg1;
- (id)cityForClassicIdentifier:(id)arg1;
- (id)citySearchMatcher;
- (void)dealloc;
- (id)defaultCitiesForLocaleCode:(id)arg1 options:(int)arg2;
- (id)defaultCitiesForLocaleCode:(id)arg1;
- (id)defaultCitiesShownInWorldClock;
- (id)defaultCityForTimeZone:(id)arg1 localeCode:(id)arg2;
- (id)defaultCityForTimeZone:(id)arg1;
- (id)init;
- (id)localeWithCode:(id)arg1;
- (void)localizeCities:(id)arg1;

@end
