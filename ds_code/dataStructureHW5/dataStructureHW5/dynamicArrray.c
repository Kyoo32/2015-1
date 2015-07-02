//
//  main.c
//  dataStructureHW5
//
//  Created by Kate KyuWon on 5/5/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int** make2DArray(int n, int m);
void free2DArray(int **, int n);
void fulfil2DArray(int**, int n, int m);
void print2DArray(int**, int rowNum, int colNum);


int main(int argc, const char * argv[]) {
    
    int **testArr1;
    testArr1 = make2DArray(1, 1);
    fulfil2DArray(testArr1, 1, 1);
    print2DArray(testArr1, 1, 1);
    
    puts("--------");

    int **testArr2;
    testArr2 = make2DArray(1, 2);
    fulfil2DArray(testArr2, 1, 2);
    print2DArray(testArr2, 1, 2);
    
    puts("--------");
    
    int **testArr3;
    testArr3 = make2DArray(2, 1);
    fulfil2DArray(testArr3, 2, 1);
    print2DArray(testArr3, 2, 1);
    
    puts("--------");

    int **testArr4;
    testArr4 = make2DArray(5, 5);
    fulfil2DArray(testArr4, 5, 5);
    print2DArray(testArr4, 5, 5);
    
    puts("--------");
    
    int **testArr5;
    testArr5 = make2DArray(6, 10);
    fulfil2DArray(testArr5, 6, 10);
    print2DArray(testArr5, 6, 10);
    
    free2DArray(testArr1, 1);
    free2DArray(testArr2, 1);
    free2DArray(testArr3, 2);
    free2DArray(testArr4, 5);
    free2DArray(testArr5, 6);
    
    puts("--------");
    puts("--------");

    
    return 0;
}


/********************************************************
 * make2DArray : allocate memory of two dimension array *
 *               array is n * m                         *
 ********************************************************/
int** make2DArray(int n, int m){
    
    int **arr;
    int id=0;
    arr = (int**)(malloc( sizeof(int*) * n ));
    
    for(id=0; id < n; id++){
        
        arr[id] = (int*)(malloc( sizeof(int) * m ) );
    }
    
    return arr;
}

/*************************************************************
 * free2DArray : free memory of two dimension array allocated*
 *************************************************************/
void free2DArray(int **arr, int n){
    int i = 0;
    
    for(i=0; i < n; i++){
        free(arr[i]);
    }
    
    free(arr);
}

/********************************************************
 * fulfil2DArray : assign value of two dimension array  *
 *                 arr[i][j] = i * n + j                *
 ********************************************************/
void fulfil2DArray(int**arr, int n, int m){
    int i=0, j=0;
    
    for(i=0; i<n; i++){
        for(j=0; j<m;j++){
            arr[i][j] = i * n + j;
        }
    }
}

/*********************************************************
 * print2DArray : print the value of two dimension array *
 *********************************************************/
void print2DArray(int**ptr, int rowNum, int colNum){
    int i=0, j=0;
   
    for(i=0; i<rowNum ; i++){
        
        for(j=0; j<colNum; j++){
            
            printf("%3d ", ptr[i][j]);
            
        }
        printf("\n");
    }
}
