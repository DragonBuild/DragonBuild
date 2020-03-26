//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFTrigger.h>

@class NSArray, NSString;

@interface WFEmailTrigger : WFTrigger
{
    NSString *_selectedAccount;
    NSString *_selectedSubject;
    NSArray *_selectedRecipients;
    NSArray *_selectedSenders;
    NSUInteger _attachmentConfiguration;
}

+ (BOOL)supportsSecureCoding;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
@property(nonatomic) NSUInteger attachmentConfiguration; // @synthesize attachmentConfiguration=_attachmentConfiguration;
@property(retain, nonatomic) NSArray *selectedSenders; // @synthesize selectedSenders=_selectedSenders;
@property(retain, nonatomic) NSArray *selectedRecipients; // @synthesize selectedRecipients=_selectedRecipients;
@property(retain, nonatomic) NSString *selectedSubject; // @synthesize selectedSubject=_selectedSubject;
@property(retain, nonatomic) NSString *selectedAccount; // @synthesize selectedAccount=_selectedAccount;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)localizedPastTenseDescription;
- (id)localizedDescriptionWithConfigurationSummary;
- (BOOL)hasValidConfiguration;

@end
