//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class MPAVRoute, NSString;

@interface MPCPlayerPath : NSObject <NSCopying, NSSecureCoding>
{
    int _pid;
    BOOL _resolved;
    NSString *_bundleID;
    NSString *_playerID;
    void _mediaRemotePlayerPath;
    NSString *_deviceUID;
    MPAVRoute *_route;
}

+ (BOOL)supportsSecureCoding;
+ (id)pathWithCustomOrigin:(void )arg1 bundleID:(id)arg2 playerID:(id)arg3;
+ (id)pathWithRoute:(id)arg1 mediaRemotePlayerPath:(void )arg2 isResolved:(BOOL)arg3;
+ (id)pathWithDeviceUID:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4;
+ (id)pathWithDeviceUIDs:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4;
+ (id)pathWithRoute:(id)arg1 bundleID:(id)arg2 playerID:(id)arg3;
+ (id)systemMusicPathWithRoute:(id)arg1 playerID:(id)arg2;
+ (id)deviceActivePlayerPath;
@property(readonly, nonatomic, getter=isResolved) BOOL resolved; // @synthesize resolved=_resolved;
@property(readonly, nonatomic) MPAVRoute *route; // @synthesize route=_route;
@property(readonly, nonatomic) NSString *deviceUID; // @synthesize deviceUID=_deviceUID;
@property(readonly, nonatomic) void mediaRemotePlayerPath; // @synthesize mediaRemotePlayerPath=_mediaRemotePlayerPath;
@property(readonly, copy, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
// - (void).cxx_destruct;
- (id)pathByAppendingPlayerIDSuffix:(id)arg1;
@property(readonly, nonatomic) void origin;
- (void)resolveWithRouteResolvedHandler:(id /* CDUnknownBlockType */)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)resolveWithCompletion:(id /* CDUnknownBlockType */)arg1;
@property(readonly, copy, nonatomic) NSString *representedBundleID;
@property(readonly, copy, nonatomic) NSString *representedBundleDisplayName;
@property(readonly, nonatomic, getter=isSystemMusicPath) BOOL systemMusicPath;
@property(readonly, nonatomic, getter=isInProcess) BOOL inProcess;
@property(readonly, nonatomic, getter=isFullyResolved) BOOL fullyResolved;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithDeviceUID:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4;
- (id)initWithRoute:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4;
- (id)initWithRoute:(id)arg1 bundleID:(id)arg2 playerID:(id)arg3;

@end
