//
//  main.m
//  DateList
//
//  Created by Kate KyuWon on 4/22/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        NSDate *now =[NSDate date];
        NSDate *tommorrow = [now dateByAddingTimeInterval:24.0*60.0*60.0];
        NSDate *yesterday = [now dateByAddingTimeInterval: - 24.0*60.0*60.0];
        
        NSArray *dateList = [NSArray arrayWithObjects: now, tommorrow, yesterday, nil];
        
        NSLog(@"There are %lu dates", [dateList count]);
        
        NSLog(@"The first date is %@", [dateList objectAtIndex:0]);
        NSLog(@"The third date is %@", [dateList objectAtIndex:2]);
        
        
        
        for(NSDate *d in dateList){
            NSLog(@"Here is the date: %@", d);
        }
        
        
    }
    return 0;
}
