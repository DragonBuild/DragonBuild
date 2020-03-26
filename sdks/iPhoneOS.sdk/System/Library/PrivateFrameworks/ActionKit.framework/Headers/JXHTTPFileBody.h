//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/JXHTTPRequestBody-Protocol.h>

@class NSString;

@interface JXHTTPFileBody : NSObject <JXHTTPRequestBody>
{
    NSString *_filePath;
    NSString *_httpContentType;
}

+ (id)withFilePath:(id)arg1;
+ (id)withFilePath:(id)arg1 contentType:(id)arg2;
@property(copy, nonatomic) NSString *httpContentType; // @synthesize httpContentType=_httpContentType;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
// - (void).cxx_destruct;
- (long long)httpContentLength;
- (id)httpInputStream;
- (id)initWithFilePath:(id)arg1 contentType:(id)arg2;

@end
