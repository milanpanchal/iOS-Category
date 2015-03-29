//
//  Macros.h
//  SAMCategory
//
//  Created by MilanPanchal on 20/11/14.
//  Copyright (c) 2014 Pantech. All rights reserved.
//

#ifndef SAMCategory_Macros_h
#define SAMCategory_Macros_h


/** Float: Degrees -> Radian **/
#define DEGREES_TO_RADIANS(degrees) ((M_PI * degrees) / 180.0)

/** Float: Radians -> Degrees **/
#define RADIANS_TO_DEGREES(radians) ((radians * 180.0)/ M_PI)



/**Navigation - Go back - POP view controller **/
#define GOBACK [self.navigationController popViewControllerAnimated:YES]


/** Float: Return screen width **/
#define SCREEN_WIDTH    ((([UIApplication sharedApplication].statusBarOrientation == UIInterfaceOrientationPortrait) || \
                        ([UIApplication sharedApplication].statusBarOrientation == UIInterfaceOrientationPortraitUpsideDown)) ? \
                        [[UIScreen mainScreen] bounds].size.width : [[UIScreen mainScreen] bounds].size.height)

/** Float: Return screen height **/
#define SCREEN_HEIGHT   ((([UIApplication sharedApplication].statusBarOrientation == UIInterfaceOrientationPortrait) || \
                        ([UIApplication sharedApplication].statusBarOrientation == UIInterfaceOrientationPortraitUpsideDown)) ? \
                        [[UIScreen mainScreen] bounds].size.height : [[UIScreen mainScreen] bounds].size.width)

// Timer Invalidation
#define UA_INVALIDATE_TIMER(t) [t invalidate]; t = nil;


// Threading
#define UA_RUN_ON_MAIN_THREAD if (![NSThread isMainThread]) \
{ dispatch_sync(dispatch_get_main_queue(), ^{ [self performSelector:_cmd]; }); return; };


// Device Info
#define IS_IPAD     (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad) /** BOOL: Detect if device is an iPad **/

#define IS_IPHONE   (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone) /** BOOL: Detect if device is an iPhone or iPod **/

//#define IS_IPHONE5  ([[UIScreen mainScreen] bounds].size.height == 568)?TRUE:FALSE /** BOOL: Detect if device is an iPhone5 or not **/

#define IS_IPHONE_5 (IS_IPHONE && ([[UIScreen mainScreen] bounds].size.height == 568.0) && ((IS_OS_8_OR_LATER && [UIScreen mainScreen].nativeScale == [UIScreen mainScreen].scale) || !IS_OS_8_OR_LATER)) /** BOOL: Detect if device is an iPhone5 or not **/

#define IS_STANDARD_IPHONE_6 (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 667.0  && IS_OS_8_OR_LATER && [UIScreen mainScreen].nativeScale == [UIScreen mainScreen].scale)

#define IS_ZOOMED_IPHONE_6 (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 568.0 && IS_OS_8_OR_LATER && [UIScreen mainScreen].nativeScale > [UIScreen mainScreen].scale)

#define IS_STANDARD_IPHONE_6_PLUS (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 736.0)

#define IS_ZOOMED_IPHONE_6_PLUS (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 667.0 && IS_OS_8_OR_LATER && [UIScreen mainScreen].nativeScale < [UIScreen mainScreen].scale)


/** BOOL: Is iOS version is greater than or equal to specified version**/
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v) \
            ([[[UIDevice currentDevice] systemVersion] compare:(v) options:NSNumericSearch] != NSOrderedAscending)

#define IS_OS_8_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)

/** BOOL: IS_RETINA **/
#define IS_RETINA_DEVICE ([[UIScreen mainScreen] respondsToSelector:@selector(scale)] && [[UIScreen mainScreen] scale] >= 2) 

/** BOOL: Is multi tasking support by device or not **/

#define IS_MULTI_TASKING_SUPPORTED ([[UIDevice currentDevice] respondsToSelector:@selector(isMultitaskingSupported)] && [[UIDevice currentDevice] isMultitaskingSupported])


// Colors
#define UA_RGBA(r,g,b,a)    [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define UA_RGB(r,g,b)       UA_RGBA(r, g, b, 1.0f)


// Return "YES" or "NO" string based on boolean value
#define NSStringFromBool(b) (b ? @"YES" : @"NO")


