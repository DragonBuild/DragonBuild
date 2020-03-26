//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface CRCarPlayAppDeclaration : NSObject
{
    BOOL _systemApp;
    BOOL _requiresGeoSupport;
    BOOL _launchUsingSiri;
    BOOL _launchNotificationsUsingSiri;
    BOOL _supportsPlayableContent;
    BOOL _supportsMessaging;
    BOOL _supportsCalling;
    BOOL _supportsMaps;
    NSString *_bundleIdentifier;
    NSSet *_autoMakerProtocols;
    NSUInteger __applicationCategory;
}

+ (id)declarationForBundleIdentifier:(id)arg1 entitlements:(id)arg2 infoPlist:(id)arg3;
+ (id)declarationForAppProxy:(id)arg1;
+ (id)declarationForBundleIdentifier:(id)arg1 info:(id)arg2 entitlements:(id)arg3;
+ (id)requiredEntitlementKeys;
+ (id)requiredInfoKeys;
@property(nonatomic) NSUInteger _applicationCategory; // @synthesize _applicationCategory=__applicationCategory;
@property(retain, nonatomic) NSSet *autoMakerProtocols; // @synthesize autoMakerProtocols=_autoMakerProtocols;
@property(nonatomic) BOOL supportsMaps; // @synthesize supportsMaps=_supportsMaps;
@property(nonatomic) BOOL supportsCalling; // @synthesize supportsCalling=_supportsCalling;
@property(nonatomic) BOOL supportsMessaging; // @synthesize supportsMessaging=_supportsMessaging;
@property(nonatomic) BOOL supportsPlayableContent; // @synthesize supportsPlayableContent=_supportsPlayableContent;
@property(nonatomic) BOOL launchNotificationsUsingSiri; // @synthesize launchNotificationsUsingSiri=_launchNotificationsUsingSiri;
@property(nonatomic) BOOL launchUsingSiri; // @synthesize launchUsingSiri=_launchUsingSiri;
@property(nonatomic) BOOL requiresGeoSupport; // @synthesize requiresGeoSupport=_requiresGeoSupport;
@property(nonatomic, getter=isSystemApp) BOOL systemApp; // @synthesize systemApp=_systemApp;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
// - (void).cxx_destruct;

@end
