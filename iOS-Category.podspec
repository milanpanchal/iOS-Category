Pod::Spec.new do |s|
  s.name         = "iOS-Category"
  s.version      = "1.0.5"
  s.summary      = "iOS Category for UIKit and Foundation classes like UIColor, UIView, NSDate, NSData etc"
  s.description  = <<-DESC
                   Categories for Objective-C, Utility methods and Macros 

		   This library includes these categories:
		   - NSData
		   - NSDate
		   - NSObject
		   - NSString
		   - NSMutableArray
		   - UIAlertView
		   - UIApplication
		   - UIColor
		   - UIImage
		   - UIView
		   - UIViewController
		   - UILabel

                   DESC

  s.homepage     = "https://github.com/milanpanchal/"
  s.screenshots  = "https://raw.github.com/milanpanchal/iOS-Category/master/Screenshots/gredient_example.png","https://raw.github.com/milanpanchal/iOS-Category/master/Screenshots/combine_images.png"
  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.author             = { 'Milan Panchal' => 'sam07it22@gmail.com' }
  s.social_media_url   = "http://twitter.com/milan_panchal24"
  s.platform     = :ios, "5.0"
  s.source       = { :git => "https://github.com/milanpanchal/iOS-Category.git", :tag => s.version.to_s }
  s.source_files  = "Source"
  s.requires_arc = true
  s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
end
