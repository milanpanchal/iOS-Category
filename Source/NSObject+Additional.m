//
//  NSObject+Additional.m
//  SAMCategory
//
//  Created by MilanPanchal on 10/09/14.
//  Copyright (c) 2014 Pantech. All rights reserved.
//

#import "NSObject+Additional.h"

@implementation NSObject (Additional)

- (void)roundedCornersOnTopWithRadious:(CGFloat)radious {
    
    [self roundedCornerOnSide:UIRectCornerTopLeft | UIRectCornerTopRight
                  withRadious:radious];
}

- (void)roundedCornersOnTopLeftWithRadious:(CGFloat)radious {

    [self roundedCornerOnSide:UIRectCornerTopLeft
                  withRadious:radious];

}

- (void)roundedCornersOnTopRightWithRadious:(CGFloat)radious {

    [self roundedCornerOnSide:UIRectCornerTopRight
                  withRadious:radious];
}

- (void)roundedCornersOnBottomWithRadious:(CGFloat)radious {

    [self roundedCornerOnSide:UIRectCornerBottomLeft | UIRectCornerBottomRight
                  withRadious:radious];
}

- (void)roundedCornersOnBottomLeftWithRadious:(CGFloat)radious  {

    [self roundedCornerOnSide:UIRectCornerBottomLeft
                  withRadious:radious];
}

- (void)roundedCornersOnBottomRightWithRadious:(CGFloat)radious {

    [self roundedCornerOnSide:UIRectCornerBottomRight
                  withRadious:radious];
}


- (void)roundedCornersOnAllSideWithRadious:(CGFloat)radious {
    
    [self roundedCornerOnSide:UIRectCornerAllCorners
                  withRadious:radious];
}

- (void)roundedCornerOnSide:(UIRectCorner)corners withRadious:(CGFloat)radious {

    CAShapeLayer * maskLayer = [CAShapeLayer layer];
    maskLayer.path = [UIBezierPath bezierPathWithRoundedRect: [(id)self bounds]
                                           byRoundingCorners: corners
                                                 cornerRadii: (CGSize){radious, radious}].CGPath;


    [(id)self setClipsToBounds:YES];

}

@end
