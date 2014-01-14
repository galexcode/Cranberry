//
//  KHMainViewController.h
//  Cranberry
//
//  Created by Kevin Hwang on 12/22/13.
//  Copyright (c) 2013 Kevin Hwang. All rights reserved.
//

#import "KHOptionViewController.h"

@interface KHMainViewController : UIViewController <KHOptionViewControllerDelegate> {
    NSTimer *playerOneTimer;
    IBOutlet UILabel *playerOneTimerLabel;
}

@property (nonatomic, retain) UILabel *playerOneTimerLabel;
@property (nonatomic, retain) IBOutlet UILabel *startTimer;

-(void)updateCounter:(NSTimer *)theTimer;
-(IBAction)countdownTimer:(UIButton *)sender;


@end
