//
//  UIAlertView+Additional.h
//  SAMCategory
//
//  Created by MilanPanchal on 09/09/14.
//  Copyright (c) 2014 Pantech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIAlertView (Additional)

- (void)showWithCompletion:(void(^)(UIAlertView *alertView, NSInteger buttonIndex))completion ;

@end
