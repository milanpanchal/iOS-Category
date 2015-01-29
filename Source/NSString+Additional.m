//
//  NSString+Additional.m
//  SAMCategory
//
//  Created by MilanPanchal on 08/09/14.
//  Copyright (c) 2014 Pantech. All rights reserved.
//

#import "NSString+Additional.h"

@implementation NSString (Additional)

#pragma mark - Validations

- (BOOL)isNull {
    
    if(self == nil || [self isKindOfClass:[NSNull class]] || [self isEmpty]) {
        return YES;
    }
    
    return NO;
}

- (BOOL)isEmpty {
    return [[self trimWhitespace] isEqualToString:@""];
}


- (BOOL)isEmail {
    
    //Create a regex string
    NSString *stricterFilterString = @"[A-Z0-9a-z._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,4}" ;
    //Create predicate with format matching your regex string
    
    NSPredicate *emailTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", stricterFilterString];
    //return true if email address is valid
    return [emailTest evaluateWithObject:self];
    
}

- (BOOL)isStartsWithACapitalLetter {
    
    unichar firstCharacter = [self characterAtIndex:0];
    return [[NSCharacterSet uppercaseLetterCharacterSet]
            characterIsMember:firstCharacter];
    
}

#pragma mark - 

- (NSString *)trimWhitespace {
    
//    NSMutableString *str = [self mutableCopy];
//    CFStringTrimWhitespace((__bridge CFMutableStringRef)str);
//    return str;
    
    return [self stringByTrimmingCharactersInSet:
            [NSCharacterSet whitespaceAndNewlineCharacterSet]];
}

- (NSUInteger)numberOfWords {
    __block NSUInteger count = 0;
    [self enumerateSubstringsInRange:NSMakeRange(0, [self length])
                            options:NSStringEnumerationByWords|NSStringEnumerationSubstringNotRequired
                         usingBlock:^(NSString *substring, NSRange substringRange, NSRange enclosingRange, BOOL *stop) {
                             count++;
                         }];
    return count;
}

- (NSString *)reverseString {
    
//    int len = [self length];
//    
//    NSMutableString *reversedStr = [NSMutableString stringWithCapacity:len];
//    while (len--) {
//        [reversedStr appendFormat:@"%C", [self characterAtIndex:len]];
//    }
    
    // New way
    NSMutableString *reversedString = [NSMutableString stringWithCapacity:[self length]];
    
    [self enumerateSubstringsInRange:NSMakeRange(0,[self length])
                             options:(NSStringEnumerationReverse | NSStringEnumerationByComposedCharacterSequences)
                          usingBlock:^(NSString *substring, NSRange substringRange, NSRange enclosingRange, BOOL *stop) {
                                  [reversedString appendString:substring];
                              }];

    
    return reversedString;
}

- (NSString *)concat:(NSString *)string {
 
    if (!string) {
        return self;
    }
    
    return [NSString stringWithFormat:@"%@%@",self, string];
}

- (BOOL)contains:(NSString *)string {
    
    if (string) {
        NSRange range = [self rangeOfString:string];
        return (range.location != NSNotFound);
        
    }else {
        return NO;
    }

}


+ (NSString *)truncateString:(NSString *) string toCharacterCount:(NSUInteger) count {
    
    NSRange range = { 0, MIN(string.length, count) };
    range = [string rangeOfComposedCharacterSequencesForRange: range];
    NSString *trunc = [string substringWithRange: range];
    
    if (trunc.length < string.length) {
        trunc = [trunc stringByAppendingString: @"..."];
    }
    
    return trunc;
    
} // truncateString

#pragma mark - URL Encoding and Decoding
- (NSString *)urlEncode {
    return [self urlEncodeUsingEncoding:NSUTF8StringEncoding];
}

- (NSString *)urlEncodeUsingEncoding:(NSStringEncoding)encoding {
    return (__bridge_transfer NSString *)CFURLCreateStringByAddingPercentEscapes(NULL,
                                                                                 (__bridge CFStringRef)self,
                                                                                 NULL,
                                                                                 (CFStringRef)@"!*'\"();:@&=+$,/?%#[]% ",
                                                                                 CFStringConvertNSStringEncodingToEncoding(encoding));
}

- (NSString *)urlDecode {
    return [self urlDecodeUsingEncoding:NSUTF8StringEncoding];
}

- (NSString *)urlDecodeUsingEncoding:(NSStringEncoding)encoding {
    return (__bridge_transfer NSString *)CFURLCreateStringByReplacingPercentEscapesUsingEncoding(NULL,
                                                                                                 (__bridge CFStringRef)self,
                                                                                                 CFSTR(""),
                                                                                                 CFStringConvertNSStringEncodingToEncoding(encoding));
}

#pragma mark - Date Format

- (NSDate *)dateFromFormat: (NSString *)formatter {

    //    debug(@"dateString %@",dateString);
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setTimeZone:[NSTimeZone timeZoneWithName:@"GMT"]];
    [dateFormatter setDateFormat:formatter];
    
    NSDate *dateFromString = [dateFormatter dateFromString:self];
    return dateFromString;
}

@end
