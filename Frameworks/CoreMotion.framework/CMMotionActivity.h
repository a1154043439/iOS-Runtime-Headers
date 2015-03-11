/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class NSDate;

@interface CMMotionActivity : CMLogItem {
    struct CLMotionActivity { 
        int type; 
        int confidence; 
        int mountedState; 
        int mountedConfidence; 
        boolisStanding; 
        float tilt; 
        double timestamp; 
        int exitState; 
        double estExitTime; 
        double startTime; 
    } fState;
}

@property(readonly) bool automotive;
@property(readonly) long long confidence;
@property(readonly) bool cycling;
@property(readonly) bool running;
@property(readonly) NSDate * startDate;
@property(readonly) bool stationary;
@property(readonly) bool unknown;
@property(readonly) bool walking;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (bool)automotive;
- (long long)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)cycling;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMotionActivity:(struct CLMotionActivity { int x1; int x2; int x3; int x4; boolx5; float x6; double x7; int x8; double x9; double x10; })arg1;
- (bool)running;
- (id)startDate;
- (bool)stationary;
- (bool)unknown;
- (bool)walking;

@end
