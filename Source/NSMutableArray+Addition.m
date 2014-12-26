//
//  NSMutableArray+Addition.m
//  SAMCategory
//
//  Created by MilanPanchal on 26/12/14.
//  Copyright (c) 2014 Pantech. All rights reserved.
//

#import "NSMutableArray+Addition.h"

@implementation NSMutableArray (Addition)

- (void)shuffle {

    NSUInteger count = [self count];
    
    for (NSUInteger i = 0; i < count; ++i) {
        NSUInteger remainingCount = count - i;
        NSUInteger exchangeIndex = i + arc4random_uniform((u_int32_t)remainingCount);
        [self exchangeObjectAtIndex:i withObjectAtIndex:exchangeIndex];
    }
}


@end
