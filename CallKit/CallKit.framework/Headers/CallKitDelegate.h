//
//  CallKitDelegate.h
//  CallKit
//
//  Created by SailorGa on 2024/3/22.
//  Copyright © 2024 SailorGa. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

@class CallKit;

#pragma mark - CallKit 事件回调
@protocol CallKitDelegate <NSObject>
#pragma mark 可选实现代理方法
@optional

#pragma mark - ------------ 错误事件回调 ------------
#pragma mark 错误事件回调
/// 错误事件回调
/// - Parameters:
///   - errCode: 错误码
///   - errMsg: 错误信息
- (void)onError:(SEACallError)errCode errMsg:(nullable NSString *)errMsg;

@end

NS_ASSUME_NONNULL_END
