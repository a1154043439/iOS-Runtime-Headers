/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@class NSObject;

@interface BLTObjectCacheItem : NSObject {
    double _lastAccessedDate;
    NSObject *_object;
}

@property(readonly) double lastAccessedDate;
@property(readonly) NSObject * object;

+ (id)cacheItemWithObject:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithObject:(id)arg1;
- (double)lastAccessedDate;
- (id)object;
- (void)touch;

@end
