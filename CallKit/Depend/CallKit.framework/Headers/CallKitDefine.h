//
//  CallKitDefine.h
//  CallKit
//
//  Created by SailorGa on 2024/3/22.
//  Copyright © 2024 SailorGa. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#pragma mark - 错误码枚举
/**
 错误码枚举

 - SEACallErrorSuccess: 操作成功
 - SEACallErrorFailed: 未归类的通用错误
 - SEACallErrorDatabaseFailed: 数据库错误或异常
 - SEACallErrorRecordNotFound: 数据记录未找到
 - SEACallErrorRepeatFound: 数据记录已存在
 - SEACallErrorNotAuthorized: ⽆权限
 - SEACallErrorNotInitialized: 未登录
 - SEACallErrorTokenDisabled: 令牌⽆效
 - SEACallErrorTokenExpired: 令牌已过期
 - SEACallErrorNetworkFailed: ⽹络错误或异常
 - SEACallErrorNetworkTimeout: 请求超时
 - SEACallErrorInvalidParameter: 请求参数不合法
*/
typedef enum : NSInteger {
    
    /// 操作成功
    SEACallErrorSuccess = 0,
    /// 未归类的通用错误
    SEACallErrorFailed = 10000,
    /// 数据库错误或异常
    SEACallErrorDatabaseFailed = 10001,
    /// 数据记录未找到
    SEACallErrorRecordNotFound = 10002,
    /// 数据记录已存在
    SEACallErrorRepeatFound = 10003,
    /// ⽆权限
    SEACallErrorNotAuthorized = 10040,
    /// 未登录
    SEACallErrorNotInitialized = 10041,
    /// 令牌⽆效
    SEACallErrorTokenDisabled = 10042,
    /// 令牌已过期
    SEACallErrorTokenExpired = 10043,
    /// ⽹络错误或异常
    SEACallErrorNetworkFailed = 10051,
    /// 请求超时
    SEACallErrorNetworkTimeout = 10055,
    /// 请求参数不合法
    SEACallErrorInvalidParameter = 10070
} SEACallError;


#pragma mark - 设备类型
/**
 设备类型

 - SEACallTerminalTypeUnknown: 未知设备
 - SEACallTerminalTypeWindows: Windows
 - SEACallTerminalTypeMacOS: MacOS
 - SEACallTerminalTypeAndroid: Android
 - SEACallTerminalTypeAndroidTV: Android TV
 - SEACallTerminalTypeiOS: iOS
 - SEACallTerminalTypeEmbeddedDev: 嵌入式终端
*/
typedef enum : NSInteger {
    
    SEACallTerminalTypeUnknown = 0,
    SEACallTerminalTypeWindows = 1000,
    SEACallTerminalTypeMacOS = 1001,
    SEACallTerminalTypeAndroid = 2000,
    SEACallTerminalTypeAndroidTV = 2001,
    SEACallTerminalTypeiOS = 2002,
    SEACallTerminalTypeEmbeddedDev = 3000
} SEACallTerminalType;


#pragma mark - 用户在线状态
/**
 用户在线状态

 - SEACallUserStateActive: 在线
 - SEACallUserStateOffline: 离线
 - SEACallUserStateKickout: 被踢
*/
typedef enum : NSInteger {
    
    SEACallUserStateActive = 0,
    SEACallUserStateOffline = 1,
    SEACallUserStateKickout = 2
} SEACallUserState;


#pragma mark - 用户类型
/**
 用户类型

 - SEACallUserTypeNormal: 普通用户
 - SEACallUserTypeSIP: SIP
 - SEACallUserTypeH323: H323
*/
typedef enum : NSInteger {
    
    SEACallUserTypeNormal = 1,
    SEACallUserTypeSIP = 2,
    SEACallUserTypeH323 = 3
} SEACallUserType;


#pragma mark - 操作相关回调
/// 成功回调
typedef void (^SEACallSuccessBlock)(void);
/// 失败回调
typedef void (^SEACallFailedBlock)(SEACallError code, NSString * _Nonnull message);

NS_ASSUME_NONNULL_END
