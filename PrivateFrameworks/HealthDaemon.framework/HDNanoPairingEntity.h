/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDNanoPairingEntity : HDHealthEntity {
}

+ (bool)_insertNanoPairingRecord:(id)arg1 replaceExisting:(bool)arg2 database:(id)arg3 error:(id*)arg4;
+ (id)_nanoPairingRecordPropertySetters;
+ (id)_nanoPairingRecordWithPersistentPairingUUID:(id)arg1 database:(id)arg2;
+ (id)_predicateWithPersistentPairingUUID:(id)arg1;
+ (id)createTableSQL;
+ (id)databaseTable;
+ (id)nanoPairingRecordWithPersistentPairingUUID:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (id)nanoPairingRecordWithPersistentPairingUUID:(id)arg1 healthPairingUUID:(id)arg2 didReplaceExisting:(bool*)arg3 healthDatabase:(id)arg4 error:(id*)arg5;
+ (long long)protectionClass;
+ (bool)resetNanoPairingRecordWithPersistentPairingUUID:(id)arg1 newHealthPairingUUID:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4;

@end
