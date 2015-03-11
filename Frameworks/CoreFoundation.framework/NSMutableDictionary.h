/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSMutableDictionary : NSDictionary {
}

+ (id)MSASDictionaryWithCopyOfDictionary:(id)arg1;
+ (id)_dictionaryWithContentsOfDictionaries:(id)arg1;
+ (bool)_processArgumentWithMutableDictionary:(id)arg1 object:(id)arg2 key:(id)arg3;
+ (bool)_processArgumentWithMutableDictionary:(id)arg1 object:(id)arg2 key:(id)arg3;
+ (id)dictionaryByInvertingDictionary:(id)arg1;
+ (id)dictionaryByInvertingDictionary:(id)arg1;
+ (id)dictionaryByInvertingDictionaryIfPossible:(id)arg1;
+ (id)dictionaryByInvertingDictionaryIfPossible:(id)arg1;
+ (id)dictionaryWithCapacity:(unsigned long long)arg1;
+ (id)dictionaryWithSharedKeySet:(id)arg1;
+ (id)nonRetainingDictionary;
+ (id)nonRetainingKeyAndValueDictionary;
+ (id)npkDictionaryWithObjectsAndKeys:(id)arg1;
+ (id)retainingKeyDictionary;
+ (id)vmDictionaryWithObjectsAndKeys:(id)arg1;

