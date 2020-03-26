//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSUUID, TSPComponent, TSPData, TSPLazyReference, TSPUnarchiver;

@protocol TSPUnarchiverDelegate <NSObject>
@property(readonly, nonatomic) BOOL canRetainObjectReferencedByWeakLazyReference;
@property(readonly, nonatomic) long long sourceType;
@property(readonly, nonatomic) BOOL hasDocumentVersionUUID;
@property(readonly, nonatomic) BOOL didFinishResolvingReferences;
@property(readonly, nonatomic) NSUInteger fileFormatVersion;
@property(readonly, nonatomic) long long componentIdentifier;
- (TSPData *)dataForIdentifier:(long long)arg1;
- (NSUUID *)UUIDForObjectIdentifier:(long long)arg1;
- (long long)objectIdentifierForUUID:(NSUUID *)arg1;
- (void)unarchiver:(TSPUnarchiver *)arg1 didReadLazyReference:(TSPLazyReference *)arg2 isExternal:(BOOL )arg3;

@optional
@property(readonly, nonatomic) TSPComponent *component;
@property(readonly, nonatomic) BOOL isCrossAppPaste;
@property(readonly, nonatomic) BOOL isCrossDocumentPaste;
@end
