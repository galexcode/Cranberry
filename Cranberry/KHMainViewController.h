//
//  KHMainViewController.h
//  Cranberry
//
//  Created by Kevin Hwang on 12/22/13.
//  Copyright (c) 2013 Kevin Hwang. All rights reserved.
//

#import "KHFlipsideViewController.h"

@interface KHMainViewController : UIViewController <KHFlipsideViewControllerDelegate> {
    NSTimer *playerOneTimer;
    IBOutlet UILabel *playerOneTimerLabel;
}

@property (nonatomic, retain) UILabel *playerOneTimerLabel;

-(void)updateCounter:(NSTimer *)theTimer;
-(void)countdownTimer;


@end
