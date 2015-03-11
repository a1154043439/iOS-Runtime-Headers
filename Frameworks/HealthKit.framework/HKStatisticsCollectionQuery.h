/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class HKStatisticsCollection, NSDate, NSDateComponents, NSNumber;

@interface HKStatisticsCollectionQuery : HKQuery {
    NSDate *_anchorDate;
    id _initialResultsHandler;
    NSDateComponents *_intervalComponents;
    NSNumber *_lastAnchor;
    unsigned long long _mergeStrategy;
    unsigned long long _options;
    HKStatisticsCollection *_statisticsCollection;
    id _statisticsUpdateHandler;
}

@property(readonly) NSDate * anchorDate;
@property(copy) id initialResultsHandler;
@property(copy,readonly) NSDateComponents * intervalComponents;
@property(retain) NSNumber * lastAnchor;
@property unsigned long long mergeStrategy;
@property(readonly) unsigned long long options;
@property(retain) HKStatisticsCollection * statisticsCollection;
@property(copy) id statisticsUpdateHandler;

+ (Class)_queryServerDataObjectClass;

- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (void)_queue_deliverError:(id)arg1;
- (void)_queue_deliverInitialStatisticsObjects:(id)arg1 anchor:(id)arg2 queryUUID:(id)arg3;
- (void)_queue_deliverResetStatisticsObjects:(id)arg1 forQuery:(id)arg2;
- (void)_queue_deliverStatisticsObjects:(id)arg1 forQuery:(id)arg2;
- (id)_queue_errorHandler;
- (bool)_queue_shouldStayAliveAfterInitialResults;
- (void)_queue_validate;
- (id)anchorDate;
- (void)deliverInitialStatisticsObjects:(id)arg1 anchor:(id)arg2 forQuery:(id)arg3;
- (void)deliverResetStatisticsObjects:(id)arg1 forQuery:(id)arg2;
- (void)deliverUpdatedStatistics:(id)arg1 anchor:(id)arg2 forQuery:(id)arg3;
- (id)initWithQuantityType:(id)arg1 quantitySamplePredicate:(id)arg2 options:(unsigned long long)arg3 anchorDate:(id)arg4 intervalComponents:(id)arg5;
- (id)initialResultsHandler;
- (id)intervalComponents;
- (id)lastAnchor;
- (unsigned long long)mergeStrategy;
- (unsigned long long)options;
- (void)setInitialResultsHandler:(id)arg1;
- (void)setLastAnchor:(id)arg1;
- (void)setMergeStrategy:(unsigned long long)arg1;
- (void)setStatisticsCollection:(id)arg1;
- (void)setStatisticsUpdateHandler:(id)arg1;
- (id)statisticsCollection;
- (id)statisticsUpdateHandler;

@end
