/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@class NSDictionary, NSString;

@interface WKInterfaceDevice : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    NSString *_preferredContentSizeCategory;
    } _screenBounds;
    double _screenScale;
}

@property(readonly) NSDictionary * cachedImages;
@property(copy) NSString * preferredContentSizeCategory;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } screenBounds;
@property double screenScale;

+ (id)currentDevice;

- (void).cxx_destruct;
- (bool)addCachedImage:(id)arg1 name:(id)arg2;
- (bool)addCachedImageWithData:(id)arg1 name:(id)arg2;
- (id)cachedImages;
- (id)preferredContentSizeCategory;
- (void)removeAllCachedImages;
- (void)removeCachedImageWithName:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenBounds;
- (double)screenScale;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setScreenBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScreenScale:(double)arg1;

@end
