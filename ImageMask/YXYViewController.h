//
//  YXYViewController.h
//  ImageMask
//
//  Created by 杨萧玉 on 14-4-9.
//  Copyright (c) 2014年 杨萧玉. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ImageMaskView.h"
@interface YXYViewController : UIViewController<ImageMaskFilledDelegate>
@property (strong, nonatomic) IBOutlet ImageMaskView *FengjieMask;

@end
