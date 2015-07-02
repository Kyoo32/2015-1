//
//  timeZone.m
//  TimeAfterTime
//
//  Created by Kate KyuWon on 4/21/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#import <Foundation/Foundation.h>

int main (void){
    @autoreleasepool {

    NSTimeZone *tz= [NSTimeZone systemTimeZone];
       
    NSLog(@"timezone: %@", tz);
    
        BOOL isDST = [tz isDaylightSavingTime];
        if (isDST)
            NSLog(@"\n Daylight saving");
        else
            NSLog(@"\n Not in Daylight saving");
        
    }
    
    
    
    NSHost *com = [NSHost currentHost];
    NSString *host = [com localizedName];
    
    NSLog(@"the name is %@", host);
    
    

    
    return 0;
}