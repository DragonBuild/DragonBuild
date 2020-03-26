//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCEReferenceTrackerDelegate-Protocol.h>

@class NSMutableSet, TSCEReferenceTracker, TSTTableInfo;

__attribute__((visibility("hidden")))
@interface TSTSortRuleReferenceTracker : NSObject <TSCEReferenceTrackerDelegate>
{
    TSTTableInfo *_tableInfo;
    NSMutableSet *_references;
    TSCEReferenceTracker *_referenceTracker;
}

@property(retain, nonatomic) TSCEReferenceTracker *referenceTracker; // @synthesize referenceTracker=_referenceTracker;
@property(retain, nonatomic) NSMutableSet *references; // @synthesize references=_references;
@property(nonatomic) __weak TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
// - (void).cxx_destruct;
- (id)initFromArchive:(const struct SortRuleReferenceTrackerArchive )arg1 unarchiver:(id)arg2;
- (void)encodeToArchive:(struct SortRuleReferenceTrackerArchive )arg1 archiver:(id)arg2;
- (void)referencedCellWasModified:(id)arg1;
- (void)trackedReferenceWasDeleted:(id)arg1 fromOwnerUID:(const UUIDData_5fbc143e )arg2;
- (id)cellRangeWasInserted:(const struct TSCERangeRef )arg1;
- (BOOL)shouldRewriteOnTableIDReassignment;
- (BOOL)shouldRewriteOnTranspose;
- (BOOL)shouldRewriteOnCellMerge;
- (BOOL)shouldRewriteOnTectonicShift;
- (BOOL)shouldRewriteOnRangeMove;
- (BOOL)shouldRewriteOnSort;
- (void)setOwnerUID:(const UUIDData_5fbc143e )arg1;
- (UUIDData_5fbc143e)ownerUID;
- (void)updateForSortRules:(id)arg1;
- (id)p_ruleReferenceForTrackedReference:(id)arg1;
- (unsigned short)p_columnForTrackedReference:(id)arg1;
- (struct TSCESpanningRangeRef)p_referenceForColumnIndex:(unsigned short)arg1;
- (void)unregisterFromCalcEngine;
- (void)registerWithCalcEngine:(id)arg1;
- (id)initWithTableInfo:(id)arg1 context:(id)arg2;

@end
