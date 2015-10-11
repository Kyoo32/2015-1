//
//  boolean.c
//  dataSturctureHW3
//
//  Created by Kate KyuWon on 4/27/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>
#include "dataStructureHW3.h"


int main(void){
    int *ptr;
    int boolean;
    puts("how many boolean valuable? ");
    scanf("%d", &boolean);
    
    allocList(boolean, ptr);
    showBooleanCombi(ptr, 0, boolean-1);
    
    freeList(ptr);
    
    return 0;
}

/*
 *******************************************************************
 * showBooleanCombi : show all possible set of n boolean valuables *
 *******************************************************************
*/
void showBooleanCombi(int list[], int startId, int endId){
    int id = startId;
    
    if(id>endId){
        printf("< ");
        for(id=0;id<=endId;id++){
            if(list[id]==0)
                printf("False ");
            else
                printf("True ");
        }
        printf(">\n");
        return;
    }
    
    else{
            list[id]=0;
            showBooleanCombi(list,startId+1,endId);
            list[id]=1;
           showBooleanCombi(list, startId+1, endId);
    }
    
    
}