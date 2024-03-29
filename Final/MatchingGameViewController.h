//
//  MatchingGameViewController.h
//  Test 1b
//
//  Created by Lewis Cooper on 2/27/14.
//  Copyright (c) 2014 Lewis Cooper. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CardMatchingGame.h"


@interface MatchingGameViewController : UIViewController{
    CardMatchingGame *cardGame;
}

@property (weak, nonatomic) IBOutlet UILabel *scoreLabel;

@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *cardButtons;

- (IBAction)buttonPressed:(UIButton *)sender;

@end
