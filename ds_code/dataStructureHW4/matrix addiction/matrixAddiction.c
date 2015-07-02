//
//  main.c
//  matrix addiction
//
//  Created by Kate KyuWon on 4/30/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//
#define MAX_SIZE 3
#include <stdio.h>

int count = 0;

void addMatrix(int a[][MAX_SIZE], int b[][MAX_SIZE], int c[][MAX_SIZE], int rows, int colume);
int main(int argc, const char * argv[]) {
    int a[][3] = {1, 2, 1, 3, 4, 3};
    int b[][3] = {3, 2, 1, 6, 5, 5};
    int result[2][3];
    
    addMatrix(a, b, result , 2, 3);
    
    printf("All step count is %d.\n", count);
    
       return 0;
}
/**************************************
 * addMatrix : add two matrix         *
 **************************************
 */

void addMatrix(int a[][MAX_SIZE], int b[][MAX_SIZE], int c[][MAX_SIZE], int rows, int columns){
    int i, j;
    
    for(i=0;i<rows; i++){
        count += 1;
        for(j=0; j<columns;j++){
            c[i][j] = a[i][j] + b[i][j];
            count += 2;
        }
        count += 1;
    }
    count +=1;
}