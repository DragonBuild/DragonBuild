//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, NSString, SUScriptURLRequest;

@interface SUScriptProtocol : SUScriptObject
{
}

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (id)_webThreadValueForProtocolKey:(id)arg1;
- (void)_setValue:(id)arg1 forProtocolKey:(id)arg2;
- (void)_setProtocol:(id)arg1;
- (id)_copyProtocol;
@property BOOL shouldShowInOverlay;
@property(retain) SUScriptURLRequest *overlayBackgroundURLRequest;
@property BOOL excludeFromNavigationHistory;
@property(retain) NSString *copyright;
@property(retain) NSArray *allowedOrientations;
@property(readonly) NSString *protocolVersion;
@property(readonly) NSString *clientIdentifier;
- (id)_className;
- (void)setValuesFromDictionary:(id)arg1;

@end
