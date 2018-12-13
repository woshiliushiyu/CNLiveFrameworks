Pod::Spec.new do |s|

  s.name         = "CNLivePersonalFramework"
  s.version      = "0.0.4"
  s.summary      = "LSY-iOS 分享功能的集成"# 项目简介
  s.homepage     = "https://github.com/woshiliushiyu/CNLiveFrameworks"
  s.source       = { :git => "https://github.com/woshiliushiyu/CNLiveFrameworks.git", :tag => "#{s.version}" }
  s.license      = "MIT"          # 开源证书
  s.author       = { 'woshiliushiyu' => '1010530278@qq.com' }
  s.platform     = :ios, "9.0" #平台及支持的最低版本
  s.frameworks   = "UIKit", "Foundation"#支持的框架

  s.subspec 'CNLiveShareManager' do |sp|
    sp.vendored_frameworks = 'CNLiveShareManager/CNLiveShareManager.framework'
    sp.dependency 'mob_sharesdk', '~> 4.1.4'
    sp.dependency 'mob_sharesdk/ShareSDKPlatforms/QQ'
    sp.dependency 'mob_sharesdk/ShareSDKPlatforms/SinaWeibo'
    sp.dependency 'mob_sharesdk/ShareSDKPlatforms/WeChatFull'
  end

end