- (id)CALsafeObjectForKey:(id)arg1 calculatedWithBlock:(id)arg2;
- (void)CDVAddObjectsAndKeys:(id)arg1;
- (void)MCDeepCopyEntriesFromDictionary:(id)arg1;
- (void)MCDeepCopyMissingEntriesFromDictionary:(id)arg1;
- (void)MCDeleteBoolRestriction:(id)arg1;
- (void)MCFixUpRestrictionsDictionaryForMDMReporting;
- (id)MCMutableDictionaryContainingValidatedKeysAndClasses:(id)arg1 removeKeys:(bool)arg2 outError:(id*)arg3;
- (void)MCSetBoolRestriction:(id)arg1 value:(bool)arg2;
- (void)MCSetIntersectionRestriction:(id)arg1 values:(id)arg2;
- (void)MCSetObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)MCSetUnionRestriction:(id)arg1 values:(id)arg2;
- (void)MCSetValueRestriction:(id)arg1 value:(id)arg2;
- (id)MCValidateAndRemoveArrayOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(bool)arg3 outError:(id*)arg4;
- (id)MCValidateAndRemoveNonZeroLengthStringWithKey:(id)arg1 isRequired:(bool)arg2 outError:(id*)arg3;
- (id)MCValidateAndRemoveObjectOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(bool)arg3 outError:(id*)arg4;
- (id)MSASAddDictionary:(id)arg1;
- (id)MSASAddEventIsDueToAlbumDeletionAlbumGUID:(id)arg1;
- (id)MSASAddEventIsDueToAssetCollectionDeletionAssetCollectionGUID:(id)arg1;
- (id)MSASAddIsAlbumResetSyncAlbumGUID:(id)arg1;
- (id)MSASAddIsErrorRecovery;
- (id)MSASAddIsGlobalResetSync;
- (id)MSASAddIsLocalChange;
- (id)MSASAddNotInterestingKey;
- (void)__addObject:(id)arg1 forKey:(id)arg2;
- (void)__setObject:(id)arg1 forKey:(id)arg2;
- (void)_gkAddEntriesFromFormEncodedString:(id)arg1;
- (void)_mutate;
- (void)_web_setBool:(bool)arg1 forKey:(id)arg2;
- (void)_web_setInt:(int)arg1 forKey:(id)arg2;
- (void)_web_setObject:(id)arg1 forUncopiedKey:(id)arg2;
- (void)_web_setObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)_webkit_setBool:(bool)arg1 forKey:(id)arg2;
- (void)_webkit_setFloat:(float)arg1 forKey:(id)arg2;
- (void)_webkit_setInt:(int)arg1 forKey:(id)arg2;
- (void)_webkit_setLongLong:(long long)arg1 forKey:(id)arg2;
- (void)_webkit_setUnsignedInt:(unsigned int)arg1 forKey:(id)arg2;
- (void)_webkit_setUnsignedLongLong:(unsigned long long)arg1 forKey:(id)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)addEntriesFromDictionaryWithRecursion:(id)arg1;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (void)addObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (void)addObjects:(id)arg1 forKeys:(id)arg2;
- (id)addToCacheAndReturnCssString:(id)arg1;
- (void)bl_copyObjectFromDictionary:(id)arg1 forKey:(id)arg2;
- (void)bl_copyObjectFromDictionaryRemoveIfNotPresent:(id)arg1 forKey:(id)arg2;
- (void)bl_copyObjectsFromDictionary:(id)arg1 forKeys:(id)arg2;
- (void)bl_copyObjectsFromDictionaryRemoveIfNotPresent:(id)arg1 forKeys:(id)arg2;
- (void)bl_setAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 forKey:(id)arg2;
- (void)bl_setBool:(bool)arg1 forKey:(id)arg2;
- (void)bl_setBoolIfNotPresent:(bool)arg1 forKey:(id)arg2;
- (void)bl_setDouble:(double)arg1 forKey:(id)arg2;
- (void)bl_setDoubleIfNotPresent:(double)arg1 forKey:(id)arg2;
- (void)bl_setFloat:(float)arg1 forKey:(id)arg2;
- (void)bl_setFloatIfNotPresent:(float)arg1 forKey:(id)arg2;
- (void)bl_setInt:(int)arg1 forKey:(id)arg2;
- (void)bl_setIntIfNotPresent:(int)arg1 forKey:(id)arg2;
- (void)bl_setInteger:(long long)arg1 forKey:(id)arg2;
- (void)bl_setNonRetainedObject:(id)arg1 forKey:(id)arg2;
- (void)bl_setObject:(id)arg1 forIndex:(int)arg2;
- (void)bl_setObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)bl_setObjectIfNotPresent:(id)arg1 forKey:(id)arg2;
- (void)bl_setPointAsString:(struct CGPoint { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)bl_setPointAsStringIfNotPresent:(struct CGPoint { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)bl_setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)bl_setRectAsString:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)bl_setRectAsStringIfNotPresent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)bl_setRectIfNotPresent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)blj_setObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)bs_setSafeObject:(id)arg1 forKey:(id)arg2;
- (id)bs_takeObjectForKey:(id)arg1;
- (void)bw_addEntriesFromDictionaryWithRecursion:(id)arg1;
- (Class)classForCoder;
- (void)cr_setNonNilObject:(id)arg1 forKey:(id)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (void)invert;
- (void)mergeWithDictionary:(id)arg1;
- (void)mf_addObject:(id)arg1 forKey:(id)arg2;
- (void)mf_fixupRFC2231Values;
- (id)mf_objectForKey:(id)arg1 ofClass:(Class)arg2;
- (void)mf_setBool:(bool)arg1 forKey:(id)arg2;
- (void)mf_setInteger:(int)arg1 forKey:(id)arg2;
- (id)mutableCopyDeep;
- (void)npkSetObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1 withDefaultOfClass:(Class)arg2;
- (id)objectForKey:(id)arg1 withDefaultOfClass:(Class)arg2;
- (id)objectForKey:(id)arg1 withDefaultUsingBlock:(id)arg2;
- (id)objectForKey:(id)arg1 withDefaultUsingBlock:(id)arg2;
- (void)pl_applyOrientation:(long long)arg1 toNormalizedPointWithXKey:(id)arg2 yKey:(id)arg3;
- (void)pl_enforceCorrectValuesForMinKey:(id)arg1 maxKey:(id)arg2;
- (void)removeAllObjects;
- (void)removeEntriesInDictionary:(id)arg1;
- (void)removeEntriesPassingTest:(id)arg1;
- (void)removeEntriesWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (void)removeKeysForObject:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)replaceObject:(id)arg1 forKey:(id)arg2;
- (void)replaceObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (void)replaceObjects:(id)arg1 forKeys:(id)arg2;
- (void)safelyMapKey:(id)arg1 toObject:(id)arg2;
- (void)safelyMapKey:(id)arg1 toObject:(id)arg2;
- (void)safelySetObject:(id)arg1 forKey:(id)arg2;
- (void)safelySetObject:(id)arg1 forKey:(id)arg2;
- (void)sbs_setSafeObject:(id)arg1 forKey:(id)arg2;
- (void)setAsString:(id)arg1 forKey:(id)arg2;
- (void)setDictionary:(id)arg1;
- (void)setEntriesFromDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (void)setObjects:(id)arg1 forKeys:(id)arg2;
- (void)setSafeObject:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)tsu_setNonNilValueForKey:(id)arg1 fromDictionary:(id)arg2;
- (void)vmSetObject:(id)arg1 forKey:(id)arg2;

@end
