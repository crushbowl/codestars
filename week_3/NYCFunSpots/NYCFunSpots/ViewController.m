//
//  ViewController.m
//  NYCFunSpots
//
//  Created by joy on 8/21/15.
//  Copyright (c) 2015 Grandiose. All rights reserved.
//

#import "ViewController.h"
#import "SpotBook.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    self.spotBook = [[SpotBook alloc]init];
    
    self.funSpotLabel.text = [self.spotBook randomSpot];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)showFunSpot {
    
    self.funSpotLabel.text = [self.spotBook randomSpot];
}

@end
