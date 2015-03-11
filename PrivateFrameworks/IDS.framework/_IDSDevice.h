/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CUTWeakReference, NSArray, NSData, NSDate, NSDictionary, NSInputStream, NSObject<OS_dispatch_queue>, NSOutputStream, NSString, NSUUID;

@interface _IDSDevice : NSObject <IDSDaemonListenerProtocol> {
    CUTWeakReference *_account;
    NSDictionary *_info;
    NSInputStream *_inputStreamForSocket;
    int _lastActivityToken;
    int _nearbyToken;
    id _openSocketCompletionHandler;
    NSString *_openSocketCompletionHandlerID;
    NSObject<OS_dispatch_queue> *_openSocketCompletionHandlerQueue;
    NSOutputStream *_outputStreamForSocket;
    NSString *_serviceToken;
    int _socket;
    bool_connected;
    bool_nearby;
}

@property(getter=isConnected,readonly) bool connected;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain,readonly) NSString * deviceColor;
@property(retain,readonly) NSString * enclosureColor;
@property(readonly) unsigned long long hash;
@property(retain,readonly) NSArray * identities;
@property(readonly) bool isDefaultLocalDevice;
@property(readonly) bool isDefaultPairedDevice;
@property(retain,readonly) NSDate * lastActivityDate;
@property(retain,readonly) NSArray * linkedUserURIs;
@property(readonly) bool locallyPresent;
@property(retain,readonly) NSString * modelIdentifier;
@property(retain,readonly) NSString * name;
@property(getter=isNearby,readonly) bool nearby;
@property(setter=setNSUUID:,retain) NSUUID * nsuuid;
@property(readonly) unsigned long long pairingProtocolVersion;
@property(readonly) NSString * productBuildVersion;
@property(readonly) NSString * productName;
@property(readonly) NSString * productVersion;
@property(retain,readonly) NSData * pushToken;
@property(retain,readonly) NSString * service;
@property(readonly) Class superclass;
@property(readonly) bool supportsHandoff;
@property(readonly) bool supportsMMSRelay;
@property(readonly) bool supportsPhoneCalls;
@property(readonly) bool supportsSMSRelay;
@property(readonly) bool supportsTethering;
@property(readonly) bool supportsiCloudPairing;
@property(retain,readonly) NSString * uniqueID;

- (void)_addIdentity:(id)arg1;
- (void)_connect;
- (void)_nearbyStateChanged;
- (void)_setAccount:(id)arg1;
- (void)_updateNSUUID:(id)arg1;
- (void)closeSocket:(int)arg1;
- (void)closeSocketForDomain:(id)arg1;
- (void)closeStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)deviceColor;
- (id)enclosureColor;
- (id)identities;
- (id)initWithDictionary:(id)arg1;
- (bool)isConnected;
- (bool)isDefaultLocalDevice;
- (bool)isDefaultPairedDevice;
- (bool)isNearby;
- (id)lastActivityDate;
- (id)linkedUserURIs;
- (bool)locallyPresent;
- (id)modelIdentifier;
- (id)name;
- (id)nsuuid;
- (void)openSocketWithOptions:(id)arg1 completionHandler:(id)arg2 onQueue:(id)arg3;
- (unsigned long long)pairingProtocolVersion;
- (id)productBuildVersion;
- (id)productName;
- (id)productVersion;
- (id)pushToken;
- (id)service;
- (void)setNSUUID:(id)arg1;
- (void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
- (int)socketForDomain:(id)arg1;
- (bool)supportsHandoff;
- (bool)supportsMMSRelay;
- (bool)supportsPhoneCalls;
- (bool)supportsSMSRelay;
- (bool)supportsTethering;
- (bool)supportsiCloudPairing;
- (id)uniqueID;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;

@end
