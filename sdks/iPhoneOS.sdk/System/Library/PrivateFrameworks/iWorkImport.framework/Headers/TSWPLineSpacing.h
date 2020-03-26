//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSSPropertyValueArchiving-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSWPLineSpacing : NSObject <TSSPropertyValueArchiving, NSCopying>
{
    int _mode;
    double _amount;
    double _baselineRule;
}

+ (id)instanceWithArchive:(const struct Message )arg1 unarchiver:(id)arg2;
+ (id)lineSpacing;
@property(readonly, nonatomic) double baselineRule; // @synthesize baselineRule=_baselineRule;
@property(readonly, nonatomic) double amount; // @synthesize amount=_amount;
@property(readonly, nonatomic) int mode; // @synthesize mode=_mode;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)saveToArchive:(struct LineSpacingArchive )arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct LineSpacingArchive )arg1 unarchiver:(id)arg2;
- (id)initWithMode:(int)arg1 amount:(double)arg2;
- (id)initWithMode:(int)arg1 amount:(double)arg2 baselineRule:(double)arg3;
- (id)init;

@end
