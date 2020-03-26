//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, VKResourceManager;

@interface VKImage : NSObject
{
    CGImage _imageRef;
    NSData *_data;
    NSString *_name;
    struct Texture2D _gglTexture;
    struct shared_ptr<md::TextureAtlasRegion> _textureAtlasRegion;
    Box_8bd38d92 _textureCoordinates;
    CGRect _collisionRect;
    CGPoint _anchorPoint;
    CGSize _size;
    double _scale;
    BOOL _hasCollisionRect;
    BOOL _hasAnchorPoint;
    BOOL _usedAsTextureAndImage;
    struct atomic<bool> _isTextureReady;
    struct atomic<bool> _isImageReady;
    VKResourceManager *_resourceManager;
    unsigned char _imageHash[16];
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (int)compareTo:(id)arg1;
- (void)setCollisionRect:(CGRect)arg1;
- (void)setAnchorPoint:(CGPoint)arg1;
- (CGRect)collisionRect;
- (CGPoint)anchorPoint;
- (double)scale;
- (CGSize)size;
- (void)_prepareImage;
- (CGImage )image;
- (void)_prepareTextureWithAtlas:(struct TextureAtlas )arg1;
- (void)prepareTextureWithAtlas:(struct TextureAtlas )arg1;
- (const Box_8bd38d92 )textureCoordinates;
- (struct Texture2D )gglTexture;
- (void)dealloc;
- (id)initWithName:(id)arg1 scale:(double)arg2 resourceManager:(id)arg3;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (id)initWithData:(id)arg1 scale:(double)arg2 usedAsTextureAndImage:(BOOL)arg3;
- (id)initWithCGImage:(CGImage )arg1 scale:(double)arg2;
- (id)initWithCGImage:(CGImage )arg1 scale:(double)arg2 usedAsTextureAndImage:(BOOL)arg3;

@end
