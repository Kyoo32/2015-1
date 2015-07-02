//
//  combination.c
//  dataSturctureHW3
//
//  Created by Kate KyuWon on 4/24/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>

void startCombi(int [], int size);
void printCombi(int list[], int size, int i);

int main(void){
    
    int list[]={1, 2,3};
    int nSize = ((int)sizeof(list)/sizeof(int));
    
    startCombi(list, nSize);
    
    
    return 0;
    
}

void startCombi(int list[], int size){
    int i;
    for(i=size; i>0; i--){
        printCombi(list, size,i);
    }
}

void printCombi(int list[], int size, int i){
    if(i==0) {
        printf("%3d\n", list[size]);
        return;
    }
    if(size == i){
        int j=0;
        printf("#");
        for(j=0;j<size;j++){
            printf("%2d", list[j]);
        }
        puts("");
        return;
    }
    
    else if(size!=i){
        
            printCombi(list, size-1, i);
            printf("*%2d", list[i]);
            printCombi(list, size-1, i-1);
        

    }
    

}

