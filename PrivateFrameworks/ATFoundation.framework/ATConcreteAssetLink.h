/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@class <ATAssetLinkDelegate>, <ATMessageLink>, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface ATConcreteAssetLink : NSObject <ATAssetLink, ATMessageLinkObserver> {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    <ATAssetLinkDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_fileIOQueue;
    <ATMessageLink> *_messageLink;
    NSMutableArray *_outstandingAssets;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_readers;
    bool_open;
}

@property(copy,readonly) NSString * debugDescription;
@property <ATAssetLinkDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(getter=isOpen,readonly) bool open;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishAsset:(id)arg1 withError:(id)arg2;
- (void)_requestAsset:(id)arg1;
- (id)_urlForWritingAsset:(id)arg1 withFileName:(id)arg2;
- (bool)canEnqueueAsset:(id)arg1;
- (void)cancelAssets:(id)arg1;
- (void)close;
- (id)delegate;
- (id)enqueueAssets:(id)arg1 force:(bool)arg2;
- (id)initWithMessageLink:(id)arg1;
- (bool)isOpen;
- (bool)linkIsReady;
- (unsigned long long)maximumBatchSize;
- (void)messageLinkWasClosed:(id)arg1;
- (bool)open;
- (void)prioritizeAsset:(id)arg1;
- (unsigned long long)priority;
- (void)setDelegate:(id)arg1;

@end
