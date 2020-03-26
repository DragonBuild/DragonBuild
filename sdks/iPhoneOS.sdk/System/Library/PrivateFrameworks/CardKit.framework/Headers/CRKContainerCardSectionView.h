//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CardKit/CRKCardSectionView-Protocol.h>

@class NSString;
@protocol CRKComposableView;

@interface CRKContainerCardSectionView : UIView <CRKCardSectionView>
{
    UIView *_userInputEventInterceptView;
    UIView<CRKComposableView> *_composedSuperview;
    NSString *_cardSectionViewIdentifier;
    UIView *_contentView;
    CGSize _contentSize;
}

+ (CGSize)sizeThatFitsCardSection:(id)arg1 boundingSize:(CGSize)arg2;
@property(nonatomic) CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *cardSectionViewIdentifier; // @synthesize cardSectionViewIdentifier=_cardSectionViewIdentifier;
@property(nonatomic) __weak UIView<CRKComposableView> *composedSuperview; // @synthesize composedSuperview=_composedSuperview;
// - (void).cxx_destruct;
@property(nonatomic) BOOL interceptsTouches;
- (void)removeFromComposedSuperview;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end
