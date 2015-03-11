/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoGlanceSettings.framework/NanoGlanceSettings
 */

@class NPSManager, NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface NGSInternalSettingsManager : NSObject {
    NSMutableArray *_glanceDefinitions;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_selectedGlanceIdentifier;
    NSArray *_storedSettings;
    NPSManager *_syncManager;
}

@property(readonly) bool hasSettings;
@property(readonly) NSObject<OS_dispatch_queue> * queue;
@property(copy) NSString * selectedGlanceIdentifier;

- (void).cxx_destruct;
- (id)_localizedNameForGlance:(id)arg1;
- (unsigned long long)_numberOfActiveGlances;
- (void)_saveSettings;
- (void)addGlanceDefinition:(id)arg1;
- (void)enumerateGlanceDefinitionsUsingBlock:(id)arg1;
- (id)glanceDefinitionForAppBundleIdentifier:(id)arg1;
- (id)glanceDefinitionForGlanceIdentifier:(id)arg1;
- (id)glanceDefinitionForWatchKitIdentifier:(id)arg1;
- (id)glanceIdentifierForGlanceDefinitionAtIndex:(unsigned long long)arg1;
- (bool)hasMaximumNumberOfActiveGlances;
- (bool)hasSettings;
- (id)init;
- (void)loadSettings;
- (void)moveGlanceDefinitionFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)queue;
- (void)removeGlanceDefinitionsInArray:(id)arg1;
- (void)saveSettings;
- (id)selectedGlanceIdentifier;
- (void)setSelectedGlanceIdentifier:(id)arg1;

@end
