/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSystemController : NSObject {
}

+ (id)sharedInstance;

- (bool)isDevicePluggedIn;
- (bool)isHiDPI;
- (bool)isInternalInstall;
- (bool)isWifiEnabled;
- (bool)openURL:(id)arg1 bundleIdentifier:(id)arg2;
- (bool)openURL:(id)arg1;
- (bool)overrideBlurStyle;
- (bool)requiresRTT;
- (double)screenScale;
- (struct CGSize { double x1; double x2; })screenSize;
- (bool)shouldRateLimitSearchCompletions;
- (bool)supports3DImagery;
- (bool)supports3DMaps;
- (bool)supportsPitchAPI;
- (int)userInterfaceIdiom;

@end
