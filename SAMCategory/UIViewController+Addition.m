//
//  UIViewController+Addition.m
//  SAMCategory
//
//  Created by MilanPanchal on 30/09/14.
//  Copyright (c) 2014 Pantech. All rights reserved.
//

#import "UIViewController+Addition.h"

@implementation UIViewController (Addition)

- (BOOL)isVisible {
    return [self isViewLoaded] && self.view.window;
}

@end
