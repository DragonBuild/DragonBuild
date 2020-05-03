//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBSServiceFacility.h>

@class FBServiceClientAuthenticator;
@protocol SBWallpaperServerDelegate;

@interface SBWallpaperServer : FBSServiceFacility
{
    id <SBWallpaperServerDelegate> _delegate;
    FBServiceClientAuthenticator *_accessAuthenticator;
}

+ (id)sharedInstance;
@property(retain, nonatomic) FBServiceClientAuthenticator *accessAuthenticator; // @synthesize accessAuthenticator=_accessAuthenticator;
@property(nonatomic) __weak id <SBWallpaperServerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_handleRestoreDefaultWallpaperMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetGradientMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetColorNameMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetVideoMessageWithWallpaperMode:(id)arg1 fromClient:(id)arg2;
- (long long)_wallpaperModeFromXPCDictionary:(id)arg1;
- (void)_handleFetchThumbnailMessage:(id)arg1 fromClient:(id)arg2;
- (long long)_wallpaperVariantFromXPCDictionary:(id)arg1;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (id)_init;

@end
