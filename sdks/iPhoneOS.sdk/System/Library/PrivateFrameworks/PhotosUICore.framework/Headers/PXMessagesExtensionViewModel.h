//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXMutableMessagesExtensionViewModel-Protocol.h>

@class NSArray, NSDate, NSString, NSURL, UIViewController;
@protocol PXCMMSuggestion;

@interface PXMessagesExtensionViewModel : PXObservable <PXMutableMessagesExtensionViewModel>
{
    BOOL _drawerActive;
    id <PXCMMSuggestion> _selectedSuggestion;
    NSURL *_selectedURL;
    NSUInteger _selectedActivityType;
    NSString *_selectedMessageText;
    NSDate *_selectedMessageDate;
    UIViewController *_presentedViewController;
    NSArray *_recipients;
}

+ (id)sharedRootViewModel;
@property(readonly, nonatomic, getter=isDrawerActive) BOOL drawerActive; // @synthesize drawerActive=_drawerActive;
@property(readonly, copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(readonly, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(readonly, nonatomic) NSDate *selectedMessageDate; // @synthesize selectedMessageDate=_selectedMessageDate;
@property(readonly, copy, nonatomic) NSString *selectedMessageText; // @synthesize selectedMessageText=_selectedMessageText;
@property(readonly, nonatomic) NSUInteger selectedActivityType; // @synthesize selectedActivityType=_selectedActivityType;
@property(readonly, nonatomic) NSURL *selectedURL; // @synthesize selectedURL=_selectedURL;
@property(readonly, nonatomic) id <PXCMMSuggestion> selectedSuggestion; // @synthesize selectedSuggestion=_selectedSuggestion;
// - (void).cxx_destruct;
- (void)clearSelection;
- (void)performChanges:(id /* CDUnknownBlockType */)arg1;
- (id)mutableChangeObject;

@end
