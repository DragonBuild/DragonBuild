//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray;

@interface PPContactNameRecordChangeResult : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _changesTruncated;
    NSArray *_changes;
}

+ (BOOL)supportsSecureCoding;
+ (id)contactNameRecordChangeResultWithChanges:(id)arg1 changesTruncated:(BOOL)arg2;
@property(readonly, nonatomic) BOOL changesTruncated; // @synthesize changesTruncated=_changesTruncated;
@property(readonly, nonatomic) NSArray *changes; // @synthesize changes=_changes;
// - (void).cxx_destruct;
- (BOOL)isEqualToContactNameRecordChangeResult:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)initWithChanges:(id)arg1 changesTruncated:(BOOL)arg2;

@end
