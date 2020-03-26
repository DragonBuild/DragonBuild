//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDLinksCollection : NSObject
{
    NSMutableArray *mLinks;
    NSMutableArray *mReferences;
}

// - (void).cxx_destruct;
- (id)description;
- (void)addOrEquivalentExternalAddInName:(id)arg1 linkReferenceIndex:(NSUInteger )arg2 nameIndex:(NSUInteger )arg3;
- (NSUInteger)addOrEquivalentLinkReferenceOfType:(int)arg1 firstSheetIndex:(NSUInteger)arg2 lastSheetIndex:(NSUInteger)arg3;
- (NSUInteger)addOrEquivalentInternalLinkReferenceWithFirstSheetIndex:(NSUInteger)arg1 lastSheetIndex:(NSUInteger)arg2;
- (BOOL)convertLinkReferenceIndex:(NSUInteger)arg1 firstSheetIndex:(NSUInteger )arg2 lastSheetIndex:(NSUInteger )arg3;
- (NSUInteger)addReference:(id)arg1;
- (NSUInteger)indexOfReference:(id)arg1;
- (id)referenceAtIndex:(NSUInteger)arg1;
- (NSUInteger)referencesCount;
- (NSUInteger)linkIndexCreateIfNeededWithType:(int)arg1;
- (NSUInteger)addLink:(id)arg1;
- (NSUInteger)indexOfFirstLinkWithType:(int)arg1;
- (id)linkAtIndex:(NSUInteger)arg1;
- (NSUInteger)linksCount;
- (id)init;

@end
