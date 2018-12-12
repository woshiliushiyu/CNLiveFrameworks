//
//  CNLiveShareToolDefine.h
//  Pods
//
//  Created by 流诗语 on 2018/12/11.
//

#ifndef CNLiveShareToolDefine_h
#define CNLiveShareToolDefine_h

////////////////////////////////////////////////////////
////////////          SCreen
////////////////////////////////////////////////////////
#define KScreenWidth_Share ([UIScreen mainScreen].bounds.size.width > [UIScreen mainScreen].bounds.size.height ? [UIScreen mainScreen].bounds.size.height : [UIScreen mainScreen].bounds.size.width)
#define KScreenHeight_Share ([UIScreen mainScreen].bounds.size.width > [UIScreen mainScreen].bounds.size.height ? [UIScreen mainScreen].bounds.size.width : [UIScreen mainScreen].bounds.size.height)

#define IS_IPhoneX_All_Share (CGSizeEqualToSize([UIScreen mainScreen].bounds.size, CGSizeMake(375, 812)) ||CGSizeEqualToSize([UIScreen mainScreen].bounds.size, CGSizeMake(812, 375)) ||CGSizeEqualToSize([UIScreen mainScreen].bounds.size, CGSizeMake(414, 896)) ||CGSizeEqualToSize([UIScreen mainScreen].bounds.size, CGSizeMake(896, 414)))

#define kVerticalBottomSafeHeight_Share ((IS_IPhoneX_All_Share > 0) ? 34 : 0)
#define kHorizontalBottomHeight_Share ((IS_IPhoneX_All_Share > 0) ? 21 : 0)

#define RGB(r,g,b)          [UIColor colorWithRed:(r)/255.f \
green:(g)/255.f \
blue:(b)/255.f \
alpha:1.f]

//////////////////////////////////////
///////////////// 三方平台相关参数////////
//////////////////////////////////////

/*微信相关参数*/
static NSString *const CNLiveWeiChatAppId_Share = @"wx9b7f9443a8ccf15a";
static NSString *const CNLiveWeiChatAppSecret_Share = @"8d9970bf2901411d8dd2bffb344f147e";

/*腾讯相关参数*/
static NSString *const CNLiveQQShareAppId_Share = @"1106970445";
static NSString *const CNLiveQQShareAppSecret_Share = @"4hxuJ1HIes4i4hqT";

/*shareSDK相关参数*/
static NSString *const CNLiveShareSDKAppId_Share = @"26192e9007048";
static NSString *const CNLiveShareSDKAppSecret_Share = @"f9d2fbf7f7827925c532a716340363c7";


#endif /* CNLiveShareToolDefine_h */
