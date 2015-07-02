//
//  NSCalendar.m
//  TimeAfterTime
//
//  Created by Kate KyuWon on 4/21/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "NSCalendar.h"

int main(void){
    
    @autoreleasepool {
        
        NSDate *now = [[NSDate alloc] init];
        NSLog(@"The date is %@", now);
        
        double seconds = [now timeIntervalSince1970];
        NSLog(@"It has been %f seconds since the start fo 1970.", seconds);
        
        NSDate *later = [now dateByAddingTimeInterval:100000];
        NSLog(@"In 100,000 seconds it will be %@", later);
        
        NSCalendar *cal = [NSCalendar currentCalendar];
        NSUInteger day = [cal ordinalityOfUnit:NSCalendarUnitDay
                                        inUnit:NSCalendarUnitMonth
                                        forDate:now];
        
        NSLog(@"This is day %lu of the month", day);
        
    }
    
    return 0;
}