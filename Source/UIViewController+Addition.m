//
//  UIViewController+Addition.m
//  SAMCategory
//
//  Created by MilanPanchal on 30/09/14.
//  Copyright (c) 2014 Jeenal Infotech. All rights reserved.
//

#import "UIViewController+Addition.h"

@implementation UIViewController (Addition)

- (BOOL)isVisible {
    return self.viewLoaded && self.view.window;
}

@end
