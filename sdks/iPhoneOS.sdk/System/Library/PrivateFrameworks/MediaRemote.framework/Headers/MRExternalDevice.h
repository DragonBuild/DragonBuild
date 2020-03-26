//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRSupportedProtocolMessages, NSString, _MRDeviceInfoMessageProtobuf, _MROriginProtobuf;

__attribute__((visibility("hidden")))
@interface MRExternalDevice : NSObject
{
    BOOL _valid;
    BOOL _usingSystemPairing;
    unsigned int _connectionState;
}

@property(nonatomic, getter=isUsingSystemPairing) BOOL usingSystemPairing; // @synthesize usingSystemPairing=_usingSystemPairing;
@property(readonly, nonatomic) unsigned int connectionState; // @synthesize connectionState=_connectionState;
@property(readonly, nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;
- (void)sendClientUpdatesConfigMessage;
- (id)currentClientUpdatesConfigMessage;
- (id)errorForCurrentState;
- (void)ping:(double)arg1 callback:(id /* CDUnknownBlockType */)arg2 withQueue:(id)arg3;
- (void)sendCustomData:(id)arg1 withName:(id)arg2;
- (void)sendButtonEvent:(struct _MRHIDButtonEvent)arg1;
- (void)modifyOutputContextOfType:(unsigned int)arg1 addingDeviceUIDs:(id)arg2 removingDeviceUIDs:(id)arg3 settingDeviceUIDs:(id)arg4 withReplyQueue:(id)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (void)outputDeviceVolumeControlCapabilities:(id)arg1 queue:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)setOutputDeviceVolume:(float)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)setVolumeCallback:(id /* CDUnknownBlockType */)arg1 withQueue:(id)arg2;
- (void)setCustomDataCallback:(id /* CDUnknownBlockType */)arg1 withQueue:(id)arg2;
- (void)setPairingAllowedCallback:(id /* CDUnknownBlockType */)arg1 withQueue:(id)arg2;
- (void)setNameCallback:(id /* CDUnknownBlockType */)arg1 withQueue:(id)arg2;
- (void)setConnectionStateCallback:(id /* CDUnknownBlockType */)arg1 withQueue:(id)arg2;
- (void)setPairingCallback:(id /* CDUnknownBlockType */)arg1 withQueue:(id)arg2;
- (void)unpair;
- (void)disconnect:(id)arg1;
- (void)connectWithOptions:(unsigned int)arg1;
@property(readonly, nonatomic, getter=isPaired) BOOL paired;
@property(nonatomic) BOOL wantsOutputDeviceNotifications;
@property(nonatomic) BOOL wantsVolumeNotifications;
@property(nonatomic) BOOL wantsNowPlayingArtworkNotifications;
@property(nonatomic) BOOL wantsNowPlayingNotifications;
@property(readonly, nonatomic) MRSupportedProtocolMessages *supportedMessages;
@property(readonly, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property(readonly, nonatomic) _MROriginProtobuf *customOrigin;
@property(readonly, nonatomic) long long port;
@property(readonly, nonatomic) NSString *hostName;
@property(readonly, nonatomic) NSString *name;
- (id)_init;

@end
