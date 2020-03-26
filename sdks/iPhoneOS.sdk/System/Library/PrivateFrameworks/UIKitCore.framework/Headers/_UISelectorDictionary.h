//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSMapTable, _UISelectorSet;

__attribute__((visibility("hidden")))
@interface _UISelectorDictionary : NSObject <NSCopying>
{
    NSMapTable *_map;
}

// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)enumerateSelectorsAndObjectsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)removeObjectsForSelectors:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)removeObjectForSelector:(SEL)arg1;
- (void)setObject:(id)arg1 forSelector:(SEL)arg2;
- (id)objectForSelector:(SEL)arg1;
@property(readonly, nonatomic) NSArray *allObjects;
@property(readonly, nonatomic) _UISelectorSet *allSelectors;
@property(readonly, nonatomic) NSUInteger count;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithMapping:(id /* CDUnknownBlockType */)arg1 objects:(id)arg2;
- (id)init;
- (id)initWithMap:(id)arg1;

@end
