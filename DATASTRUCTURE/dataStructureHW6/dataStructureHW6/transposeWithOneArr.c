//
//  main.c
//  dataStructureHW6
//
//  Created by Kate KyuWon on 5/7/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct term{
    int rid;
    int cid;
    int value;
} term_t;


void printTerm(term_t[], int n);
void transpose(term_t a[], term_t b[]);
void fastTranspose(term_t a[], term_t b[]);

int main(int argc, const char * argv[]) {
  
    term_t a[9] = {{6,6,8}, {0, 0 ,15}, {0 , 3, 22}, {0 ,5, -15}, {1, 1, 11}, {1, 2, 3}, {2, 3, -6},{4, 0, 91},{5, 2, 28} };
    term_t b[9] = {0};
    
    term_t c[9] = {0};
    
    int n = ( (int)sizeof(a)/sizeof(term_t) );
    
    fastTranspose(a, c);
    
    puts("\n\nBefore Fast Transpose");
    printTerm(a, n);
    puts("\nAfter Fast Transpose");
    printTerm(c, n);
    
    
    return 0;
}

/*************************************************
 * transpose : transpose a and save it in b      *
 *************************************************/
void transpose(term_t a[], term_t b[]){
    
    int n, aId, bId, colId;
    b[0].rid = a[0].cid;
    b[0].cid = a[0].rid;
    b[0].value = a[0].value;
    n = a[0].value;
    
    if(n>0){
        bId = 1;
        for(colId = 0 ; colId < a[0].cid; colId++){
            for(aId = 1; aId <= n; aId++){
                if(a[aId].cid == colId){
                    b[bId].rid = a[aId].cid;
                    b[bId].cid = a[aId].rid;
                    b[bId].value = a[aId].value;
                    bId++;
                }
            }
        }
    }
    
    return;
}

/*************************************************
 * fastTranspose : transpose a and save it in b      *
 *************************************************/
void fastTranspose(term_t a[], term_t b[]){
    int startingPos[a[0].cid];
    int i, j, numCols = a[0].cid, numTerms = a[0].value;
    b[0].rid = a[0].cid;
    b[0].cid = a[0].rid;
    b[0].value = a[0].value;
    if(numTerms>0){
        for(i=0; i<numCols;i++){//initialize startingPos
            startingPos[i] = 0;
        }
        startingPos[0]=1;
        for(i=1; i<=numTerms;i++){
            startingPos[ (a[i].cid) +1]++;
        }
        for(i=1;i<numCols;i++){
            startingPos[i] += startingPos[i-1];
        }
        for(i=1; i<= numTerms; i++){
            j = startingPos[a[i].cid]++;
            b[j].rid = a[i].cid;
            b[j].cid = a[i].rid;
            b[j].value = a[i].value;
        }
    }
}

/*************************************************
 * printTrem : print term_t array whose row is n *
 *************************************************/
void printTerm(term_t term[], int n){
    int i=0;
    printf(" Id /rid /cid /value \n");
    for(i=0; i<n; i++){
       printf("%3d/%3d/%3d/%3d \n",i,term[i].rid,term[i].cid,term[i].value);
    }
    return;
}