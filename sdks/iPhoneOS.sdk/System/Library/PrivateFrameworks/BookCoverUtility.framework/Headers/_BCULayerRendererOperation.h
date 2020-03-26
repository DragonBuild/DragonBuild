//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookCoverUtility/BCUOperation-Protocol.h>

@class BCULayerRenderer, CALayer;
@protocol BCUPurgeableImage;

@interface _BCULayerRendererOperation : NSObject <BCUOperation>
{
    _Atomic long long _operationId;
    unsigned int _cancelled:1;
    unsigned int _configuring:1;
    BOOL _waitForCPUSynchronization;
    float _priority;
    BCULayerRenderer *_renderer;
    id /* CDUnknownBlockType */ _layerBlock;
    id /* CDUnknownBlockType */ _completion;
    CALayer *_layer;
    id <BCUPurgeableImage> _result;
}

@property(readonly, nonatomic) BOOL waitForCPUSynchronization; // @synthesize waitForCPUSynchronization=_waitForCPUSynchronization;
@property(retain, nonatomic) id <BCUPurgeableImage> result; // @synthesize result=_result;
@property(retain, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
@property(copy, nonatomic) id /* CDUnknownBlockType */ layerBlock; // @synthesize layerBlock=_layerBlock;
@property(retain, nonatomic) BCULayerRenderer *renderer; // @synthesize renderer=_renderer;
// - (void).cxx_destruct;
- (long long)_compareHoldingStateLock:(id)arg1;
- (void)dealloc;
- (void)completeWithImage:(id)arg1;
- (void)cancel;
- (id)configureLayer;
- (void)start;
@property(nonatomic) float priority; // @synthesize priority=_priority;
- (id)initWithRenderer:(id)arg1 priority:(float)arg2 waitForCPUSynchronization:(BOOL)arg3 layerBlock:(id /* CDUnknownBlockType */)arg4 completion:(id /* CDUnknownBlockType */)arg5;

@end
