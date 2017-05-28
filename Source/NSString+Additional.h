//
//  NSString+Additional.h
//  SAMCategory
//
//  Created by MilanPanchal on 08/09/14.
//  Copyright (c) 2014 Jeenal Infotech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Additional)

#pragma mark - Validations

@property (nonatomic, getter=isNull, readonly) BOOL null ;

@property (nonatomic, getter=isEmpty, readonly) BOOL empty ;

@property (nonatomic, getter=isEmail, readonly) BOOL email ;

@property (nonatomic, getter=isStartsWithACapitalLetter, readonly) BOOL startsWithACapitalLetter;

#pragma mark - 

@property (nonatomic, readonly, copy) NSString *trimWhitespace ;

@property (nonatomic, readonly) NSUInteger numberOfWords ;

@property (nonatomic, readonly, copy) NSString *reverseString ;

- (NSString *)concat:(NSString *)string ;

- (BOOL)contains:(NSString *)string ;

+ (NSString *)truncateString:(NSString *) string toCharacterCount:(NSUInteger) count ;


#pragma mark - URL Encoding and Decoding

@property (nonatomic, readonly, copy) NSString *urlEncode ;

- (NSString *)urlEncodeUsingEncoding:(NSStringEncoding)encoding ;

@property (nonatomic, readonly, copy) NSString *urlDecode ;

- (NSString *)urlDecodeUsingEncoding:(NSStringEncoding)encoding ;

#pragma mark - Date Format

- (NSDate *)dateFromFormat: (NSString *)formatter ;

@end
