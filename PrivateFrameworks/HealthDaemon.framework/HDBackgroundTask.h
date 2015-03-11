/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class NSDate, NSDictionary, NSObject<OS_xpc_object>;

@interface HDBackgroundTask : NSObject {
    NSObject<OS_xpc_object> *_job;
}

@property(retain) NSDate * endDate;
@property(retain) NSDate * startDate;
@property(retain) NSDictionary * userContext;

- (void).cxx_destruct;
- (id)_initWithJob:(id)arg1;
- (id)_job;
- (id)description;
- (id)endDate;
- (id)init;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setUserContext:(id)arg1;
- (id)startDate;
- (bool)taskExpired;
- (bool)taskSatisfied;
- (bool)taskValid;
- (id)userContext;

@end
