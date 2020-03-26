//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDCollection : NSObject <NSCopying>
{
    NSMutableArray *mObjects;
}

+ (id)collectionWithObject:(id)arg1;
+ (id)collection;
// - (void).cxx_destruct;
- (id)description;
- (void)replaceObjectAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (NSUInteger)indexOfObject:(id)arg1;
- (NSUInteger)addOrEquivalentObject:(id)arg1;
- (NSUInteger)addObject:(id)arg1;
- (id)objectAtIndex:(NSUInteger)arg1;
- (NSUInteger)count;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCollection:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithObject:(id)arg1;
- (id)init;

@end
