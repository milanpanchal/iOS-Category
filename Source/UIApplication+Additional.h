//
//  UIApplication+Additional.h
//  SAMCategory
//
//  Created by MilanPanchal on 10/09/14.
//  Copyright (c) 2014 Jeenal Infotech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIApplication (Additional)

@property (nonatomic, readonly, copy) NSURL *documentsDirectoryURL ;

@property (nonatomic, readonly, copy) NSURL *cachesDirectoryURL ;

@property (nonatomic, readonly, copy) NSURL *downloadsDirectoryURL ;

@property (nonatomic, readonly, copy) NSURL *libraryDirectoryURL ;

@property (nonatomic, readonly, copy) NSURL *applicationSupportDirectoryURL ;

@end
