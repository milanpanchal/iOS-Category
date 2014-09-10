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
#import "UIView+Additional.h"
#import "UIApplication+Additional.h"

@interface SAMViewController ()

@end

@implementation SAMViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    self.view.backgroundColor = [UIColor colorWithHexString:@"#2ecc71"];
    
    NSLog(@"%@",[[UIApplication sharedApplication] documentsDirectoryURL]);
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
