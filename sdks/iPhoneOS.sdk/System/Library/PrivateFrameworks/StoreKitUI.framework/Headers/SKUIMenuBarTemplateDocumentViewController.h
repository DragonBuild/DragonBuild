//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>
#import <StoreKitUI/SKUIHorizontalScrollingContainerViewControllerDelegate-Protocol.h>
#import <StoreKitUI/SKUIMenuBarViewElementConfigurationDelegate-Protocol.h>
#import <StoreKitUI/SKUINavigationBarControllerProviding-Protocol.h>
#import <StoreKitUI/SKUIScrollingSegmentedControllerDelegate-Protocol.h>
#import <StoreKitUI/SKUIScrollingTabAppearanceStatusObserver-Protocol.h>
#import <StoreKitUI/SKUIScrollingTabNestedPagedScrolling-Protocol.h>

@class NSMutableDictionary, SKUIDynamicPageSectionIndexMapper, SKUIHorizontalScrollingContainerViewController, SKUILoadingDocumentViewController, SKUIMenuBarSectionsViewController, SKUIMenuBarTemplateDocumentViewControllerEmbeddedPaletteHost, SKUIMenuBarTemplateElement, SKUIMenuBarViewElementConfiguration, SKUIMenuItemViewElement, SKUIScrollingSegmentedController, SKUIViewElement, UIScrollView, UIView;
@protocol SKUIMenuBarViewElement;

__attribute__((visibility("hidden")))
@interface SKUIMenuBarTemplateDocumentViewController : SKUIViewController <SKUIHorizontalScrollingContainerViewControllerDelegate, SKUIMenuBarViewElementConfigurationDelegate, SKUIScrollingSegmentedControllerDelegate, SKUIScrollingTabAppearanceStatusObserver, SKUIScrollingTabNestedPagedScrolling, SKUINavigationBarControllerProviding, SKUIDocumentViewController>
{
    SKUIMenuBarTemplateDocumentViewControllerEmbeddedPaletteHost *_embeddedPaletteHost;
    SKUIDynamicPageSectionIndexMapper *_dynamicPageSectionIndexMapper;
    NSMutableDictionary *_entityUniqueIdentifierToEntityIndex;
    SKUIHorizontalScrollingContainerViewController *_horizontalScrollingContainerViewController;
    SKUILoadingDocumentViewController *_loadingDocumentViewController;
    SKUIMenuBarSectionsViewController *_menuBarSectionsViewController;
    long long _menuBarStyle;
    SKUIViewElement<SKUIMenuBarViewElement> *_menuBarViewElement;
    SKUIMenuBarViewElementConfiguration *_menuBarViewElementConfiguration;
    SKUIMenuItemViewElement *_pendingSelectedMenuItemViewElement;
    SKUIScrollingSegmentedController *_scrollingSegmentedController;
    CDStruct_19149c72 _scrollingTabAppearanceStatus;
    SKUIMenuBarTemplateElement *_templateElement;
}

// - (void).cxx_destruct;
- (id)_zoomingShelfPageSplitsDescription;
- (void)_willDisplayViewControllerAtIndex:(NSUInteger)arg1;
- (BOOL)_isFirstViewControllerOnNavigationStack;
- (void)_replaceViewControllerAtIndex:(NSUInteger)arg1 withViewController:(id)arg2;
- (void)_removeContentViewController:(id)arg1;
- (void)_reloadContentViewController;
- (void)_recordEntityUniqueIdentifier:(id)arg1 forEntityIndex:(NSUInteger)arg2;
- (id)_newChildViewControllerForEntityAtIndex:(NSUInteger)arg1;
- (NSUInteger)_menuItemIndexForEntityIndex:(NSUInteger)arg1 entityValueProvider:(out id )arg2;
- (id)_dynamicPageSectionIndexMapper;
- (id)_contentViewController;
- (id)_colorScheme;
- (id)_childViewControllersForMenuItems;
- (void)_addContentViewController:(id)arg1;
@property(readonly, nonatomic) double titleViewHeight;
@property(readonly, nonatomic) UIView *titleView;
- (id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) UIScrollView *scrollingTabNestedPagingScrollView;
- (void)scrollingTabAppearanceStatusWasUpdated:(CDStruct_19149c72)arg1;
- (void)scrollingSegmentedController:(id)arg1 willDisplayViewControllerAtIndex:(NSUInteger)arg2;
- (id)navigationBarControllerWithViewElement:(id)arg1;
- (void)menuBarViewElementConfiguration:(id)arg1 selectMenuItemViewElement:(id)arg2 animated:(BOOL)arg3;
- (void)menuBarViewElementConfiguration:(id)arg1 didReplaceDocumentForMenuItemAtIndex:(NSUInteger)arg2;
- (void)menuBarViewElementConfiguration:(id)arg1 didReplaceDocumentForEntityUniqueIdentifier:(id)arg2;
- (void)horizontalScrollingContainerViewController:(id)arg1 willDisplayViewControllerAtIndex:(NSUInteger)arg2;
- (id)navigationPaletteView;
- (void)documentMediaQueriesDidUpdate:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setClientContext:(id)arg1;
- (id)contentScrollView;
- (void)viewDidLoad;
- (void)setPreferredContentSize:(CGSize)arg1;
- (void)dealloc;
- (id)initWithTemplateElement:(id)arg1;

@end
