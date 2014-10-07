//
//  SAMViewController.m
//  SAMCategory
//
//  Created by MilanPanchal on 03/09/14.
//  Copyright (c) 2014 Pantech. All rights reserved.
//

#import "SAMViewController.h"
#import "Categories.h"
#import "SAMUtility.h"

@interface SAMViewController ()

@end

@implementation SAMViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    self.view.backgroundColor = [UIColor grayColor];
    
    UIButton *btn1 = [[UIButton alloc] initWithFrame:CGRectMake(0, 0, 300, 100)];
    [btn1 setTitle:@"Border Color" forState:UIControlStateNormal];
    [btn1 setCenter:self.view.center];
    btn1.layer.borderWidth = 5.0f;
    
    [self.view addSubview:btn1];

    
    [btn1 roundedCornersOnAllSideWithRadious:10];
    
    
    UIButton *btn = [[UIButton alloc] initWithFrame:CGRectMake(0, 0, 300, 100)];
    [btn setTitle:@"Border Color" forState:UIControlStateNormal];
    btn.layer.borderWidth = 5.0f;
    btn.layer.cornerRadius = 10;
    [self.view addSubview:btn];
 
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
