//
//  dataStructureHW3.h
//  dataSturctureHW3
//
//  Created by Kate KyuWon on 4/27/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#ifndef dataSturctureHW3_dataStructureHW3_h
#define dataSturctureHW3_dataStructureHW3_h
#include <stdlib.h>

int honor(int[], int, int);


void allocList(int n, int *ptr){
    ptr = (int*)malloc(sizeof(int)*n);
}

void freeList(int *ptr){
    free(ptr);
}


char showAlphabetInN(int i){
    if(i>26) return -1;
    return "abcdefghijklmnopqrstuvwxyz"[i];
}


void showBooleanCombi(int list[], int startId, int endId);
void showPowerset(int list[], int startID, int endId);





#endif
