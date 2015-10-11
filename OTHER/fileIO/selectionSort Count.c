//
//  selectionSort.c
//  dataStructureHW1
//
//  Created by Kate KyuWon on 4/21/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//
#define MAX_SIZE 10000
#include <stdio.h>
#include <time.h>
#include "Header.h"
#include "Resource.h"

void selectionSort(int*, int);
void swap(int*, int*);
void printArr(int*, int);

int main (void){
    //경우1 테스트
    clock_t start, end;
    double duration1=0;
    int list1[] ={15, 11, 9, 8, 7, 5, 3, 2};
    int size = ((int)sizeof(list1)/sizeof(int));
    
    printArr(list1, size);
    start= clock();
    selectionSort(list1, size);
    end= clock();
    printArr(list1, size);
    
    duration1 = ((double)end-start)/CLOCKS_PER_SEC;
    
    printf("time : %f \n\n", duration1);
    
    int i, n, step = 100;
    int a[MAX_SIZE];
    double duration;
    
	FILE* time = fopen("time.xls", "wb");
	if (time == NULL){
		puts("Write Error");
		return 0;
	}
	char temp[100];

	for(n=0; n<=MAX_SIZE; n+=step){
        
        for(i=0;i<n;i++) a[i] = n - i;
        start = clock();
        selectionSort(a, n);
        end = clock();
        
        duration = ((double) (end - start))/CLOCKS_PER_SEC;
        
        sprintf(temp,"time %d : %f\n", n, duration);
		fputs(temp, time);
	}
    
	fclose(time);

    return 0;
}

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



void swap (int *x, int *y){
    
    if(x == NULL || y== NULL) return;
    
    int temp = *x;
    *x = *y;
    *y= temp;
    
    return ;
}

void printArr(int *arr, int size){
    if(arr == NULL || size <= 0) return;
    
    int i=0;
    for(i=0; i<size; i++){
        printf("%3d", arr[i]);
    }
    printf("\n\n");
    
    return;
}