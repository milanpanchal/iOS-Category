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

@end
