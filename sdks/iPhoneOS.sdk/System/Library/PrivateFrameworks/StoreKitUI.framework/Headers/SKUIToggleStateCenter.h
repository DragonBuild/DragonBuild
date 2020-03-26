//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SKUIToggleStateCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_itemStates;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
}

+ (id)defaultCenter;
// - (void).cxx_destruct;
- (void)_notifyObserversOfStateChanges:(id)arg1;
- (void)_accountStoreChangeNotification:(id)arg1;
- (BOOL)updateItem:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)itemForIdentifier:(id)arg1;
- (void)clearAll;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end
