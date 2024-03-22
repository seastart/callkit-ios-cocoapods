//
//  CallKitObjects.h
//  CallKit
//
//  Created by SailorGa on 2024/3/22.
//  Copyright © 2024 SailorGa. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __has_include(<CallKit/CallKit.h>)
#import <CallKit/CallKitDefine.h>
#else
#import "CallKitDefine.h"
#endif

NS_ASSUME_NONNULL_BEGIN

/// 用户信息
@interface SEACallUserInfo : NSObject

/// 用户标识
@property (nonatomic, copy) NSString *userId;
/// 用户名称
@property (nonatomic, copy) NSString *userName;
/// 用户呢称
@property (nonatomic, copy) NSString *nickName;
/// 用户头像
@property (nonatomic, copy) NSString *avatar;

@end

NS_ASSUME_NONNULL_END
