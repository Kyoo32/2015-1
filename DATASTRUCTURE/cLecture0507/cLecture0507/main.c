//
//  main.c
//  cLecture0507
//
//  Created by Kate KyuWon on 5/7/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    char str1[20] = "1234567890";
    char str2[20];
    char str3[5];
    
    
    strcpy(str2, str1);
    puts(str2);
    strncpy(str3, str1, sizeof(str3)-1);
    puts(str3);
    
    
    int c = 'f';
    int ch2; ///-1 (
    fputc(c, stdout);
    
    while( (ch2 = getchar() )!= -1){
     //   fflush(stdout);
        putchar(ch2);
    }
    
    
    
    char buffer[5];
    
    gets(buffer);
    puts(buffer);
    
    int buflen = strlen(buffer);
    printf("strlen(buffer) : %d \n",  buflen );
    
    
    return 0;
}
