//
//  SAMUtility.h
//  SAMCategory
//
//  Created by MilanPanchal on 13/09/14.
//  Copyright (c) 2014 Pantech. All rights reserved.
//

@interface SAMUtility : NSObject

/**
 * gets singleton object.
 * @return singleton
 */
+ (SAMUtility*)sharedInstance;

#pragma mark - Get UDID

+ (NSString *)getUUID ;

#pragma mark - Local Country name and country code

+ (NSDictionary *)getLocalCountryNameAndCode ;

#pragma mark - check for application is running first time or not

+ (BOOL)isFirstRun ;

#pragma mark - Get IP address

+ (NSString *)getIPAddress ;

+ (NSDictionary *)getIPAddresses ;

#pragma mark - GET FREE DISK SPACE

+ (uint64_t)getFreeDiskSpace ;

#pragma mark - OTHER

+ (BOOL)isCameraAvailable ;

@end
