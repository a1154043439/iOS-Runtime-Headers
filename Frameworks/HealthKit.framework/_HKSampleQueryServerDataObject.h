/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class NSArray;

@interface _HKSampleQueryServerDataObject : _HKQueryServerDataObject {
    unsigned long long _limit;
    NSArray *_sortDescriptors;
}

@property unsigned long long limit;
@property(retain) NSArray * sortDescriptors;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)limit;
- (void)setLimit:(unsigned long long)arg1;
- (void)setSortDescriptors:(id)arg1;
- (id)sortDescriptors;

@end
