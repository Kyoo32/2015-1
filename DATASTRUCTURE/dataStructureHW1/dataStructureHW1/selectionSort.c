//
//  selectionSort.c
//  dataStructureHW1
//
//  Created by Kate KyuWon on 4/21/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>
void selectionSort(int*, int);
void swap(int*, int*);
void printArr(int*, int);

int main (void){
    //경우1 테스트
    int list1[] ={10};
    int size = ((int)sizeof(list1)/sizeof(int));
    
    printArr(list1, size);
    selectionSort(list1, size);
    printArr(list1, size);
    
    //경우2 테스트
    int list2[] ={10, 3};
    size = ((int)sizeof(list2)/sizeof(int));
    
    printArr(list2, size);
    selectionSort(list2, size);
    printArr(list2, size);
    
    //경우3 테스트
    int list3[] ={20, 3, 1};
    size = ((int)sizeof(list3)/sizeof(int));
    
    printArr(list3, size);
    selectionSort(list3, size);
    printArr(list3, size);
    
    //경우4 테스트
    int list4[] ={3, 10};
    size = ((int)sizeof(list4)/sizeof(int));
    
    printArr(list4, size);
    selectionSort(list4, size);
    printArr(list4, size);
    
    //경우5 테스트
    int list5[] ={3, 10, 20};
    size = ((int)sizeof(list5)/sizeof(int));
    
    printArr(list5, size);
    selectionSort(list5, size);
    printArr(list5, size);
    
    
    
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