//
//  powerset.c
//  dataSturctureHW3
//
//  Created by Kate KyuWon on 4/27/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>
#include "dataStructureHW3.h"
void showPowerset(int list[], int startID, int endId);

int main(void){
    int n=0;
    int list[100];
    
    puts("how many elements in alphabet set?");
    scanf("%d", &n);
  
    //allocList(n, list);
    
    showPowerset(list, 0, n-1);
    
    //freeList(list);
    return 0;
}
/*****************************************************************
 * showPowerset : show all possible subset of set consisted of   *
 *                  n elements                                   *
 *****************************************************************
*/
void showPowerset(int list[], int startID, int endId){
    int id=startID;
    
    if(id>endId){
        printf(" < ");
        for(id=0;id<=endId;id++){
            if(list[id]==1) printf("%2c ", showAlphabetInN(id));
            else continue;
        }
        printf(">\n");
        return;
    }
    
    else{
        list[id] = 0;
        showPowerset(list, startID+1, endId);
        list[id] = 1;
        showPowerset(list, startID+1, endId);
    }

}
