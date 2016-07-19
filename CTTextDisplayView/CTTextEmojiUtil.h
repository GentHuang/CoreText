//
//  CTTextEmojiUtil.h
//  CoreTextDemo01
//
//  Created by apple on 16/03/12.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CTTextEmojiUtil : NSObject

@property (nonatomic,strong) NSDictionary * emojis;

+ (CTTextEmojiUtil *)shareInstance;

@end
