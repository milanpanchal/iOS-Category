//
//  NSObject+Additional.h
//  SAMCategory
//
//  Created by MilanPanchal on 10/09/14.
//  Copyright (c) 2014 Pantech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Additional)

- (void)roundedCornersOnTopWithRadious:(CGFloat)radious ;

- (void)roundedCornersOnTopLeftWithRadious:(CGFloat)radious ;

- (void)roundedCornersOnTopRightWithRadious:(CGFloat)radious ;

- (void)roundedCornersOnBottomWithRadious:(CGFloat)radious ;

- (void)roundedCornersOnBottomLeftWithRadious:(CGFloat)radious ;

- (void)roundedCornersOnBottomRightWithRadious:(CGFloat)radious ;

- (void)roundedCornersOnAllSideWithRadious:(CGFloat)radious ;

@end
