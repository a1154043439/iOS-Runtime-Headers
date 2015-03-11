/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableData, NSString, NSURLAuthenticationChallenge, NSURLResponse;

@interface APDAsyncURLConnection : NSURLConnection <UIAlertViewDelegate> {
    NSURLResponse *_URLResponse;
    NSURLAuthenticationChallenge *_requestChanllenge;
    id mCompleteBlock;
    NSMutableData *mData;
    id mErrorBlock;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)requestURL:(id)arg1 cachePolicy:(unsigned long long)arg2 completeBlock:(id)arg3 errorBlock:(id)arg4;
+ (id)requestURL:(id)arg1 completeBlock:(id)arg2 errorBlock:(id)arg3;
+ (id)requestURL:(id)arg1 postData:(id)arg2 cachePolicy:(unsigned long long)arg3 completeBlock:(id)arg4 errorBlock:(id)arg5;
+ (id)requestURL:(id)arg1 postData:(id)arg2 completeBlock:(id)arg3 errorBlock:(id)arg4;

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)initWithRequestURL:(id)arg1 postData:(id)arg2 cachePolicy:(unsigned long long)arg3 completeBlock:(id)arg4 errorBlock:(id)arg5;
- (id)initWithRequestURL:(id)arg1 postData:(id)arg2 completeBlock:(id)arg3 errorBlock:(id)arg4;

@end
