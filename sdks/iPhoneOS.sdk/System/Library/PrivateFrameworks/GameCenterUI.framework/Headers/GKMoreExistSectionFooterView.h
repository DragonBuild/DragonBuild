//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class GKLabel, NSString;

@interface GKMoreExistSectionFooterView : UICollectionReusableView
{
    GKLabel *_label;
}

+ (double)defaultHeight;
+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) GKLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *text;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end
