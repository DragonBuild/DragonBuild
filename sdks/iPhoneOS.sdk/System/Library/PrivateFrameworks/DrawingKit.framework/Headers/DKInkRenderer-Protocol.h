//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIColor, UIImage;
@protocol DKInkRendererDelegate;

@protocol DKInkRenderer <NSObject>
@property(readonly, nonatomic) NSUInteger maximumPointsForBleedAnimation;
@property(readonly, nonatomic) BOOL initialized;
@property(readonly, nonatomic) BOOL supportsBleedAnimation;
@property(nonatomic) BOOL drawingEnabled;
@property(nonatomic) NSUInteger mode;
@property(nonatomic) double drawingScale;
@property(nonatomic) BOOL scaleDrawingToFitCanvas;
@property(nonatomic) __weak id <DKInkRendererDelegate> delegate;
@property(retain, nonatomic) UIColor *inkColor;
- (UIImage *)snapshot;
- (void)teardown;
- (void)completeAnimationsImmediately;
- (void)resetRendererState;
- (void)clear;
- (void)flush;
- (void)force;
- (void)display;
- (void)removeLastStroke;
- (void)endStroke;
- (void)addPoint:(CDStruct_09aaf5d3)arg1;
- (void)beginStroke;
@end
