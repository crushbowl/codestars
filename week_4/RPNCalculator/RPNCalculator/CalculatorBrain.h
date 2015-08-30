//
//  CalculatorBrain.h
//  RPNCalculator
//
//  Created by joy on 8/27/15.
//  Copyright (c) 2015 Grandiose. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

-(void)pushOperand:(double)operand;
-(double) performOperation:(NSString *)operation;

@end
