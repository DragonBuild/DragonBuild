//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ICTableAttachmentSelection : NSObject
{
    BOOL _moving;
    BOOL _draggingText;
    NSUInteger _type;
    NSArray *_columns;
    NSArray *_rows;
}

@property(nonatomic) BOOL draggingText; // @synthesize draggingText=_draggingText;
@property(nonatomic) BOOL moving; // @synthesize moving=_moving;
@property(copy, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(copy, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property(nonatomic) NSUInteger type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (BOOL)removeColumns:(id)arg1 rows:(id)arg2;
- (BOOL)removeColumns:(id)arg1 rows:(id)arg2 previousColumns:(id)arg3 previousRows:(id)arg4;
- (void)setSelectionEqualTo:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (void)selectCellRangeAtColumns:(id)arg1 rows:(id)arg2;
- (void)selectRows:(id)arg1;
- (void)selectColumns:(id)arg1;
- (void)selectCellAtColumn:(id)arg1 row:(id)arg2;
- (void)unselect;
@property(readonly, nonatomic) BOOL valid;
@property(readonly, nonatomic) BOOL isRangeOrSpanningSelection;
- (id)init;

@end
