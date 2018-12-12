//
//  CNLiveShareManager.h
//  CNLiveShareManager
//
//  Created by 流诗语 on 2018/12/11.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, CNLiveShareResultType) {
    CNLiveShareResultTypeStart,
    CNLiveShareResultTypeSucc,
    CNLiveShareResultTypeFail,
    CNLiveShareResultTypeUnKnow,
};
typedef NS_ENUM(NSUInteger, CNLiveSharePlatformType) {
    CNLiveSharePlatformTypeAll,
    CNLiveSharePlatformTypeWjjFriend,
    CNLiveSharePlatformTypeWjjLive,
    CNLiveSharePlatformTypeWeChat,
    CNLiveSharePlatformTypeCricle,
    CNLiveSharePlatformTypeQQFriend,
    CNLiveSharePlatformTypeSina,
    CNLiveSharePlatformTypeSafari,
};

@interface CNLiveShareManager : NSObject

/**
 在工程初始时调用该方法进行注册 Share  最新 0.0.1
 
 (当前仅支持微信,微信朋友圈,QQ,微博,网++好友,网++生活圈分享,其他平台待开发)
 */
+(void)registeredShareViewWhenDidFinishLaunch;

/**
 调用分享界面进行分享操作
 
 @param shareTitle 分享标题
 @param shareUrl 分享的链接
 @param shareDesc 分享的描述
 @param shareImage 图片集合,传入参数可以为单张图片信息，也可以为一个NSArray，数组元素可以为UIImage、NSString（图片路径）、NSURL（图片路径）
 @param isFull 是否横屏显示分享界面
 @param platformType 分享平台调用某个单独方法(CNLiveSharePlatformTypeAll 类型为已实现界面,默认为此类型)
 @param completerBlock 分享结果回调
 */
+(void)showShareViewWithParamForShareTitle:(NSString *)shareTitle
                                  ShareUrl:(NSString *)shareUrl
                                 ShareDesc:(NSString *)shareDesc
                                ShareImage:(id)shareImage
                                ScreenFull:(BOOL)isFull
                              PlatformType:(CNLiveSharePlatformType)platformType
                            CompleterBlock:(void(^)(CNLiveShareResultType resultType))completerBlock;



/**
 添加分享视图底部栏按钮
 
 @param shareTitle 分享标题
 @param shareUrl 分享链接
 @param shareDesc 分享描述
 @param shareImage 图片集合,传入参数可以为单张图片信息，也可以为一个NSArray，数组元素可以为UIImage、NSString（图片路径）、NSURL（图片路径）
 @param isFull 是否横屏显示分享界面
 @param image 底部按钮的图片
 @param title 底部按钮的标题
 @param platformType 分享类型
 @param resultBlock 点击底部按钮回调
 @param completerBlock 分享结果回调
 */
+(void)showShareViewWithBottemViewButtonsParamForShareTitle:(NSString *)shareTitle
                                                   ShareUrl:(NSString *)shareUrl
                                                  ShareDesc:(NSString *)shareDesc
                                                 ShareImage:(id)shareImage
                                                 ScreenFull:(BOOL)isFull
                                                      Image:(NSArray<UIImage *> *)image
                                                     Titles:(NSArray<NSString *> *)title
                                               PlatformType:(CNLiveSharePlatformType)platformType
                                           TouchActionBlock:(void(^)(NSString * title))resultBlock
                                             CompleterBlock:(void(^)(CNLiveShareResultType resultType))completerBlock;



@end

