/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@class APDAsyncURLConnection, APDDataManager, APDKVOManager, NSOperationQueue, NSURL;

@interface APDGenericModel : NSObject {
    APDKVOManager *_KVOManager;
    APDAsyncURLConnection *_URLConnection;
    APDDataManager *_dataManager;
    NSOperationQueue *_localResourceOperationQueue;
    NSURL *_localResourceURL;
    NSURL *_requestURL;
    bool_hasLoaded;
    bool_loading;
}

@property(retain) APDKVOManager * KVOManager;
@property APDDataManager * dataManager;
@property bool hasLoaded;
@property bool loading;
@property(retain) NSOperationQueue * localResourceOperationQueue;
@property(copy) NSURL * localResourceURL;
@property(copy) NSURL * requestURL;

- (void).cxx_destruct;
- (id)KVOManager;
- (void)clearData;
- (void)commonInit;
- (id)dataManager;
- (void)dealloc;
- (bool)hasLoaded;
- (id)init;
- (bool)loading;
- (id)localResourceOperationQueue;
- (id)localResourceURL;
- (void)onConnectionChanged:(id)arg1;
- (bool)processLocalDataFromLocalResource;
- (void)processRequestData:(id)arg1;
- (id)requestURL;
- (void)setDataManager:(id)arg1;
- (void)setHasLoaded:(bool)arg1;
- (void)setKVOManager:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)setLocalResourceOperationQueue:(id)arg1;
- (void)setLocalResourceURL:(id)arg1;
- (void)setRequestURL:(id)arg1;
- (void)startRequest;

@end
