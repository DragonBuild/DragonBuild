//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UIStackView, VSFontCenter;
@protocol VSTableHeaderFooterViewDelegate;

__attribute__((visibility("hidden")))
@interface VSTableHeaderFooterView : UIView
{
    long long _kind;
    id <VSTableHeaderFooterViewDelegate> _delegate;
    UIView *_button;
    UILabel *_textLabel;
    UIStackView *_stackView;
    VSFontCenter *_fontCenter;
}

@property(retain, nonatomic) VSFontCenter *fontCenter; // @synthesize fontCenter=_fontCenter;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIView *button; // @synthesize button=_button;
@property(nonatomic) __weak id <VSTableHeaderFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long kind; // @synthesize kind=_kind;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)invalidateIntrinsicContentSize;
- (void)setFrame:(CGRect)arg1;
- (void)setBounds:(CGRect)arg1;
- (CGSize)intrinsicContentSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)layoutMarginsDidChange;
- (void)_didInvalidateIntrinsicContentSize;
- (void)setText:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
