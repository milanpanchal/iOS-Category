//
//  NSData+Conversion.m
//  PushChat
//
//  Created by Swapnil Godambe on 29/03/13.
//  Copyright (c) 2013 Medknow Publications. All rights reserved.
//

#import "NSData+Conversion.h"

@implementation NSData_Conversion

@end


@implementation NSData (NSData_Conversion)

#pragma mark - String Conversion
- (NSString *)hexadecimalString {
    /* Returns hexadecimal string of NSData. Empty string if data is empty.   */
    
    const unsigned char *dataBuffer = (const unsigned char *)self.bytes;
    
    if (!dataBuffer)
        return [NSString string];
    
    NSUInteger          dataLength  = self.length;
    NSMutableString     *hexString  = [NSMutableString stringWithCapacity:(dataLength * 2)];
    
    for (int i = 0; i < dataLength; ++i)
        [hexString appendString:[NSString stringWithFormat:@"%02lx", (unsigned long)dataBuffer[i]]];
    
    return [NSString stringWithString:hexString];
}

@end
