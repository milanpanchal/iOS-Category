Pod::Spec.new do |s|
  s.name         = "iOS-Category"
  s.version      = "0.0.1"
  s.summary      = "iOS Category for UIKit and Foundation classes like UIColor, UIView, NSDate, NSData etc"
  s.description  = <<-DESC
                   A longer description of iOS-Category in Markdown format.

                   * Think: Why did you write this? What is the focus? What does it do?
                   * CocoaPods will be using this to generate tags, and improve search results.
                   * Try to keep it short, snappy and to the point.
                   * Finally, don't worry about the indent, CocoaPods strips it!
                   DESC

  s.homepage     = "https://github.com/milanpanchal/iOS-Category"
  s.screenshots  = "https://raw.github.com/milanpanchal/iOS-Category/master/Screenshots/gredient_example.png"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author             = { "Milan Panchal" => "sam07it22@gmail.com" }
  s.social_media_url   = "http://twitter.com/milan_panchal24"
  s.platform     = :ios, "5.0"
  s.source       = { :git => "https://github.com/milanpanchal/iOS-Category.git", :tag => "0.0.1" }
  s.source_files  = "Source/*.{h,m}"
  s.requires_arc = true
  s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
end
