//
//  Groceries.m
//  DateList
//
//  Created by Kate KyuWon on 4/22/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(void){
    @autoreleasepool {
        NSString *a = [NSString string "mellon"];
        NSString *b = [NSString stringWithString:"milk" length:5];
        NSString *c = [NSString stringWithString:"egg" length:4];
        
        NSArray *food = [NSArray arrayWithObjects:a, b,c, nil];
        NSMutableArray *grocery = [NSMutableArray arrayWithArray:food];
        
        for(NSString *f in grocery){
            NSLog(@"%@ is available", f);
        }
        
        
    }
    return 0;
}