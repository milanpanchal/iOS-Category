/*
 Erica Sadun, http://ericasadun.com
 iPhone Developer's Cookbook 3.x and beyond
 BSD License, Use at your own risk
 */


#import <Foundation/Foundation.h>

#define D_MINUTE	60
#define D_HOUR		3600
#define D_DAY		86400
#define D_WEEK		604800
#define D_YEAR		31556926


@interface NSDate (Additional)

+ (NSCalendar *) currentCalendar; // avoid bottlenecks

// Relative dates from the current date
+ (NSDate *) dateTomorrow;
+ (NSDate *) dateYesterday;
+ (NSDate *) dateWithDaysFromNow: (NSInteger) days;
+ (NSDate *) dateWithDaysBeforeNow: (NSInteger) days;
+ (NSDate *) dateWithHoursFromNow: (NSInteger) dHours;
+ (NSDate *) dateWithHoursBeforeNow: (NSInteger) dHours;
+ (NSDate *) dateWithMinutesFromNow: (NSInteger) dMinutes;
+ (NSDate *) dateWithMinutesBeforeNow: (NSInteger) dMinutes;

// Short string utilities
- (NSString *) stringWithDateStyle: (NSDateFormatterStyle) dateStyle timeStyle: (NSDateFormatterStyle) timeStyle;
- (NSString *) stringWithFormat: (NSString *) format;
@property (nonatomic, readonly) NSString *shortString;
@property (nonatomic, readonly) NSString *shortDateString;
@property (nonatomic, readonly) NSString *shortTimeString;
@property (nonatomic, readonly) NSString *mediumString;
@property (nonatomic, readonly) NSString *mediumDateString;
@property (nonatomic, readonly) NSString *mediumTimeString;
@property (nonatomic, readonly) NSString *longString;
@property (nonatomic, readonly) NSString *longDateString;
@property (nonatomic, readonly) NSString *longTimeString;

// Comparing dates
- (BOOL) isEqualToDateIgnoringTime: (NSDate *) aDate;

@property (nonatomic, getter=isToday, readonly) BOOL today;
@property (nonatomic, getter=isTomorrow, readonly) BOOL tomorrow;
@property (nonatomic, getter=isYesterday, readonly) BOOL yesterday;

- (BOOL) isSameWeekAsDate: (NSDate *) aDate;
@property (nonatomic, getter=isThisWeek, readonly) BOOL thisWeek;
@property (nonatomic, getter=isNextWeek, readonly) BOOL nextWeek;
@property (nonatomic, getter=isLastWeek, readonly) BOOL lastWeek;

- (BOOL) isSameMonthAsDate: (NSDate *) aDate;
@property (nonatomic, getter=isThisMonth, readonly) BOOL thisMonth;
@property (nonatomic, getter=isNextMonth, readonly) BOOL nextMonth;
@property (nonatomic, getter=isLastMonth, readonly) BOOL lastMonth;

- (BOOL) isSameYearAsDate: (NSDate *) aDate;
@property (nonatomic, getter=isThisYear, readonly) BOOL thisYear;
@property (nonatomic, getter=isNextYear, readonly) BOOL nextYear;
@property (nonatomic, getter=isLastYear, readonly) BOOL lastYear;

- (BOOL) isEarlierThanDate: (NSDate *) aDate;
- (BOOL) isLaterThanDate: (NSDate *) aDate;

@property (nonatomic, getter=isInFuture, readonly) BOOL inFuture;
@property (nonatomic, getter=isInPast, readonly) BOOL inPast;

@property (nonatomic, getter=isYearLeapYear, readonly) BOOL yearLeapYear ;

@property (nonatomic, readonly) NSInteger numnerOfDaysInCurrentYear ;

// Date roles
@property (nonatomic, getter=isTypicallyWorkday, readonly) BOOL typicallyWorkday;
@property (nonatomic, getter=isTypicallyWeekend, readonly) BOOL typicallyWeekend;

// Adjusting dates
- (NSDate *) dateByAddingYears: (NSInteger) dYears;
- (NSDate *) dateBySubtractingYears: (NSInteger) dYears;
- (NSDate *) dateByAddingMonths: (NSInteger) dMonths;
- (NSDate *) dateBySubtractingMonths: (NSInteger) dMonths;
- (NSDate *) dateByAddingDays: (NSInteger) dDays;
- (NSDate *) dateBySubtractingDays: (NSInteger) dDays;
- (NSDate *) dateByAddingHours: (NSInteger) dHours;
- (NSDate *) dateBySubtractingHours: (NSInteger) dHours;
- (NSDate *) dateByAddingMinutes: (NSInteger) dMinutes;
- (NSDate *) dateBySubtractingMinutes: (NSInteger) dMinutes;

// Date extremes
@property (nonatomic, readonly, copy) NSDate *dateAtStartOfDay;
@property (nonatomic, readonly, copy) NSDate *dateAtEndOfDay;

// Retrieving intervals
- (NSInteger) minutesAfterDate: (NSDate *) aDate;
- (NSInteger) minutesBeforeDate: (NSDate *) aDate;
- (NSInteger) hoursAfterDate: (NSDate *) aDate;
- (NSInteger) hoursBeforeDate: (NSDate *) aDate;
- (NSInteger) daysAfterDate: (NSDate *) aDate;
- (NSInteger) daysBeforeDate: (NSDate *) aDate;
- (NSInteger)distanceInDaysToDate:(NSDate *)anotherDate;

#pragma mark -

@property (nonatomic, readonly, copy) NSDate *dateByTruncatingTime ;

    
// Decomposing dates
@property (readonly) NSInteger nearestHour;
@property (readonly) NSInteger hour;
@property (readonly) NSInteger minute;
@property (readonly) NSInteger seconds;
@property (readonly) NSInteger day;
@property (readonly) NSInteger month;
@property (readonly) NSInteger weekOfMonth;
@property (readonly) NSInteger weekOfYear;
@property (readonly) NSInteger weekday;
@property (readonly) NSInteger nthWeekday; // e.g. 2nd Tuesday of the month == 2
@property (readonly) NSInteger year;

@end
