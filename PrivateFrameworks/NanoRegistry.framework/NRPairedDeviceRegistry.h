/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@class NRFrameworkDevice, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSUUID, NSXPCConnection;

@interface NRPairedDeviceRegistry : NSObject <NRPairedDeviceRegistryXPCFrameworkDelegate, NSXPCConnectionDelegate> {
    NSUUID *_clientUUID;
    unsigned short _compatibilityState;
    NSObject<OS_dispatch_queue> *_connectQueue;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    NSMutableArray *_devicesBlocks;
    NSMutableArray *_finishedPairingSemaphores;
    unsigned long long _lastUnpairReason;
    NSMutableDictionary *_mutableDeviceDictionary;
    NRFrameworkDevice *_pairedDevice;
    long long _pairingCompatibilityVersion;
    NRFrameworkDevice *_pairingDevice;
    NSUUID *_pairingDeviceID;
    NSObject<OS_dispatch_queue> *_pdrQueue;
    double _reconnectDelay;
    NSObject<OS_dispatch_queue> *_reconnectQueue;
    unsigned long long _status;
    NSXPCConnection *_xpcConnection;
    bool_hasSomeEntitlements;
    bool_xpcConnectionInterrupted;
    bool_xpcConnectionInvalidated;
}

@property(retain) NSUUID * clientUUID;
@property unsigned short compatibilityState;
@property(retain) NSObject<OS_dispatch_queue> * connectQueue;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSObject<OS_dispatch_queue> * deviceQueue;
@property(retain) NSMutableArray * devicesBlocks;
@property(retain) NSMutableArray * finishedPairingSemaphores;
@property bool hasSomeEntitlements;
@property(readonly) unsigned long long hash;
@property unsigned long long lastUnpairReason;
@property(retain) NSMutableDictionary * mutableDeviceDictionary;
@property(retain) NRFrameworkDevice * pairedDevice;
@property long long pairingCompatibilityVersion;
@property(retain) NRFrameworkDevice * pairingDevice;
@property(retain) NSUUID * pairingDeviceID;
@property(retain) NSObject<OS_dispatch_queue> * pdrQueue;
@property double reconnectDelay;
@property(retain) NSObject<OS_dispatch_queue> * reconnectQueue;
@property(readonly) unsigned long long status;
@property(readonly) Class superclass;
@property(retain) NSXPCConnection * xpcConnection;
@property bool xpcConnectionInterrupted;
@property bool xpcConnectionInvalidated;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addRemoveRecoveryStepBackup:(bool)arg1 withPairingDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepDeleteAccounts:(bool)arg1;
- (void)_addRemoveRecoveryStepDeletePairingStore:(bool)arg1 withPairingDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepDisableDaemons:(bool)arg1;
- (void)_addRemoveRecoveryStepICloudDeletePaymentCards:(bool)arg1;
- (void)_addRemoveRecoveryStepIDSFinalize:(bool)arg1;
- (void)_addRemoveRecoveryStepIDSUnpair:(bool)arg1 withPairingDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepIDSUnpairStart:(bool)arg1;
- (void)_addRemoveRecoveryStepObliterate:(bool)arg1 withStatePath:(id)arg2;
- (void)_addRemoveRecoveryStepRemoteUnpair:(bool)arg1 withAdvertisedName:(id)arg2 andPairedDeviceID:(id)arg3;
- (void)_addRemoveRecoveryStepResetNVRAM:(bool)arg1;
- (void)_addRemoveRecoveryStepStockholmReset:(bool)arg1;
- (void)_addRemoveRecoveryStepUnpairBluetooth:(bool)arg1 withPairingDeviceID:(id)arg2;
- (void)_pairingStorePathPairingID:(id)arg1;
- (id)_recoveryDescription;
- (void)_setObliterationEnabled:(bool)arg1;
- (void)_triggerRecovery;
- (bool)_xpcEnsureFrameworkInitialized;
- (void)_xpcFrameworkInitializationSuccessWithStatus:(unsigned long long)arg1 andDevices:(id)arg2 andPairingDeviceID:(id)arg3 andPairingDevice:(id)arg4 hasEntitlements:(bool)arg5 andCompatibilityState:(unsigned short)arg6 andCompatibilityVersion:(long long)arg7 andLastUnpairReason:(unsigned long long)arg8;
- (void)_xpcInitializeConnection;
- (void)_xpcInterruptionHandler;
- (void)_xpcInvalidationHandler;
- (void)abortPairing;
- (void)abortPairingWithReason:(id)arg1;
- (id)clientUUID;
- (void)companionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 operationHasBegun:(id)arg3;
- (void)companionPasscodePairWithDevice:(id)arg1 operationHasBegun:(id)arg2;
- (unsigned short)compatibilityState;
- (id)connectQueue;
- (void)dealloc;
- (id)deviceQueue;
- (id)devicesBlocks;
- (void)enterCompatibilityState:(unsigned short)arg1 forDevice:(id)arg2;
- (id)finishedPairingSemaphores;
- (id)getActivePairedDevice;
- (id)getAllDevices;
- (id)getDevices;
- (void)getDevicesWithBlock:(id)arg1;
- (void)gizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(id)arg2;
- (void)gizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(id)arg2;
- (bool)hasSomeEntitlements;
- (id)init;
- (bool)isPaired;
- (unsigned long long)lastUnpairReason;
- (unsigned int)majorVersion;
- (unsigned int)minorVersion;
- (id)mutableDeviceDictionary;
- (void)notifyActivationCompleted:(id)arg1 withSuccess:(bool)arg2;
- (void)notifyPairingShouldContinue;
- (void)notifyPasscode:(id)arg1 forDevice:(id)arg2;
- (void)notifyStatus;
- (id)pairedDevice;
- (long long)pairingCompatibilityVersion;
- (id)pairingDevice;
- (id)pairingDeviceID;
- (id)pairingID;
- (id)pairingStorePath;
- (void)pairingStorePathPairingID:(id)arg1;
- (id)pdrQueue;
- (double)reconnectDelay;
- (id)reconnectQueue;
- (void)resumePairingClientCrashMonitoring;
- (void)retriggerUnpairInfoDialog;
- (void)sendDevicesUpdatedNotification;
- (void)setClientUUID:(id)arg1;
- (void)setCompatibilityState:(unsigned short)arg1;
- (void)setConnectQueue:(id)arg1;
- (void)setDeviceQueue:(id)arg1;
- (void)setDevicesBlocks:(id)arg1;
- (void)setFinishedPairingSemaphores:(id)arg1;
- (void)setHasSomeEntitlements:(bool)arg1;
- (void)setLastUnpairReason:(unsigned long long)arg1;
- (void)setMutableDeviceDictionary:(id)arg1;
- (void)setPairedDevice:(id)arg1;
- (void)setPairingCompatibilityVersion:(long long)arg1;
- (void)setPairingDevice:(id)arg1;
- (void)setPairingDeviceID:(id)arg1;
- (void)setPdrQueue:(id)arg1;
- (void)setReconnectDelay:(double)arg1;
- (void)setReconnectQueue:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setXpcConnectionInterrupted:(bool)arg1;
- (void)setXpcConnectionInvalidated:(bool)arg1;
- (unsigned long long)status;
- (void)suspendPairingClientCrashMonitoring;
- (void)unpairWithDevice:(id)arg1 shouldObliterate:(bool)arg2 operationHasBegun:(id)arg3;
- (void)waitForPairingStorePathPairingID:(id)arg1;
- (void)xpcAssertInClient:(id)arg1;
- (void)xpcCompatibilityStateDidChange:(unsigned short)arg1 withDevice:(id)arg2 andDeviceID:(id)arg3;
- (id)xpcConnection;
- (bool)xpcConnectionInterrupted;
- (bool)xpcConnectionInvalidated;
- (void)xpcCreateDevice:(id)arg1 deviceID:(id)arg2;
- (void)xpcDevice:(id)arg1 deviceID:(id)arg2 needsPasscode:(id)arg3;
- (void)xpcDeviceDidPair:(id)arg1 deviceID:(id)arg2;
- (void)xpcDeviceDidUnpair:(id)arg1 deviceID:(id)arg2;
- (void)xpcDeviceIDDidFailToPair:(id)arg1 error:(id)arg2;
- (void)xpcDeviceNeedsActivation:(id)arg1 deviceID:(id)arg2;
- (void)xpcDidBeginPairing:(id)arg1 deviceID:(id)arg2;
- (void)xpcDidReceiveBTPairingRequest:(id)arg1 deviceID:(id)arg2;
- (void)xpcHasNewOOBKey:(id)arg1;
- (void)xpcLastUnpairReasonDidChange:(unsigned long long)arg1;
- (void)xpcRemoteUnpairingDidBegin;
- (void)xpcSetValue:(id)arg1 forProperty:(id)arg2 deviceID:(id)arg3;
- (void)xpcStatusDidChange:(unsigned long long)arg1;

@end
