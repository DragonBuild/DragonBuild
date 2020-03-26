//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface NTKCPhotosAddController : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    id /* CDUnknownBlockType */ _multipleCompletion;
    id /* CDUnknownBlockType */ _singleCompletion;
}

+ (id)_sharedInstance;
+ (void)_presentAddControllerFromViewController:(id)arg1 multiple:(BOOL)arg2 limit:(NSUInteger)arg3 completion:(id)arg4;
+ (void)presentSinglePhotoAddControllerFromViewController:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
+ (void)presentPhotosAddControllerFromViewController:(id)arg1 selectionLimit:(NSUInteger)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
+ (void)presentPhotosAddControllerFromViewController:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
@property(copy, nonatomic) id /* CDUnknownBlockType */ singleCompletion; // @synthesize singleCompletion=_singleCompletion;
@property(copy, nonatomic) id /* CDUnknownBlockType */ multipleCompletion; // @synthesize multipleCompletion=_multipleCompletion;
// - (void).cxx_destruct;
- (void)_dismiss:(id)arg1 photos:(id)arg2 single:(id)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;

@end
