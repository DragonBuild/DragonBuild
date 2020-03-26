//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber;

@interface CEMApplicationStoreMacOSDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadRestrictStoreRequireAdminToInstall;
    NSNumber *_payloadRestrictStoreSoftwareupdateOnly;
    NSNumber *_payloadRestrictStoreDisableAppAdoption;
    NSNumber *_payloadDisableSoftwareUpdateNotifications;
    NSNumber *_payloadRestrictStoreMdmInstallSoftwareupdateOnly;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withRestrictStoreRequireAdminToInstall:(id)arg2 withRestrictStoreSoftwareupdateOnly:(id)arg3 withRestrictStoreDisableAppAdoption:(id)arg4 withDisableSoftwareUpdateNotifications:(id)arg5 withRestrictStoreMdmInstallSoftwareupdateOnly:(id)arg6;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadRestrictStoreMdmInstallSoftwareupdateOnly; // @synthesize payloadRestrictStoreMdmInstallSoftwareupdateOnly=_payloadRestrictStoreMdmInstallSoftwareupdateOnly;
@property(copy, nonatomic) NSNumber *payloadDisableSoftwareUpdateNotifications; // @synthesize payloadDisableSoftwareUpdateNotifications=_payloadDisableSoftwareUpdateNotifications;
@property(copy, nonatomic) NSNumber *payloadRestrictStoreDisableAppAdoption; // @synthesize payloadRestrictStoreDisableAppAdoption=_payloadRestrictStoreDisableAppAdoption;
@property(copy, nonatomic) NSNumber *payloadRestrictStoreSoftwareupdateOnly; // @synthesize payloadRestrictStoreSoftwareupdateOnly=_payloadRestrictStoreSoftwareupdateOnly;
@property(copy, nonatomic) NSNumber *payloadRestrictStoreRequireAdminToInstall; // @synthesize payloadRestrictStoreRequireAdminToInstall=_payloadRestrictStoreRequireAdminToInstall;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

@end
