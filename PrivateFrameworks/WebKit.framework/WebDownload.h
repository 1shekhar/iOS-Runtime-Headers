/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebDownloadInternal;



@interface WebDownload : NSURLDownload 
{
    WebDownloadInternal *_webInternal;
}


- (void)_setRealDelegate:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (id)_initWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3;
- (void)connection:(id)arg1 willStopBufferingData:(id)arg2;

@end