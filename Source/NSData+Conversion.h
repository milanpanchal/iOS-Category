//
//  NSData+Conversion.h
//  PushChat
//
//  Created by Swapnil Godambe on 29/03/13.
//  Copyright (c) 2013 Medknow Publications. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData_Conversion : NSObject
 
@end


@interface NSData (NSData_Conversion)

#pragma mark - String Conversion
- (NSString *)hexadecimalString;

@end