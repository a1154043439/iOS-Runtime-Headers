/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class IDSAccount, IDSAccountController, NSArray, NSMapTable, NSMutableDictionary, NSMutableSet, NSObject<OS_xpc_object>, NSSet, NSString;

@interface _IDSService : NSObject <IDSAccountControllerDelegate, IDSConnectionDelegatePrivate, IDSDaemonListenerProtocol> {
    IDSAccountController *_accountController;
    NSSet *_commands;
    NSObject<OS_xpc_object> *_connection;
    id _delegateContext;
    NSMapTable *_delegateToInfo;
    NSMutableSet *_lastIsActiveSet;
    unsigned int _listenerCaps;
    NSMutableDictionary *_protobufSelectors;
    NSString *_rerouteService;
    NSMutableDictionary *_uniqueIDToConnection;
    bool_everHadDelegate;
    bool_pretendingToBeFull;
}

@property(copy,readonly) NSSet * accounts;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSArray * devices;
@property(readonly) unsigned long long hash;
@property(retain,readonly) IDSAccount * iCloudAccount;
@property(getter=isPretendingToBeFull) bool pretendingToBeFull;
@property(copy,readonly) NSString * serviceDomain;
@property(readonly) Class superclass;

- (void)_callDelegatesWithBlock:(id)arg1 group:(id)arg2;
- (void)_callDelegatesWithBlock:(id)arg1;
- (void)_callIsActiveChanged;
- (void)_handlePretendingToBeFullWithIdentifier:(id*)arg1;
- (void)_logConnectionMap;
- (void)_processAccountSet:(id)arg1;
- (id)_sendingAccountForAccount:(id)arg1;
- (void)_setupIDSWakeListenerForService:(id)arg1;
- (void)_setupNewConnectionForAccount:(id)arg1;
- (void)_tearDownConnectionForUniqueID:(id)arg1;
- (void)accountController:(id)arg1 accountAdded:(id)arg2;
- (void)accountController:(id)arg1 accountDisabled:(id)arg2;
- (void)accountController:(id)arg1 accountEnabled:(id)arg2;
- (void)accountController:(id)arg1 accountRemoved:(id)arg2;
- (id)accounts;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (bool)cancelIdentifier:(id)arg1 error:(id*)arg2;
- (void)connection:(id)arg1 account:(id)arg2 sessionInviteReceived:(id)arg3 fromID:(id)arg4 transportType:(id)arg5 options:(id)arg6 context:(id)arg7 messageContext:(id)arg8;
- (void)connection:(id)arg1 devicesChanged:(id)arg2;
- (void)connection:(id)arg1 identifier:(id)arg2 alternateCallbackID:(id)arg3 willSendToDestinations:(id)arg4 skippedDestinations:(id)arg5 registrationPropertyToDestinations:(id)arg6;
- (void)connection:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(bool)arg3 error:(id)arg4;
- (void)connection:(id)arg1 identifier:(id)arg2 hasBeenDeliveredWithContext:(id)arg3;
- (void)connection:(id)arg1 incomingData:(id)arg2 fromID:(id)arg3 context:(id)arg4;
- (void)connection:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4;
- (void)connection:(id)arg1 incomingProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4;
- (void)connection:(id)arg1 incomingTopLevelMessage:(id)arg2 fromID:(id)arg3 messageContext:(id)arg4;
- (void)connection:(id)arg1 isActiveChanged:(bool)arg2;
- (void)connection:(id)arg1 messageIdentifier:(id)arg2 alternateCallbackID:(id)arg3 updatedWithResponseCode:(long long)arg4 error:(id)arg5 lastCall:(bool)arg6;
- (void)connection:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)daemonConnected;
- (void)dealloc;
- (id)deviceForFromID:(id)arg1;
- (id)devices;
- (id)iCloudAccount;
- (id)initWithService:(id)arg1 commands:(id)arg2 delegateContext:(id)arg3;
- (id)initWithService:(id)arg1 serviceDomain:(id)arg2 delegateContext:(id)arg3;
- (bool)isPretendingToBeFull;
- (SEL)protobufActionForType:(unsigned short)arg1 isResponse:(bool)arg2;
- (void)removeDelegate:(id)arg1;
- (bool)sendData:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (bool)sendData:(id)arg1 priority:(long long)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5;
- (bool)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (bool)sendProtobuf:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (bool)sendResourceAtURL:(id)arg1 metadata:(id)arg2 fromAccount:(id)arg3 toDestinations:(id)arg4 priority:(long long)arg5 options:(id)arg6 identifier:(id*)arg7 error:(id*)arg8;
- (bool)sendServerMessage:(id)arg1 command:(id)arg2 fromAccount:(id)arg3;
- (id)serviceDomain;
- (void)setPreferInfraWiFi:(bool)arg1;
- (void)setPretendingToBeFull:(bool)arg1;
- (void)setProtobufAction:(SEL)arg1 forProtobufType:(unsigned short)arg2 isResponse:(bool)arg3;
- (id)uriForFromID:(id)arg1;

@end
