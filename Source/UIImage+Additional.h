//
//  UIImage+Additional.h
//  SAMCategory
//
//  Created by MilanPanchal on 08/09/14.
//  Copyright (c) 2014 Pantech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Additional)

+ (UIImage *)imageFromUIColor:(UIColor *)color ;

+ (UIImage *)screenshot ;

- (UIImage*)blurredImage:(CGFloat)blurAmount ;

- (UIImage*)scaleToSize:(CGSize)newSize ;

- (UIImage *)croppedImage:(CGRect)bounds ;

@end
