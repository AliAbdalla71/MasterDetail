//
//  MasterDetailExampleMasterViewController.h
//  MasterDetailExample
//
//  Created by Basilio García Castillo on 6/1/14.
//  Copyright (c) 2014 Basilio García. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MasterDetailExampleDetailViewController;

@interface MasterDetailExampleMasterViewController : UITableViewController
@property (nonatomic, retain) NSArray *engineNames;
@property (nonatomic, retain) NSArray *engineAdresses;

@property (strong, nonatomic) MasterDetailExampleDetailViewController *detailViewController;

@end
