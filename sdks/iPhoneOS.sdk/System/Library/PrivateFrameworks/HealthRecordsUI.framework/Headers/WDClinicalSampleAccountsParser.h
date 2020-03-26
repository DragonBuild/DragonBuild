//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WDClinicalSampleAccountsParser : NSObject
{
    NSString *_accountFilename;
}

+ (id)_stringOnlyDictionaryFromJSONDictionary:(id)arg1;
+ (id)_jsonDictionaryFromJSONObject:(id)arg1 subElement:(id)arg2 error:(id )arg3;
@property(copy, nonatomic) NSString *accountFilename; // @synthesize accountFilename=_accountFilename;
// - (void).cxx_destruct;
- (id)_parseBatchesFromSampleAccountJSONDict:(id)arg1 error:(id )arg2;
- (id)_parseGatewayFromProviderJSONDict:(id)arg1 error:(id )arg2;
- (id)_parseProviderFromSampleAccountJSONDict:(id)arg1 error:(id )arg2;
- (id)_parseAccountsFromJSONData:(id)arg1 error:(id )arg2;
- (id)parsedAccountsWithError:(id )arg1;
- (id)initWithAccountFilename:(id)arg1;

@end
