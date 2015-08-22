//
//  SpotBook.h
//  NYCFunSpots
//
//  Created by joy on 8/21/15.
//  Copyright (c) 2015 Grandiose. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SpotBook : NSObject

@property (strong, nonatomic) NSArray *spots;

- (NSString *) randomSpot;

@end
