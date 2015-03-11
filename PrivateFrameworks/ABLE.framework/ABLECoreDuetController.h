/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
 */

@class <ABLEMockCDAttributeProtocol>, CDDevice, CDSession;

@interface ABLECoreDuetController : NSObject {
    <ABLEMockCDAttributeProtocol> *_batteryLevelAttribute;
    CDDevice *_device;
    CDSession *_session;
}

@property(retain) <ABLEMockCDAttributeProtocol> * batteryLevelAttribute;
@property(readonly) CDDevice * device;
@property(readonly) CDSession * session;

- (void).cxx_destruct;
- (id)batteryLevelAttribute;
- (unsigned long long)countBatteryDataForDayDaysAgo:(unsigned long long)arg1 from:(id)arg2 alignedTo:(double)arg3;
- (unsigned long long)countBatteryDataInHistoryWindow:(id)arg1;
- (id)device;
- (id)getBatteryDataForAllTimeWithRecurrencePeriod:(double)arg1;
- (id)getBatteryDataForDayDaysAgo:(unsigned long long)arg1 from:(id)arg2 withRecurrencePeriod:(double)arg3;
- (id)getBatteryDataForDayFrom:(id)arg1 withRecurrencePeriod:(double)arg2;
- (id)getBatteryDataForDays:(unsigned long long)arg1 withRecurrencePeriod:(double)arg2;
- (id)getBatteryDataForMinutes:(unsigned long long)arg1 minutesAgo:(unsigned long long)arg2 from:(id)arg3 alignedTo:(double)arg4 asTable:(bool)arg5;
- (id)getBatteryDataForMinutes:(unsigned long long)arg1 withRecurrencePeriod:(double)arg2;
- (double)getBatteryLevelForDate:(id)arg1 withWindowInMinutes:(double)arg2;
- (id)getSanitizedBatteryDataForHistoryWindow:(id)arg1 expectingResultsCount:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithCDSession:(id)arg1 device:(id)arg2;
- (id)initWithMockCDAttribute:(id)arg1;
- (id)makeAllTimeHistoryWindowWithRecurrencePeriod:(double)arg1;
- (id)makeNanVectorOfLength:(unsigned long long)arg1;
- (id)session;
- (void)setBatteryLevelAttribute:(id)arg1;
- (void)useCoreDuetAttribute;

@end
