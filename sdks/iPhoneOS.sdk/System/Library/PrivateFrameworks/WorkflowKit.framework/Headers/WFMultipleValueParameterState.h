//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@interface WFMultipleValueParameterState : WFVariableSubstitutableParameterState
{
}

+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
+ (Class)processingValueClass;
- (id)stateByRemovingValueAtIndex:(NSUInteger)arg1;
- (id)stateByAppendingValue:(id)arg1;
- (id)stateByReplacingValueAtIndex:(NSUInteger)arg1 withValue:(id)arg2;
- (id)stateByTogglingValue:(id)arg1;
- (void)finishProcessingWithContent:(id)arg1 error:(id)arg2 forParameterStateClass:(Class)arg3 valueHandler:(id /* CDUnknownBlockType */)arg4;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(id /* CDUnknownBlockType */)arg3 valueHandler:(id /* CDUnknownBlockType */)arg4;
- (id)containedVariables;

@end
