//
//  SpotBook.m
//  NYCFunSpots
//
//  Created by joy on 8/21/15.
//  Copyright (c) 2015 Grandiose. All rights reserved.
//

#import "SpotBook.h"


@implementation SpotBook

- (instancetype)init
{
    self = [super init];
    if (self) {
           _spots = [[NSArray alloc] initWithObjects:@"The Highline", @"CBGBs", @"The Flatiron Building", @"Museum Of Moving Images", @"The Cloisters", @"The Knitting Factory", @"The Elevated Acre", nil];
    }
    return self;
}

- (NSString *) randomSpot{
    int random = arc4random_uniform((int)self.spots.count);
    
    return [self.spots objectAtIndex:random];
    
}


@end
