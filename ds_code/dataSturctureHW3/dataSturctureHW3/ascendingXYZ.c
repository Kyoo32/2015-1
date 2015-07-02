//
//  ascendingXYZ.c
//  dataSturctureHW3
//
//  Created by Kate KyuWon on 4/28/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>

void printInAscendingOrder(int [], int );
void selectionSort(int*arr, int size);
void swap (int *x, int *y);

int main (void){
    
    int value[3] = {0};
    int size =( (int) sizeof(value) / sizeof(int) );
    
    puts("enter value of X, Y, Z");
    scanf("%d %d %d", value, value+1, value+2);
    
    printInAscendingOrder(value, size);
    
    return 0;
}
/*
 ***************************************************************
 * printInAscendingOrder : sort values in array                *
 *                         by selectionsort and print array    *
 ***************************************************************
 */
void printInAscendingOrder(int arr[], int size){
    int i=0;
    selectionSort(arr, size);
    
    
    printf("In ascending order: ");
    for(i=0; i<size ; i++){
        printf("%2d", arr[i]);
    }
    puts("");
    
    return;
    
}
/*
 *********************************************************
 * selectionSort : sort values in arr by selectionsort   *
 *********************************************************
 */

void selectionSort(int*arr, int size){
    int i = 0, j=0;
    int minValuePos =0;
    
    if(arr == NULL || size <= 0) return;
    for(i=0; i<size ;i++){
        minValuePos = i;
        for(j=i;j<size;j++) {
            if(arr[j]<arr[minValuePos]) minValuePos=j;
        }
        swap(&arr[i], &arr[minValuePos]);
    }
    
    return ;
}

/*
 **************************************
 * swap : exchage the value x and y   *
 **************************************
 */
void swap (int *x, int *y){
    
    if(x == NULL || y== NULL) return;
    
    int temp = *x;
    *x = *y;
    *y= temp;
    
    return ;
}
