//
//  NSString+Additional.h
//  SAMCategory
//
//  Created by MilanPanchal on 08/09/14.
//  Copyright (c) 2014 Pantech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Additional)

#pragma mark - Validations

- (BOOL)isNull ;

- (BOOL)isEmpty ;

- (BOOL)isEmail ;

- (BOOL)isStartsWithACapitalLetter;

#pragma mark - 

- (NSString *)trimWhitespace ;

- (NSUInteger)numberOfWords ;

- (NSString *)reverseString ;

- (NSString *)concat:(NSString *)string ;

- (BOOL)contains:(NSString *)string ;

+ (NSString *)truncateString:(NSString *) string toCharacterCount:(NSUInteger) count ;


#pragma mark - URL Encoding and Decoding

- (NSString *)urlEncode ;

- (NSString *)urlEncodeUsingEncoding:(NSStringEncoding)encoding ;

- (NSString *)urlDecode ;

- (NSString *)urlDecodeUsingEncoding:(NSStringEncoding)encoding ;

#pragma mark - Date Format

- (NSDate *)dateFromFormat: (NSString *)formatter ;

@end
