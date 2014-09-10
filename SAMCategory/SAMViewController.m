//
//  SAMViewController.m
//  SAMCategory
//
//  Created by MilanPanchal on 03/09/14.
//  Copyright (c) 2014 Pantech. All rights reserved.
//

#import "SAMViewController.h"
#import "UIColor+Additional.h"
#import "UIAlertView+Additional.h"
#import "NSDate+Additional.h"

@interface SAMViewController ()

@end

@implementation SAMViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    self.view.backgroundColor = [UIColor colorWithHexString:@"#2ecc71"];
    
    UIAlertView *alertView = [[UIAlertView alloc] initWithTitle:@"Sample Alert"
                                                        message:@"This alert uses a block callback instead implementing the super annoying delegate protocol that would normally be required just to handle a simple button click in an alert such as this."
                                                       delegate:nil
                                              cancelButtonTitle:@"Cancel"
                                              otherButtonTitles:@"OK", @"OK 2", nil];
    
    [alertView showWithCompletion:^(UIAlertView *alertView, NSInteger buttonIndex) {
        
        NSLog(@"Alert view button index %d",buttonIndex);
        if (alertView.cancelButtonIndex == buttonIndex) {
            NSLog(@"Cancel Button");
            
        }else if (alertView.firstOtherButtonIndex == buttonIndex) {
            NSLog(@"OK");
            
        }else if (alertView.firstOtherButtonIndex == buttonIndex+1) {
            NSLog(@"OK 2");
        }

    }];
    
    NSLog(@"Today %@", [NSDate date]);
    NSLog(@"HOUR %d", [[NSDate date] hour]);
    NSLog(@"HOUR %d", [[NSDate dateYesterday] distanceInDaysToDate:[NSDate date]]);
    

}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
