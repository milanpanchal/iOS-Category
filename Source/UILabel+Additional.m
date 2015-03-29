//
//  UILabel+Additional.m
//  SAMCategory
//
//  Created by MilanPanchal on 01/03/15.
//  Copyright (c) 2015 Pantech. All rights reserved.
//

#import "UILabel+Additional.h"

@implementation UILabel (Additional)

-(void)setBackgroundImage:(UIImage *)backgroundImg {

    UIColor *color = [UIColor colorWithPatternImage:backgroundImg];
    self.backgroundColor = color;
}

@end
