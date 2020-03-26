//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface ICSecurityInfo : NSObject
{
    BOOL _hasLoadedDeviceClassCUnlocked;
    BOOL _isDeviceClassCUnlocked;
    BOOL _hasLoadedContentProtectionEnabled;
    BOOL _isContentProtectionEnabled;
    int _firstUnlockNotificationToken;
    NSMutableArray *_pendingFirstUnlockBlocks;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

+ (id)sharedSecurityInfo;
// - (void).cxx_destruct;
- (void)_processFirstUnlockNotification;
- (void)_loadContentProtectionEnabled:(BOOL)arg1 isDeviceClassCUnlocked:(BOOL)arg2;
- (void)_getContentProtectionEnabled:(BOOL )arg1 isDeviceClassCUnlocked:(BOOL )arg2;
- (void)performBlockAfterFirstUnlock:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic, getter=isDeviceUnlocked) BOOL deviceUnlocked;
@property(readonly, nonatomic, getter=isDeviceClassCUnlocked) BOOL deviceClassCUnlocked; // @synthesize deviceClassCUnlocked=_isDeviceClassCUnlocked;
@property(readonly, nonatomic, getter=isContentProtectionEnabled) BOOL contentProtectionEnabled; // @synthesize contentProtectionEnabled=_isContentProtectionEnabled;
- (void)dealloc;
- (id)init;

@end
