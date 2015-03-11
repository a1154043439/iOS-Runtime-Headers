/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface CKDispatchQueue : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_dispatchQueueBlocks;
    unsigned long long _fifo;
    struct __CFBinaryHeap { } *_heap;
    NSObject<OS_dispatch_queue> *_lockQueue;
    bool_cancelled;
    bool_suspended;
}

@property(getter=isCancelled) bool cancelled;
@property(retain) NSObject<OS_dispatch_queue> * dispatchQueue;
@property(retain) NSMutableDictionary * dispatchQueueBlocks;
@property(retain) struct __CFBinaryHeap { }* heap;
@property(retain) NSObject<OS_dispatch_queue> * lockQueue;
@property(getter=isSuspended) bool suspended;

+ (id)concurrentQueueWithDispatchPriority:(long long)arg1;
+ (id)serialQueueWithDispatchPriority:(long long)arg1;

- (id)_initWithDispatchAttr:(id)arg1 dispatchPriority:(long long)arg2;
- (void)addBlock:(id)arg1 withQueuePriority:(long long)arg2 forKey:(id)arg3;
- (void)addBlock:(id)arg1 withQueuePriority:(long long)arg2;
- (void)addBlock:(id)arg1;
- (id)allKeysOfOutstandingBlocks;
- (void)cancelOustandingBlocks;
- (bool)containsOutstandingBlockForKey:(id)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (id)dispatchQueueBlocks;
- (struct __CFBinaryHeap { }*)heap;
- (id)init;
- (bool)isCancelled;
- (bool)isSuspended;
- (id)lockQueue;
- (long long)queuePriorityOfOutstandingBlockForKey:(id)arg1;
- (void)removeAllOutstandingBlocks;
- (void)removeOutstandingBlockForKey:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setDispatchQueueBlocks:(id)arg1;
- (void)setHeap:(struct __CFBinaryHeap { }*)arg1;
- (void)setLockQueue:(id)arg1;
- (void)setQueuePriority:(long long)arg1 ofOutstandingBlockForKey:(id)arg2;
- (void)setSuspended:(bool)arg1;

@end
