//
//  UIColor+Additional.h
//  SAMCategory
//
//  Created by MilanPanchal on 08/09/14.
//  Copyright (c) 2014 Pantech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Additional)

+ (UIColor *)randomColor ;

+ (UIColor *)colorWithHexString: (NSString *) hexString;

+ (UIColor *)colorWithRGB:(int)red green:(int)green blue:(int)blue alpha:(CGFloat)alpha ;

+ (UIColor*)gradientFromColor:(UIColor*)c1 toColor:(UIColor*)c2 withHeight:(int)height ;

@end
