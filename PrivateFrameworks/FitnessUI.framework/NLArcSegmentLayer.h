/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface NLArcSegmentLayer : CAShapeLayer {
    double _arcLineWidth;
    long long _numberOfSegments;
    double _percentageFull;
    double _radius;
}

@property double arcLineWidth;
@property long long numberOfSegments;
@property double percentageFull;
@property double radius;

- (void)_regeneratePath;
- (id)actionForKey:(id)arg1;
- (double)arcLineWidth;
- (id)init;
- (long long)numberOfSegments;
- (double)percentageFull;
- (double)radius;
- (void)setArcLineWidth:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNumberOfSegments:(long long)arg1;
- (void)setPercentageFull:(double)arg1;
- (void)setRadius:(double)arg1;

@end
