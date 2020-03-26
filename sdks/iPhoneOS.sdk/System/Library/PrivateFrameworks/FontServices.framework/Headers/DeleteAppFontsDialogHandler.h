//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FontServices/FontInstallViewServiceProtocol-Protocol.h>

@class NSXPCListener;

@interface DeleteAppFontsDialogHandler : NSObject <NSXPCListenerDelegate, FontInstallViewServiceProtocol>
{
    id /* CDUnknownBlockType */ _completionHandler;
    NSXPCListener *_listener;
}

@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
// - (void).cxx_destruct;
- (void)showDialogWithUserInfo:(id)arg1;
- (void)doneWithDeleteAppFonts:(BOOL)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;

@end
