//
//  UIApplication+Additional.h
//  SAMCategory
//
//  Created by MilanPanchal on 10/09/14.
//  Copyright (c) 2014 Pantech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIApplication (Additional)

- (NSURL *)documentsDirectoryURL ;

- (NSURL *)cachesDirectoryURL ;

- (NSURL *)downloadsDirectoryURL ;

- (NSURL *)libraryDirectoryURL ;

- (NSURL *)applicationSupportDirectoryURL ;

@end
