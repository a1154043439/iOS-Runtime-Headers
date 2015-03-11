/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKChatItem;

@interface CKTranscriptCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    CKChatItem *_chatItem;
    } _contentTransform3D;
    double _currentCenterY;
    } _currentFrame;
    double _easing;
    double _factor;
    double _height;
    BOOL _orientation;
    double _targetCenterY;
    double _targetEasing;
    } _targetFrame;
    bool_hidden;
}

@property(retain) CKChatItem * chatItem;
@property(readonly) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } contentTransform3D;

- (id)chatItem;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })contentTransform3D;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)setChatItem:(id)arg1;

@end
