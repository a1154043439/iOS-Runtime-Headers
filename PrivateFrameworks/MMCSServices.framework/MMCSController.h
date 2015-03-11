/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
 */

@class NSMutableDictionary, NSTimer;

@interface MMCSController : NSObject {
    struct __CFURL { } *_chunkStoreURL;
    long long _connectionBehavior;
    unsigned long long _currentItemID;
    struct __MMCSEngine { } *_engine;
    id _powerAssertion;
    NSTimer *_powerAssertionTimer;
    NSMutableDictionary *_requestIDToBlockMap;
    NSMutableDictionary *_requestIDToRemainingTransfersMap;
    NSMutableDictionary *_requestIDToTransfersMap;
    NSMutableDictionary *_transferToRequestIDsMap;
    NSMutableDictionary *_transfers;
}

@property long long connectionBehavior;
@property(readonly) bool isActive;

- (struct __MMCSEngine { }*)_engine;
- (void)_getItemCompleted:(id)arg1 path:(id)arg2 error:(id)arg3;
- (void)_getItemUpdated:(id)arg1 progress:(double)arg2 state:(int)arg3 error:(id)arg4;
- (bool)_getTransfers:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 token:(id)arg4 error:(id*)arg5;
- (void)_itemCompleted:(id)arg1;
- (id)_options;
- (void)_processCompletedItem:(id)arg1 error:(id)arg2;
- (void)_putItemCompleted:(id)arg1 error:(id)arg2;
- (void)_putItemUpdated:(id)arg1 progress:(double)arg2 state:(int)arg3 error:(id)arg4;
- (bool)_putTransfers:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 token:(id)arg4 error:(id*)arg5;
- (void)_registerPowerAssertionIfNeeded;
- (bool)_registerTransfers:(id)arg1;
- (id)_registeredTransferForGUID:(id)arg1;
- (id)_registeredTransferForItemID:(unsigned long long)arg1;
- (void)_releasePowerAssertion;
- (void)_releasePowerAssertionAndSimulateCrash;
- (void)_setScheduledTransfers:(id)arg1 block:(id)arg2;
- (void)_unregisterPowerAssertion;
- (bool)_unregisterTransfers:(id)arg1;
- (long long)connectionBehavior;
- (void)dealloc;
- (void)getFiles:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 authToken:(id)arg4 completionBlock:(id)arg5;
- (id)init;
- (bool)isActive;
- (void)putFiles:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 authToken:(id)arg4 completionBlock:(id)arg5;
- (bool)registerFiles:(id)arg1;
- (void)setConnectionBehavior:(long long)arg1;
- (bool)unregisterFiles:(id)arg1;

@end
