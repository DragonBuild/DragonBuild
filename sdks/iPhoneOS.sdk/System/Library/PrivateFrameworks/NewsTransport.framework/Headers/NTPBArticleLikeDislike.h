//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSMutableArray, NSString, NTPBChannelData, NTPBIssueData, NTPBIssueExposureData, NTPBWidgetEngagement;

@interface NTPBArticleLikeDislike : PBCodable <NSCopying>
{
    long long _backendArticleVersionInt64;
    long long _personalizationTreatmentId;
    long long _previousArticlePublisherArticleVersion;
    long long _publisherArticleVersionInt64;
    NSString *_articleId;
    NSData *_articleSessionId;
    int _articleType;
    NSData *_articleViewingSessionId;
    int _backendArticleVersion;
    NSString *_campaignId;
    NSString *_campaignType;
    NTPBChannelData *_channelData;
    int _characterCount;
    int _contentType;
    NSString *_creativeId;
    NSString *_feedId;
    int _feedType;
    NSData *_feedViewExposureId;
    NSMutableArray *_fractionalCohortMemberships;
    NSString *_groupFeedId;
    int _groupType;
    NSData *_groupViewExposureId;
    NSString *_iadNativeAd;
    NSString *_iadNativeCampaign;
    NSString *_iadNativeCampaignAd;
    NSString *_iadNativeLine;
    NTPBIssueData *_issueData;
    NTPBIssueExposureData *_issueExposureData;
    NSString *_language;
    int _likeDislikeLocation;
    NSMutableArray *_namedEntities;
    NSString *_nativeCampaignData;
    int _nextArticleAffordanceType;
    NSString *_nextArticleAffordanceTypeFeedId;
    NSString *_previousArticleId;
    NSString *_previousArticleVersion;
    int _publisherArticleVersion;
    NSString *_referencedArticleId;
    NSString *_sectionHeadlineId;
    NSString *_sourceChannelId;
    NSString *_surfacedByChannelId;
    NSString *_surfacedBySectionId;
    NSString *_surfacedByTopicId;
    int _topStoryType;
    int _userAction;
    NTPBWidgetEngagement *_widgetEngagement;
    BOOL _fromNextArticleAffordanceTap;
    BOOL _isBreakingNewsArticle;
    BOOL _isCoverArticle;
    BOOL _isDigitalReplicaAd;
    BOOL _isFreeArticle;
    BOOL _isGroupedArticle;
    BOOL _isNativeAd;
    BOOL _isPaidSubscriberToSourceChannel;
    BOOL _isSearchResultArticle;
    BOOL _isTopStoryArticle;
    BOOL _isUserSubscribedToFeed;
    struct {
        unsigned int backendArticleVersionInt64:1;
        unsigned int personalizationTreatmentId:1;
        unsigned int previousArticlePublisherArticleVersion:1;
        unsigned int publisherArticleVersionInt64:1;
        unsigned int articleType:1;
        unsigned int backendArticleVersion:1;
        unsigned int characterCount:1;
        unsigned int contentType:1;
        unsigned int feedType:1;
        unsigned int groupType:1;
        unsigned int likeDislikeLocation:1;
        unsigned int nextArticleAffordanceType:1;
        unsigned int publisherArticleVersion:1;
        unsigned int topStoryType:1;
        unsigned int userAction:1;
        unsigned int fromNextArticleAffordanceTap:1;
        unsigned int isBreakingNewsArticle:1;
        unsigned int isCoverArticle:1;
        unsigned int isDigitalReplicaAd:1;
        unsigned int isFreeArticle:1;
        unsigned int isGroupedArticle:1;
        unsigned int isNativeAd:1;
        unsigned int isPaidSubscriberToSourceChannel:1;
        unsigned int isSearchResultArticle:1;
        unsigned int isTopStoryArticle:1;
        unsigned int isUserSubscribedToFeed:1;
    } _has;
}