// Debugging / Logging
#ifdef DEBUG
    #define debug(format, ...) \
    CFShow((__bridge void *)[NSString stringWithFormat:@"%s [LINE: %d] ==>> " format,__PRETTY_FUNCTION__, __LINE__, ## __VA_ARGS__]);
#else
    #define debug(format, ...)
#endif

#define debugBounds(view) debug(@"%@ bounds: %@", view, NSStringFromCGRect([view bounds]))
#define debugFrame(view)  debug(@"%@ frame: %@" , view, NSStringFromCGRect([view frame]))


/** Flush Auto Release Pool **/
#define FLUSH_POOL(p)   [p drain]; p = [[NSAutoreleasePool alloc] init]

/**
 
 Date formats:
 ===============

MMM d, ''yy             Nov 4, '12
'Week' w 'of 52'        Week 45 of 52
'Day' D 'of 365'        Day 309 of 365
m 'minutes past' h      9 minutes past 8
h:mm a                  8:09 PM
HH:mm:ss's'             20:09:00s
HH:mm:ss:SS             20:09:00:00
h:mm a zz               8:09 PM CST
h:mm a zzzz             8:09 PM Central Standard Time
yyyy-MM-dd HH:mm:ss Z	2012-11-04 20:09:00 -0600
 
 **/


#define DATE_FORMAT_DD_MM_YYYY              @"dd-MM-yyyy"               //e.g. 24-07-1990
#define DATE_FORMAT_MM_DD_YYYY              @"MM-dd-yyyy"               //e.g. 07-24-1990
#define DATE_FORMAT_YYYY_MM_DD              @"yyyy-MM-dd"               //e.g. 1990-07-24
#define DATE_FORMAT_DD_MM_YYYY_HH_MM_12H    @"dd-MM-yyyy hh:mm a"       //e.g. 24-07-1990 05:20 AM
#define DATE_FORMAT_MMM_DD_YYYY             @"MMM dd, yyyy"             //e.g. Jul 24, 1990
#define DATE_FORMAT_MMMM_DD                 @"MMMM dd"                  //e.g. July 24
#define DATE_FORMAT_MMMM                    @"MMMM"                     //e.g. July, November
#define DATE_FORMAT_MMM_DD_YYYY_HH_MM_SS    @"MMM dd, yyyy hh:mm:ss a"  //e.g. Jul 24, 2014 05:20:50 AM
#define DATE_FORMAT_MMM_DD_YYYY_HH_MM_12H   @"MMM dd, yyyy hh:mm a"     //e.g. Jul 24, 2014 05:20 AM
#define DATE_FORMAT_HH_MM_SS                @"HH:mm:ss"                 //e.g. 05:20:50 AM
#define DATE_FORMAT_E                       @"E"                        //e.g. Tue
#define DATE_FORMAT_EEEE                    @"EEEE"                     //e.g. Tuesday
#define DATE_FORMAT_QQQ                     @"QQQ"                      //e.g. Q1,Q2,Q3,Q4
#define DATE_FORMAT_QQQQ                    @"QQQQ"                      //e.g. 4th quarter


/** Convert object to nil if its from NSNull class**/

#define NULL_TO_NIL(obj) ({ _typeof_ (obj) __obj = (obj); __obj == [NSNull null] ? nil : obj; })


/** Try - catch block
 *Use TRY CATCH IN ANY METHOD LIKE THIS
 *- (void)anyMethodThatCanGenerateException {
 *  TRY_CATCH_START
 *    code that generate exception
 *
 *  TRY_CATCH_END
 * }
 **/

#define TRY_CATCH_START @try{

#define TRY_CATCH_END }@catch(NSException *e){NSLog(@"\n\n\n\n\n\n\
\n\n|EXCEPTION FOUND HERE...PLEASE DO NOT IGNORE\
\n\n|FILE NAME %s\
\n\n|LINE NUMBER %d\
\n\n|METHOD NAME %s\
\n\n|EXCEPTION REASON %@\
\n\n\n\n\n\n\n",strrchr(__FILE__,'/'),__LINE__, __PRETTY_FUNCTION__,e);};


#define DATE_COMPONENTS         NSYearCalendarUnit | NSMonthCalendarUnit | NSDayCalendarUnit /** Return date component**/
#define TIME_COMPONENTS         NSHourCalendarUnit | NSMinuteCalendarUnit | NSSecondCalendarUnit /** Return time component**/


#define USER_DEFAULTS           [NSUserDefaults standardUserDefaults]
#define NOTIFICATION_CENTER     [NSNotificationCenter defaultCenter]
#define SHARED_APPLICATION      [UIApplication sharedApplication]


#endif
