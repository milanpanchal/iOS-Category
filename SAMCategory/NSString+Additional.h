//
//  NSString+Additional.h
//  SAMCategory
//
//  Created by MilanPanchal on 08/09/14.
//  Copyright (c) 2014 Pantech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Additional)

- (BOOL)isNull ;

- (BOOL)isEmail ;

- (NSString *)trimWhitespace ;

- (BOOL)isEmpty ;

- (BOOL)isStartsWithACapitalLetter;

- (NSUInteger)numberOfWords ;


#pragma mark - URL Encoding and Decoding

- (NSString *)urlEncode ;

- (NSString *)urlEncodeUsingEncoding:(NSStringEncoding)encoding ;

- (NSString *)urlDecode ;

- (NSString *)urlDecodeUsingEncoding:(NSStringEncoding)encoding ;

@end
