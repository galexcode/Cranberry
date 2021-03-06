//
//  KHMainViewController.m
//  Cranberry
//
//  Created by Kevin Hwang on 12/22/13.
//  Copyright (c) 2013 Kevin Hwang. All rights reserved.
//

#import "KHMainViewController.h"

@interface KHMainViewController ()

@end

@implementation KHMainViewController

@synthesize playerOneTimerLabel;
@synthesize startTimer;

int hours, minutes, seconds;
int secondsLeft;

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    playerOneTimer = nil;
}

- (void)updateCounter:(NSTimer *)theTimer {
    if (secondsLeft > 0) {
        secondsLeft --;
        hours = secondsLeft / 3600;
        minutes = (secondsLeft % 3600) / 60;
        seconds = (secondsLeft % 3600) % 60;
        playerOneTimerLabel.text = [NSString stringWithFormat:@"%02d:%02d:%02d", hours, minutes, seconds];
    }
    else {
        secondsLeft = 16925;
    }
}

- (IBAction)countdownTimer:(UIButton *)sender {
    if (playerOneTimer != nil) {
        [playerOneTimer invalidate];
    }
    
    secondsLeft = hours = minutes = seconds = 0;
    playerOneTimer = [NSTimer scheduledTimerWithTimeInterval:0.1f target:self selector:@selector(updateCounter:) userInfo:nil repeats:YES];

}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (BOOL)shouldAutorotate {
    return NO;
}

- (NSUInteger)supportedInterfaceOrientations {
    return UIInterfaceOrientationMaskPortrait + UIInterfaceOrientationMaskPortraitUpsideDown;
}

#pragma mark - Flipside View

- (void)flipsideViewControllerDidFinish:(KHOptionViewController *)controller
{
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    if ([[segue identifier] isEqualToString:@"showAlternate"]) {
        [[segue destinationViewController] setDelegate:self];
    }
}

@end
