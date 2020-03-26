//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ECFormulaProcessor : NSObject
{
    struct XlFormulaProcessor mXlFormulaProcessorLasso;
    struct XlFormulaProcessor mXlFormulaProcessorXl;
    struct XlNameTable mXlNameTable;
    ChVector_cc6fdd32 mLassoSheetNames;
    ChVector_cc6fdd32 mXlSheetNames;
    struct XlLinkTable mXlLinkTable;
}

+ (id)formulaStringForEDFormula:(id)arg1 edWorksheet:(id)arg2 xlFormulaProcessor:(struct XlFormulaProcessor )arg3;
- (struct XlFormulaProcessor )xlFormulaProcessorXl;
- (struct XlFormulaProcessor )xlFormulaProcessorLasso;
- (void)setupWithWorkbook:(id)arg1;
- (void)dealloc;
- (id)init;
- (ChVector_cc6fdd32 )sheetNamesFromWorkbook:(id)arg1;
- (struct XlFormulaProcessor )setupWithWorkbook:(id)arg1 xlNameTable:(struct XlNameTable )arg2 sheetNames:(ChVector_cc6fdd32 )arg3 xlLinkTable:(struct XlLinkTable )arg4 lassoSyntax:(BOOL)arg5;

@end
