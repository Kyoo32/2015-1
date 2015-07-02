//
//  main.c
//  Struct
//
//  Created by Kate KyuWon on 4/15/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct _tm{
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_month;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long tm_gmtoff;
    char *tm_zone;
}TM;


int main(int argc, const char * argv[]) {
    
    long secondsSince1979 = time(NULL);
    printf("It has been %ld seconds since 1970\n", secondsSince1979);
    
    
    TM now;
    localtime_r(&secondsSince1979, &now);
    printf("The time is %d:%d:%d\n", now.tm_hour, now.tm_min, now.tm_sec);
    
    
    
    
    
    return 0;
}
