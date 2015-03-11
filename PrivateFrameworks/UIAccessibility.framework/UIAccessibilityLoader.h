/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@interface UIAccessibilityLoader : NSObject {
}

+ (id)_accessibilityBundlesForBundle:(id)arg1;
+ (void)_accessibilityInitializeRuntimeOverrides;
+ (void)_accessibilityLoadSubbundles:(id)arg1;
+ (void)_accessibilityReenabled;
+ (bool)_accessibilityServerStarted;
+ (void)_accessibilityStartServer;
+ (void)_accessibilityStopServer;
+ (id)_axBundleForBundle:(id)arg1;
+ (id)_loadAXBundleForBundle:(id)arg1 didLoad:(bool*)arg2 forceLoad:(bool)arg3 loadSubbundles:(bool)arg4;
+ (id)_loadAXBundleForBundle:(id)arg1 didLoad:(bool*)arg2;
+ (void)initialize;
+ (id)loadAccessibilityBundle:(id)arg1 didLoad:(bool*)arg2 force:(bool)arg3;
+ (id)loadAccessibilityBundle:(id)arg1 didLoad:(bool*)arg2;
+ (void)loadActualAccessibilityBundle:(id)arg1 didLoad:(bool*)arg2 loadSubbundles:(bool)arg3;

@end
