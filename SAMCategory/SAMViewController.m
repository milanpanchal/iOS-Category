//
//  SAMViewController.m
//  SAMCategory
//
//  Created by MilanPanchal on 03/09/14.
//  Copyright (c) 2014 Pantech. All rights reserved.
//

#import "SAMViewController.h"
#import "UILabel+Additional.h"
static NSString *cellIdenifier = @"cellIdenifier";

@interface SAMViewController ()<UITableViewDelegate,UITableViewDataSource> {

    NSArray *headerArray;
    NSArray *tableDataArray;
}

@end


@implementation SAMViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    self.view.backgroundColor = [UIColor grayColor];
    

    
    NSString *myString = @"abcdefghijklmnopqrstuvwxyz";
    NSLog(@"Reverse String %@",[myString reverseString]);
    
    NSDateComponents *components = [[NSCalendar currentCalendar] components:DATE_COMPONENTS fromDate:[NSDate date]];

    NSInteger day = [components day];
    NSInteger month = [components month];
    NSInteger year = [components year];

    debug(@"day %ld, month %ld, year %ld",(long)day,(long)month,(long)year);
 
    NSArray *categoryClasses = @[@"NSData",
                                 @"NSDate",
                                 @"NSObject",
                                 @"NSString",
                                 @"UIAlertView",
                                 @"UIApplication",
                                 @"UIColor",
                                 @"UIImage",
                                 @"UIView",
                                 @"UIViewController"];
    
    NSArray *macroArray = @[@"Convert Radians to degrees",
                       @"Convert degress to radians",
                       @"Predefine Date formats",
                       @"Convert NULL objects into nil",
                       @"Convert BOOL value into String",
                       @"Date/time Components",
                       @"debug log - Only in debug mode",
                       @"RGB/RGBA Color Macros",
                       @"Is device is iPhone or iPad",
                       @"Check iOS Version",
                       @"Invalidate Timer and more..."];

    NSArray *utilityArray = @[@"Get Unique ID - UUID",
                     @"Check: App running first time?",
                     @"Get local country name and code",
                     @"Get IP address",
                     @"Get free desk space",
                     @"Check: Camera availability"];
    
    
    headerArray = @[@"Category classes for...",@"Macros",@"Utility methods"];
    
    tableDataArray = @[categoryClasses, macroArray, utilityArray];
    [self.tblView registerClass:[UITableViewCell class] forCellReuseIdentifier:cellIdenifier];
    


}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return tableDataArray.count;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return [tableDataArray[section] count];
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:cellIdenifier forIndexPath:indexPath];
    
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:cellIdenifier];
    }
    

    cell.textLabel.text = tableDataArray[indexPath.section][indexPath.row];
    return cell;
}

- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section {

    return headerArray[section];
}



@end
