//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSExtension, NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerDescriptor : NSObject
{
    BOOL _newlyAdded;
    NSExtension *_extension;
}

+ (void)setOrderFromPickers:(id)arg1;
+ (id)pickerOrder;
+ (void)_ubiquityIdentityTokenDidChange:(id)arg1;
+ (BOOL)cloudMigrationStatus;
+ (BOOL)cloudEnabledStatus;
+ (void)_updateCloudEnabledStatus;
+ (void)__updateCloudEnabledStatus;
+ (id)descriptorWithIdentifier:(id)arg1;
+ (id)defaultPickerIdentifierForMode:(NSUInteger)arg1 documentTypes:(id)arg2;
+ (id)manageablePickersForMode:(NSUInteger)arg1 documentTypes:(id)arg2;
+ (id)enabledPickersForMode:(NSUInteger)arg1 documentTypes:(id)arg2;
+ (id)filteredPickersForPickers:(id)arg1 filter:(NSUInteger)arg2;
+ (id)allPickersForMode:(NSUInteger)arg1 documentTypes:(id)arg2;
+ (id)allPickers;
+ (BOOL)isInAddToiCloudDrive;
+ (BOOL)isContentManaged;
+ (void)setIsContentManaged:(BOOL)arg1;
+ (CDStruct_6ad76789)hostAuditToken;
+ (void)setHostAuditToken:(CDStruct_6ad76789)arg1;
+ (id)hostBundleID;
+ (void)setHostBundleID:(id)arg1;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(nonatomic, getter=isNewlyAdded) BOOL newlyAdded; // @synthesize newlyAdded=_newlyAdded;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
@property(nonatomic) BOOL enabled;
@property(readonly, copy, nonatomic) NSArray *supportedContentTypes;
- (id)_extensionValueOfClass:(Class)arg1 forKey:(id)arg2;
- (id)imageWithScale:(double)arg1;
@property(readonly, copy, nonatomic) NSString *localizedName;
@property(readonly, copy, nonatomic) NSString *nonUIIdentifier;
@property(readonly, retain, nonatomic) NSString *fileProviderDocumentGroup;
- (id)nonUIBundle;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)_parentApp;
- (id)_ownBundle;
- (BOOL)supportsPickerMode:(NSUInteger)arg1;
- (long long)compare:(id)arg1;
- (BOOL)pickerEnabledForMode:(NSUInteger)arg1 documentTypes:(id)arg2 reason:(id )arg3;

@end
