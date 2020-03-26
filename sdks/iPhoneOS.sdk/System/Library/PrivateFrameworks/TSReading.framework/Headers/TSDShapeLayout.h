//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDStyledLayout.h>

@class TSDBezierPath, TSDEditableBezierPathSource, TSDFill, TSDInfoGeometry, TSDMutableStroke, TSDPathSource;

@interface TSDShapeLayout : TSDStyledLayout
{
    struct {
        unsigned int path:1;
        unsigned int pathBounds:1;
        unsigned int pathBoundsWithoutStroke:1;
        unsigned int pathIsOpen:1;
        unsigned int pathIsLineSegment:1;
        unsigned int alignmentFrame:1;
        unsigned int headAndTail:1;
        unsigned int headLineEnd:1;
        unsigned int tailLineEnd:1;
        unsigned int clippedPath:1;
    } mShapeInvalidFlags;
    TSDBezierPath *mCachedPath;
    CGRect mCachedPathBounds;
    CGRect mCachedPathBoundsWithoutStroke;
    BOOL mCachedPathIsOpen;
    BOOL mCachedPathIsLineSegment;
    CGRect mCachedAlignmentFrame;
    CGPoint mHeadPoint;
    CGPoint mTailPoint;
    CGPoint mHeadLineEndPoint;
    CGPoint mTailLineEndPoint;
    double mHeadLineEndAngle;
    double mTailLineEndAngle;
    long long mHeadCutSegment;
    long long mTailCutSegment;
    double mHeadCutT;
    double mTailCutT;
    TSDBezierPath *mCachedClippedPath;
    TSDPathSource *mShrunkenPathSource;
    TSDEditableBezierPathSource *mCachedEditableBezierPathSource;
    TSDPathSource *mCachedPathSource;
    TSDPathSource *mResizePathSource;
    TSDInfoGeometry *mResizeInfoGeometry;
    TSDInfoGeometry *mInitialInfoGeometry;
    TSDPathSource *mProvidedPathSource;
    TSDMutableStroke *mDynamicStroke;
    TSDFill *mDynamicFill;
}

@property(retain, nonatomic) TSDFill *dynamicFill; // @synthesize dynamicFill=mDynamicFill;
- (void)p_updateResizeInfoGeometryFromResizePathSource;
- (id)p_unitePath:(id)arg1 withLineEndForHead:(BOOL)arg2 stroke:(id)arg3;
- (CGRect)p_boundsOfLineEndForHead:(BOOL)arg1 transform:(CGAffineTransform)arg2;
- (id)p_createClippedPath;
- (void)p_computeAngle:(double )arg1 point:(CGPoint )arg2 cutSegment:(long long )arg3 cutT:(double )arg4 forLineEndAtHead:(BOOL)arg5;
- (void)p_validateTailLineEnd;
- (void)p_validateHeadLineEnd;
- (void)p_validateHeadAndTail;
- (void)p_invalidateClippedPath;
- (void)p_invalidateTail;
- (void)p_invalidateHead;
- (BOOL)p_cachedPathIsLineSegment;
- (BOOL)p_cachedPathIsOpen;
- (CGRect)p_cachedPathBoundsWithoutStroke;
- (CGRect)p_cachedPathBounds;
- (id)p_cachedPath;
- (id)i_computeWrapPathClosed:(BOOL)arg1;
- (id)i_computeWrapPath;
- (CGPoint)getControlKnobPosition:(NSUInteger)arg1;
- (void)setControlKnobPosition:(NSUInteger)arg1 toPoint:(CGPoint)arg2;
- (NSUInteger)numberOfControlKnobs;
- (id)strokeTailLineEnd;
- (id)strokeHeadLineEnd;
- (CGPoint)unclippedTailPoint;
- (CGPoint)unclippedHeadPoint;
- (BOOL)isBeingManipulated;
- (BOOL)supportsRotation;
- (id)initialInfoGeometry;
- (CGSize)minimumSize;
- (void)endDynamicOperation;
- (void)beginDynamicOperation;
- (BOOL)supportsResize;
- (void)invalidatePathBounds;
- (void)invalidatePath;
- (void)invalidateFrame;
- (BOOL)canResetTextAndObjectHandles;
- (BOOL)canBeIntersected;
@property(readonly, nonatomic) TSDFill *fill;
- (void)aliasPathForScale:(double)arg1 originalStroke:(id)arg2 adjustedStroke:(id )arg3 adjustedPath:(id )arg4 startDelta:(CGPoint )arg5 endDelta:(CGPoint )arg6;
- (void)aliasPathForScale:(double)arg1 adjustedStroke:(id )arg2 adjustedPath:(id )arg3 startDelta:(CGPoint )arg4 endDelta:(CGPoint )arg5;
- (CGRect)aliasedAlignmentFrameForScale:(double)arg1;
- (CGPoint)centerForConnecting;
- (BOOL)isInvisibleAutosizingShape;
- (BOOL)shouldBeDisplayedInShowMode;
- (BOOL)isInvisible;
- (CGRect)shapeFrameWithTransform:(CGAffineTransform)arg1;
- (id)clippedPathForLineEnds;
- (double)lineEndScale;
- (BOOL)isTailEndOnLeft;
- (double)tailLineEndAngle;
- (double)headLineEndAngle;
- (CGPoint)tailLineEndPoint;
- (CGPoint)headLineEndPoint;
- (CGPoint)tailPoint;
- (CGPoint)headPoint;
- (id)layoutInfoGeometry;
- (BOOL)pathIsLineSegment;
- (BOOL)pathIsOpen;
- (id)smartPathSource;
- (CGRect)pathBoundsWithoutStroke;
- (CGRect)pathBounds;
- (id)path;
- (id)editablePathSource;
- (id)pathSource;
- (id)shapeInfo;
- (BOOL)isStrokeBeingManipulated;
- (void)dynamicStrokeWidthChangeDidEnd;
- (void)dynamicStrokeWidthUpdateToValue:(double)arg1;
- (void)dynamicStrokeWidthChangeDidBegin;
- (id)stroke;
- (CGRect)boundsForStandardKnobs;
- (void)processChangedProperty:(int)arg1;
- (CGRect)alignmentFrameInRoot;
- (CGRect)alignmentFrame;
- (void)setGeometry:(id)arg1;
- (CGAffineTransform)computeLayoutTransform;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

@end
