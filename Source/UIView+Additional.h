//
//  UIView+Additional.h
//  SAMCategory
//
//  Created by MilanPanchal on 10/09/14.
//  Copyright (c) 2014 Pantech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Additional)

- (NSArray *)superviews ;

- (void)fadeOut ;

- (void)fadeOutAndRemoveFromSuperview ;

- (void)fadeIn ;

- (void)removeAllSubviews ;

#pragma mark - Size shortcuts

@property (nonatomic) CGFloat left;

@property (nonatomic) CGFloat top;

@property (nonatomic) CGFloat right;

@property (nonatomic) CGFloat bottom;

@property (nonatomic) CGFloat width;

@property (nonatomic) CGFloat height;

@property (nonatomic) CGFloat centerX;

@property (nonatomic) CGFloat centerY;

@property (nonatomic) CGPoint origin;

@property (nonatomic) CGSize size;

/**
 * Return the coordinate on the screen.
 */
- (CGPoint)clientToScreen:(CGPoint)pt;

@end
