//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKMediaObject.h>

@class PKPass, UIImage;

@interface CKPassbookMediaObject : CKMediaObject
{
    PKPass *_pass;
    UIImage *_icon;
}

+ (id)attachmentSummary:(NSUInteger)arg1;
+ (id)fallbackFilenamePrefix;
+ (id)UTITypes;
+ (BOOL)isPreviewable;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
// - (void).cxx_destruct;
- (int)mediaType;
- (id)passView;
- (BOOL)shouldShowDisclosure;
- (BOOL)shouldBeQuickLooked;
- (BOOL)shouldShowViewer;
- (id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)subtitle;
- (id)title;
- (Class)balloonViewClassForWidth:(double)arg1 orientation:(BOOL)arg2;
- (BOOL)_supportsPassbook;
- (id)initWithTransfer:(id)arg1 isFromMe:(BOOL)arg2 suppressPreview:(BOOL)arg3 forceInlinePreview:(BOOL)arg4;

@end
