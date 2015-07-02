//
//  mutableArray.m
//  DateList
//
//  Created by Kate KyuWon on 4/22/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(void){
    @autoreleasepool {
        NSDate *now = [NSDate date];
        NSDate *tomorrow = [now dateByAddingTimeInterval:24.0*60.0*60.0];
        NSDate *yesterday = [now dateByAddingTimeInterval:-24.0*60.0*60.0];
        
        NSMutableArray *dateList = [NSMutableArray  array];
        
        [dateList addObject:now];
        [dateList addObject:tomorrow];
        
        [dateList insertObject:yesterday atIndex:(0)];
        
        for (NSDate *d in dateList){
            NSLog(@"Here is a date : %@", d);
        }
        
        [dateList removeObject:yesterday];
        NSLog(@"now the first date is %@", [dateList objectAtIndex:0]);
        
    }
    
    
    return 0;
}