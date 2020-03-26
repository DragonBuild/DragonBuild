//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import <HomeKitDaemon/HMDTLVCreateParse-Protocol.h>

@class NSArray;

@interface HMDSupportedRTPConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    NSArray *_srtpCryptoSuites;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *srtpCryptoSuites; // @synthesize srtpCryptoSuites=_srtpCryptoSuites;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)tlvData;
- (BOOL)_parseFromTLVData;
- (id)initWithCryptoSuites:(id)arg1;

@end
