//
//  CTTextRun.h
//  CoreTextDemo01
//
//  Created by apple on 16/03/12.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CTTextStyleModel.h"


@interface CTTextRun : NSObject

@property (nonatomic,strong) CTTextStyleModel * styleModel;

- (void)runsWithAttString:(NSMutableAttributedString *)attString;

@end
