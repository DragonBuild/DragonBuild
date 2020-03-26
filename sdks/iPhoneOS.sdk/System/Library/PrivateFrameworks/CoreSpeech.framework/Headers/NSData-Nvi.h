//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (Nvi)
+ (id)decryptedDataUsingAESKey:(id)arg1 atFilepath:(id)arg2 error:(id )arg3;
+ (id)randomBytesWithLength:(NSUInteger)arg1 error:(id )arg2;
+ (id)errorMessageForCCErrorCode:(long long)arg1;
- (id)strRepForFloatData;
- (id)rawMicChannelsDataWithNumSamplesPerChannel:(NSUInteger)arg1;
- (void)splitAudioDataToReachSampleCount:(NSUInteger)arg1 currSampleCount:(NSUInteger)arg2 numBytesPerSample:(NSUInteger)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (id)decryptedDataWithAESGCMKey:(id)arg1 ivData:(id)arg2 tagData:(id)arg3 error:(id )arg4;
- (void)encryptedDataWithAESGCMKey:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)saveEncryptedDataUsingAESKey:(id)arg1 atFilepath:(id)arg2;
- (id)_cs_xpcObject;
- (id)_cs_initWithXPCObject:(id)arg1;
@end
