//
//  MasterDetailExampleDetailViewController.h
//  MasterDetailExample
//
//  Created by Basilio García Castillo on 6/1/14.
//  Copyright (c) 2014 Basilio García. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MasterDetailExampleDetailViewController : UIViewController <UISplitViewControllerDelegate>
@property (strong, nonatomic) IBOutlet UIWebView *webView;

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
