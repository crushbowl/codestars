//
//  ViewController.h
//  NYCFunSpots
//
//  Created by joy on 8/21/15.
//  Copyright (c) 2015 Grandiose. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SpotBook;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *funSpotLabel;
@property (strong, nonatomic) SpotBook *spotBook;


@end

