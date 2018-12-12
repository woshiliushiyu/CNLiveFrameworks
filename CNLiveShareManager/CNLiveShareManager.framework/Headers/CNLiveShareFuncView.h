//
//  CNLiveShareFuncView.h
//  CNLiveShareManager
//
//  Created by 流诗语 on 2018/12/11.
//

#import <UIKit/UIKit.h>
#import "CNLiveShareManager.h"


@interface CNLiveShareFuncView : UIView
/**
 初始化f分享界面
 
 @param shareName 分享标题
 @param shareUrl 分享链接
 @param shareDesc 分享描述
 @param shareImage 分享图片
 @param platformType 分享类型
 @param isFull 是否全屏
 @return 返回
 */
- (instancetype)initWithShareName:(NSString *)shareName ShareUrl:(NSString *)shareUrl ShareDesc:(NSString *)shareDesc ShareImage:(id)shareImage PlatformType:(CNLiveSharePlatformType)platformType isFull:(BOOL)isFull;

/**
 添加底部框相关按钮
 
 @param images 底部按钮图片
 @param titles 底部按钮名称
 @param completerBlock 点击事件回调
 */
-(void)addBottemButtomsImage:(NSArray<NSString *> *)images Titles:(NSArray<NSString *> *)titles CompleterBlock:(void (^)(NSString *))completerBlock;

/**
 分享调起时进行回调,一般用来统计分享功能
 */
@property (copy, nonatomic) void(^shareResultBlock)(CNLiveShareResultType resultType);

/**
 显示分享界面
 */
- (void)show;

/**
 隐藏分享界面
 */
- (void)dismiss;

@end

