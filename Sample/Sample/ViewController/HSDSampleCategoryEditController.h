//
//  HSDSampleCategoryEditController.h
//  Sample
//
//  Created by chenjun on 2018/5/17.
//  Copyright © 2018年 chenjun. All rights reserved.
//

#import <UIKit/UIKit.h>
@class CJCategoryDataModel;
@protocol HSDSampleCategoryEditControllerDelegate;

@interface HSDSampleCategoryEditController : UIViewController

@property (weak, nonatomic) id<HSDSampleCategoryEditControllerDelegate> delegate;

- (instancetype)initWithCategory:(CJCategoryDataModel *)category;

@end

@protocol HSDSampleCategoryEditControllerDelegate <NSObject>

- (void)onCategoryEditControllerDismiss;

@end
