//
//  main.m
//  TimeAfterTime
//
//  Created by Kate KyuWon on 4/21/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    
    @autoreleasepool {
       /*
        NSDate *now = [NSDate date];
        NSLog(@"The new date lives at %p", now);
        NSLog(@"The new date lives at %@", now);
        double seconds = [now timeIntervalSince1970];
        NSLog(@"It has been %f seconds since the start of 1970", seconds);
        
        */
        
        NSDateComponents *comps = [[NSDateComponents alloc] init];
        [comps setYear: 1994];
        [comps setMonth: 3];
        [comps setDay: 2];
        [comps setHour: 10];
        [comps setMinute: 58];
        
        NSCalendar *g = [[NSCalendar alloc]initWithCalendarIdentifier:NSGregorianCalendar];
        NSDate *dateOfBirth = [g dateFromComponents:comps];
        
        NSDate *now = [NSDate date];
        NSLog(@"My birthday is %d,%d,%d", comps.year, comps.month, comps.day);
        
        double d = [now timeIntervalSinceDate:dateOfBirth];
        
        NSLog(@"It has beem %.2f seconds after my birth", d);
        
    }
    return 0;
}
