//
//  KHFlipsideViewController.h
//  Cranberry
//
//  Created by Kevin Hwang on 12/22/13.
//  Copyright (c) 2013 Kevin Hwang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KHFlipsideViewController;

@protocol KHFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(KHFlipsideViewController *)controller;
@end

@interface KHFlipsideViewController : UITableViewController

@property (weak, nonatomic) id <KHFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
