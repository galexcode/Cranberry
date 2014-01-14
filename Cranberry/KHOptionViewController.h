//
//  KHOptionViewController.h
//  Cranberry
//
//  Created by Kevin Hwang on 1/9/14.
//  Copyright (c) 2014 Kevin Hwang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KHOptionViewController;

@protocol KHOptionViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(KHOptionViewController *)controller;
@end

@interface KHOptionViewController : UITableViewController

@property (weak, nonatomic) id <KHOptionViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;


@end