+ (Class)fractionalCohortMembershipType;
+ (Class)namedEntitiesType;
@property(retain, nonatomic) NTPBChannelData *channelData; // @synthesize channelData=_channelData;
@property(retain, nonatomic) NTPBIssueExposureData *issueExposureData; // @synthesize issueExposureData=_issueExposureData;
@property(retain, nonatomic) NTPBIssueData *issueData; // @synthesize issueData=_issueData;
@property(retain, nonatomic) NSData *groupViewExposureId; // @synthesize groupViewExposureId=_groupViewExposureId;
@property(retain, nonatomic) NSString *iadNativeCampaignAd; // @synthesize iadNativeCampaignAd=_iadNativeCampaignAd;
@property(nonatomic) long long previousArticlePublisherArticleVersion; // @synthesize previousArticlePublisherArticleVersion=_previousArticlePublisherArticleVersion;
@property(retain, nonatomic) NSString *iadNativeAd; // @synthesize iadNativeAd=_iadNativeAd;
@property(retain, nonatomic) NSString *iadNativeLine; // @synthesize iadNativeLine=_iadNativeLine;
@property(retain, nonatomic) NSString *iadNativeCampaign; // @synthesize iadNativeCampaign=_iadNativeCampaign;
@property(nonatomic) long long backendArticleVersionInt64; // @synthesize backendArticleVersionInt64=_backendArticleVersionInt64;
@property(nonatomic) long long publisherArticleVersionInt64; // @synthesize publisherArticleVersionInt64=_publisherArticleVersionInt64;
@property(retain, nonatomic) NSMutableArray *fractionalCohortMemberships; // @synthesize fractionalCohortMemberships=_fractionalCohortMemberships;
@property(retain, nonatomic) NTPBWidgetEngagement *widgetEngagement; // @synthesize widgetEngagement=_widgetEngagement;
@property(retain, nonatomic) NSString *previousArticleVersion; // @synthesize previousArticleVersion=_previousArticleVersion;
@property(retain, nonatomic) NSString *previousArticleId; // @synthesize previousArticleId=_previousArticleId;
@property(retain, nonatomic) NSString *nativeCampaignData; // @synthesize nativeCampaignData=_nativeCampaignData;
@property(nonatomic) BOOL isNativeAd; // @synthesize isNativeAd=_isNativeAd;
@property(nonatomic) BOOL isSearchResultArticle; // @synthesize isSearchResultArticle=_isSearchResultArticle;
@property(nonatomic) BOOL isTopStoryArticle; // @synthesize isTopStoryArticle=_isTopStoryArticle;
@property(nonatomic) BOOL isBreakingNewsArticle; // @synthesize isBreakingNewsArticle=_isBreakingNewsArticle;
@property(retain, nonatomic) NSString *nextArticleAffordanceTypeFeedId; // @synthesize nextArticleAffordanceTypeFeedId=_nextArticleAffordanceTypeFeedId;
@property(nonatomic) BOOL fromNextArticleAffordanceTap; // @synthesize fromNextArticleAffordanceTap=_fromNextArticleAffordanceTap;
@property(nonatomic) BOOL isCoverArticle; // @synthesize isCoverArticle=_isCoverArticle;
@property(retain, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(retain, nonatomic) NSString *campaignType; // @synthesize campaignType=_campaignType;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(nonatomic) BOOL isFreeArticle; // @synthesize isFreeArticle=_isFreeArticle;
@property(nonatomic) BOOL isPaidSubscriberToSourceChannel; // @synthesize isPaidSubscriberToSourceChannel=_isPaidSubscriberToSourceChannel;
@property(retain, nonatomic) NSString *groupFeedId; // @synthesize groupFeedId=_groupFeedId;
@property(nonatomic) BOOL isGroupedArticle; // @synthesize isGroupedArticle=_isGroupedArticle;
@property(nonatomic) long long personalizationTreatmentId; // @synthesize personalizationTreatmentId=_personalizationTreatmentId;
@property(nonatomic) BOOL isDigitalReplicaAd; // @synthesize isDigitalReplicaAd=_isDigitalReplicaAd;
@property(retain, nonatomic) NSString *sectionHeadlineId; // @synthesize sectionHeadlineId=_sectionHeadlineId;
@property(retain, nonatomic) NSString *surfacedByTopicId; // @synthesize surfacedByTopicId=_surfacedByTopicId;
@property(retain, nonatomic) NSString *surfacedBySectionId; // @synthesize surfacedBySectionId=_surfacedBySectionId;
@property(retain, nonatomic) NSString *surfacedByChannelId; // @synthesize surfacedByChannelId=_surfacedByChannelId;
@property(nonatomic) int backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property(nonatomic) int publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) int characterCount; // @synthesize characterCount=_characterCount;
@property(retain, nonatomic) NSMutableArray *namedEntities; // @synthesize namedEntities=_namedEntities;
@property(nonatomic) BOOL isUserSubscribedToFeed; // @synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed;
@property(retain, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(retain, nonatomic) NSData *articleSessionId; // @synthesize articleSessionId=_articleSessionId;
@property(retain, nonatomic) NSString *referencedArticleId; // @synthesize referencedArticleId=_referencedArticleId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasChannelData;
- (int)StringAsContentType:(id)arg1;
- (id)contentTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasContentType;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) BOOL hasIssueExposureData;
@property(readonly, nonatomic) BOOL hasIssueData;
@property(readonly, nonatomic) BOOL hasGroupViewExposureId;
@property(readonly, nonatomic) BOOL hasIadNativeCampaignAd;
@property(nonatomic) BOOL hasPreviousArticlePublisherArticleVersion;
@property(readonly, nonatomic) BOOL hasIadNativeAd;
@property(readonly, nonatomic) BOOL hasIadNativeLine;
@property(readonly, nonatomic) BOOL hasIadNativeCampaign;
@property(nonatomic) BOOL hasBackendArticleVersionInt64;
@property(nonatomic) BOOL hasPublisherArticleVersionInt64;
- (id)fractionalCohortMembershipAtIndex:(NSUInteger)arg1;
- (NSUInteger)fractionalCohortMembershipsCount;
- (void)addFractionalCohortMembership:(id)arg1;
- (void)clearFractionalCohortMemberships;
@property(readonly, nonatomic) BOOL hasWidgetEngagement;
@property(readonly, nonatomic) BOOL hasPreviousArticleVersion;
@property(readonly, nonatomic) BOOL hasPreviousArticleId;
@property(readonly, nonatomic) BOOL hasNativeCampaignData;
@property(nonatomic) BOOL hasIsNativeAd;
@property(nonatomic) BOOL hasIsSearchResultArticle;
@property(nonatomic) BOOL hasIsTopStoryArticle;
- (int)StringAsTopStoryType:(id)arg1;
- (id)topStoryTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTopStoryType;
@property(nonatomic) int topStoryType; // @synthesize topStoryType=_topStoryType;
@property(nonatomic) BOOL hasIsBreakingNewsArticle;
@property(readonly, nonatomic) BOOL hasNextArticleAffordanceTypeFeedId;
- (int)StringAsNextArticleAffordanceType:(id)arg1;
- (id)nextArticleAffordanceTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasNextArticleAffordanceType;
@property(nonatomic) int nextArticleAffordanceType; // @synthesize nextArticleAffordanceType=_nextArticleAffordanceType;
@property(nonatomic) BOOL hasFromNextArticleAffordanceTap;
@property(nonatomic) BOOL hasIsCoverArticle;
@property(readonly, nonatomic) BOOL hasCreativeId;
@property(readonly, nonatomic) BOOL hasCampaignType;
@property(readonly, nonatomic) BOOL hasCampaignId;
@property(nonatomic) BOOL hasIsFreeArticle;
@property(nonatomic) BOOL hasIsPaidSubscriberToSourceChannel;
- (int)StringAsGroupType:(id)arg1;
- (id)groupTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasGroupType;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
@property(readonly, nonatomic) BOOL hasGroupFeedId;
@property(nonatomic) BOOL hasIsGroupedArticle;
@property(nonatomic) BOOL hasPersonalizationTreatmentId;
@property(nonatomic) BOOL hasIsDigitalReplicaAd;
@property(readonly, nonatomic) BOOL hasSectionHeadlineId;
@property(readonly, nonatomic) BOOL hasSurfacedByTopicId;
@property(readonly, nonatomic) BOOL hasSurfacedBySectionId;
@property(readonly, nonatomic) BOOL hasSurfacedByChannelId;
@property(nonatomic) BOOL hasBackendArticleVersion;
@property(nonatomic) BOOL hasPublisherArticleVersion;
@property(readonly, nonatomic) BOOL hasLanguage;
@property(nonatomic) BOOL hasCharacterCount;
- (id)namedEntitiesAtIndex:(NSUInteger)arg1;
- (NSUInteger)namedEntitiesCount;
- (void)addNamedEntities:(id)arg1;
- (void)clearNamedEntities;
- (int)StringAsArticleType:(id)arg1;
- (id)articleTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasArticleType;
@property(nonatomic) int articleType; // @synthesize articleType=_articleType;
@property(nonatomic) BOOL hasLikeDislikeLocation;
@property(nonatomic) int likeDislikeLocation; // @synthesize likeDislikeLocation=_likeDislikeLocation;
@property(nonatomic) BOOL hasIsUserSubscribedToFeed;
@property(readonly, nonatomic) BOOL hasFeedViewExposureId;
@property(readonly, nonatomic) BOOL hasFeedId;
- (int)StringAsFeedType:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasFeedType;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;
@property(readonly, nonatomic) BOOL hasSourceChannelId;
@property(readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property(readonly, nonatomic) BOOL hasArticleSessionId;
@property(readonly, nonatomic) BOOL hasReferencedArticleId;
@property(readonly, nonatomic) BOOL hasArticleId;
@property(nonatomic) BOOL hasUserAction;
@property(nonatomic) int userAction; // @synthesize userAction=_userAction;

@end
