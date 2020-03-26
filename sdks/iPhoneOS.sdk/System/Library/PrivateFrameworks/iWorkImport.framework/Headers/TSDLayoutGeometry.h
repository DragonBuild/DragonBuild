//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class TSDInfoGeometry;

__attribute__((visibility("hidden")))
@interface TSDLayoutGeometry : NSObject <NSCopying, NSMutableCopying>
{
    CGSize _size;
    CGAffineTransform _transform;
}

+ (id)geometryFromFullTransform:(CGAffineTransform)arg1;
@property(readonly, nonatomic) CGAffineTransform transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) CGSize size; // @synthesize size=_size;
- (BOOL)differsInMoreThanTranslationFrom:(id)arg1;
- (CGAffineTransform)transformByConcatenatingTransformTo:(CGAffineTransform)arg1;
- (id)geometryByOutsettingBy:(CGSize)arg1;
- (id)geometryByTranslatingBy:(CGPoint)arg1;
- (id)geometryByTransformingBy:(CGAffineTransform)arg1;
@property(readonly, nonatomic) TSDInfoGeometry *infoGeometry;
@property(readonly, nonatomic) CGAffineTransform fullTransform;
@property(readonly, nonatomic) CGAffineTransform inverseTransform;
@property(readonly, nonatomic) CGRect frame;
@property(readonly, nonatomic) CGPoint center;
- (void)i_setTransform:(CGAffineTransform)arg1;
- (void)i_setSize:(CGSize)arg1;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithInfoGeometry:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (id)initWithSize:(CGSize)arg1 transform:(CGAffineTransform)arg2;

@end
