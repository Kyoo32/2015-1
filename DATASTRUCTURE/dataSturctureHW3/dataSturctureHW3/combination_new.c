//
//  combination_new.c
//  dataSturctureHW3
//
//  Created by Kate KyuWon on 5/28/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "dataStructureHW3.h"

void combination(char*arr , int n, int k){
    int i = 0;
    
     if(k==1)
        for(i= 0; i < n; i++)
            printf("%c", *(arr+i));
   
    
    
    
    
    
}

int main(void){
    char array[] = { 'a', 'b' , 'c' };
    int len = (int) sizeof(array) / sizeof(char);
    

    combination(array, len, 1);
    
    
    return 0;
}