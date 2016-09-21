//
//  YHUserInfoManager.h
//  PikeWay
//
//  Created by kun on 16/4/25.
//  Copyright © 2016年 YHSoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YHUserInfo.h"

@interface YHUserInfoManager : NSObject

/**
 *  当前登录的用户信息(单例)
 */
@property (nonatomic, strong)YHUserInfo *userInfo;

+ (instancetype)sharedInstance;

@end
