/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CMOdometer, NSObject<OS_dispatch_queue>;

@interface CMOdometerProxy : NSObject {
    double _averageSpeed;
    long long _mode;
    CMOdometer *_odometer;
    double _startDate;
    double _totalDistance;
    NSObject<OS_dispatch_queue> *fCallbackQueue;
    long long fGpsAvailability;
    id fHandler;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    struct CLConnectionClient { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; id x2; id x3; id x4; struct CLConnection {} *x5; struct CLNameValuePair { int (**x_6_1_1)(); struct __CFDictionary {} *x_6_1_2; } x6; struct CLNameValuePair { int (**x_7_1_1)(); struct __CFDictionary {} *x_7_1_2; } x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_8_1_1; } x8; id x9; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x10; id x11; void*x12; id x13; id x14; void*x15; id x16; void*x17; } *fLocationdConnection;
}

@property double averageSpeed;
@property long long mode;
@property CMOdometer * odometer;
@property double startDate;
@property double totalDistance;

- (void)_startDaemonConnection;
- (void)_startOdometerUpdatesForActivity:(long long)arg1 withHandler:(id)arg2;
- (void)_stopOdometerUpdates;
- (void)_teardown;
- (double)averageSpeed;
- (void)dealloc;
- (id)initWithOdometer:(id)arg1;
- (long long)mode;
- (id)odometer;
- (void)setAverageSpeed:(double)arg1;
- (void)setMode:(long long)arg1;
- (void)setOdometer:(id)arg1;
- (void)setStartDate:(double)arg1;
- (void)setTotalDistance:(double)arg1;
- (double)startDate;
- (double)totalDistance;

@end
