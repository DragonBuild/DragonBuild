//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class TSCH3DGLContext, TSCH3DSession;

@protocol TSCH3DGLBindable <NSObject>
- (void)deactivateInContext:(TSCH3DGLContext *)arg1;
- (void)destroyResourcesInContext:(TSCH3DGLContext *)arg1;
- (BOOL)valid;
- (void)bindInSession:(TSCH3DSession *)arg1;
@end
