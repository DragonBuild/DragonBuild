//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMNicknameFieldEncryptionKey, IMNicknameFieldTaggingKey, IMNicknameRecordTaggingKey, NSData;

@interface IMNicknameEncryptionPreKey : NSObject
{
    NSData *_generatedData;
    NSData *_derivedData;
}

+ (id)preKeyWithDataRepresentation:(id)arg1 error:(id )arg2;
+ (id)generatePreKeyWithError:(id )arg1;
- (id)_subDerviedKeyDataAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) IMNicknameRecordTaggingKey *recordTaggingKey;
@property(readonly, nonatomic) IMNicknameFieldTaggingKey *fieldTaggingKey;
@property(readonly, nonatomic) IMNicknameFieldEncryptionKey *fieldEncryptionKey;
- (id)dataRepresentation;
- (void)dealloc;
- (id)initWithGeneratedData:(id)arg1 derivedData:(id)arg2;

@end
