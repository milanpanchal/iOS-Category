//
//  SAMViewController.m
//  SAMCategory
//
//  Created by MilanPanchal on 03/09/14.
//  Copyright (c) 2014 Pantech. All rights reserved.
//

#import "SAMViewController.h"

@interface SAMViewController ()

@end


@implementation SAMViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    self.view.backgroundColor = [UIColor grayColor];
    
    UIColor *fromColor = [UIColor colorWithHexString:@"#1F1F1F"];
    UIColor *toColor = [UIColor colorWithHexString:@"#CC3737"];
    
    _gradientLable.textColor = [UIColor gradientFromColor:fromColor
                                                  toColor:toColor
                                               withHeight:_gradientLable.height];

    
    
    NSString *myString = @"abcdefghijklmnopqrstuvwxyz";
    NSLog(@"Reverse String %@",[myString reverseString]);
    
    NSDateComponents *components = [[NSCalendar currentCalendar] components:DATE_COMPONENTS fromDate:[NSDate date]];

    NSInteger day = [components day];
    NSInteger month = [components month];
    NSInteger year = [components year];

    debug(@"day %ld, month %ld, year %ld",(long)day,(long)month,(long)year);
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
