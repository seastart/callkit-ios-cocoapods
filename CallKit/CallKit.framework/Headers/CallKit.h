//
//  CallKit.h
//  CallKit
//
//  Created by SailorGa on 2024/3/22.
//  Copyright © 2024 SailorGa. All rights reserved.
//

#import <RTCEngineKit/RTCEngineKit.h>
#import <Foundation/Foundation.h>

#if __has_include(<CallKit/CallKit.h>)
#import <CallKit/CallKitDefine.h>
#import <CallKit/CallKitObjects.h>
#import <CallKit/CallKitDelegate.h>
#else
#import "CallKitDefine.h"
#import "CallKitObjects.h"
#import "CallKitDelegate.h"
#endif

NS_ASSUME_NONNULL_BEGIN

#pragma mark - CallKit
@interface CallKit : NSObject

+ (instancetype)new __attribute__((unavailable("use sharedInstance instead.")));
- (instancetype)init __attribute__((unavailable("use sharedInstance instead.")));


#pragma mark - ------------ 核心基础接口 ------------
#pragma mark 创建 CallKit 实例
/// 创建 CallKit 实例
+ (CallKit *)sharedInstance;

#pragma mark 销毁 CallKit 实例
/// 销毁 CallKit 实例
- (void)destroyInstance;

#pragma mark 设置事件回调
/// 设置事件回调，您可以通过 CallKitDelegate 获得各类事件通知（例如：错误码，远端用户进房间，音视频状态参数等）
/// @param delegate 委托实例
- (void)addDelegate:(id <CallKitDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
