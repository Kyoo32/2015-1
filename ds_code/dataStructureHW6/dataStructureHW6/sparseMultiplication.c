//
//  sparseMultiplication.c
//  dataStructureHW6
//
//  Created by Kate KyuWon on 5/8/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>
typedef struct sparseMatrixt{
    int rid;
    int cid;
    int value;
} sparse_matrix_t;

void fastTranspose(sparse_matrix_t a[], sparse_matrix_t b[]);
void printTerm(sparse_matrix_t term[], int n);

int findEndIdWithEqualRowId(sparse_matrix_t * , int);
int vectorInnerProduct(sparse_matrix_t *, int, int , sparse_matrix_t *, int, int);

int main(void){
    
    sparse_matrix_t matrixA[9] = {{6,6,8}, {0, 0 ,15}, {0 , 3, 22}, {0 ,5, -15}, {1, 1, 11}, {1, 2, 3}, {2, 3, -6},{4, 0, 91},{5, 2, 28} };
    sparse_matrix_t matrixB[9] = { {6,6,8}, {0, 0, 15}, {0, 4, 91}, {1, 1, 11}, {2, 1, 3}, {2, 5, 28}, {3, 0, 22}, {3, 2, -6}, {5, 0, -15} };
    sparse_matrix_t matrixBT[9] = {0};
    sparse_matrix_t matrixC[65] ={0};
    
    fastTranspose(matrixB, matrixBT);
    
    int startEleIdOfA, endEleIdOfA;
    int startEleIdOfB, endEleIdOfB;
    int n=0;

    
    startEleIdOfA = 1;
    
    do{
        endEleIdOfA = findEndIdWithEqualRowId(matrixA, startEleIdOfA);
        
        startEleIdOfB = 1;
        do{
            endEleIdOfB = findEndIdWithEqualRowId(matrixBT, startEleIdOfB);
            
            matrixC[n].value = vectorInnerProduct(matrixA, startEleIdOfA, endEleIdOfA, matrixBT, startEleIdOfB, endEleIdOfB);
            matrixC[n].rid = matrixA[startEleIdOfA].rid;
            matrixC[n].cid = matrixBT[startEleIdOfB].rid;
            n++;

            startEleIdOfB = endEleIdOfB +1;
        } while(startEleIdOfB <= matrixB[0].value);
        
        startEleIdOfA = endEleIdOfA + 1;
    }while(startEleIdOfA <= matrixA[0].value);
    
    
    printTerm(matrixC, n-1);
    
    
}

/*********************************************************************
 * vectorInnerProduct : mutiply row of matrixA and column of matrixB *
 *********************************************************************/
int vectorInnerProduct(sparse_matrix_t *matrixA, int startOfA, int endOfA, sparse_matrix_t *matrixB, int startOfB, int endOfB){
    
    int value = 0;
    int aIdx, bIdx;
    
    aIdx = startOfA;
    bIdx = startOfB;
    
    while(aIdx <= endOfA && bIdx<=endOfB){
        if(matrixA[aIdx].cid == matrixB[bIdx].cid){
            value += matrixA[aIdx].value * matrixB[bIdx].value;
            aIdx++;
            bIdx++;
        }
        else if (matrixA[aIdx].cid < matrixB[bIdx].cid ) aIdx++;
        else bIdx++;
    }
    
    return value;
}

/*********************************************************************************
 * findEndIdWithEqualRowId : find the last row that same with given row's value  *
 *********************************************************************************/
int findEndIdWithEqualRowId(sparse_matrix_t *matrix , int startId){
    int Id = startId;
    
    do{
        Id++;
    } while(matrix[Id].rid == matrix[startId].rid && Id<=matrix[0].rid);
    
    return Id;
}



//refer to transpose.c
void fastTranspose(sparse_matrix_t a[], sparse_matrix_t b[]){
    int rowTerms[a[0].cid], startingPos[a[0].cid];
    int i, j, numCols = a[0].cid, numTerms = a[0].value;
    b[0].rid = a[0].cid;
    b[0].cid = a[0].rid;
    b[0].value = a[0].value;
    if(numTerms>0){
        for(i=0; i<numCols;i++){ //initialize rowTerms array
            rowTerms[i] =0;
        }
        for(i=1; i<=numTerms;i++){
            rowTerms[a[i].cid]++;
        }
        startingPos[0] = 1;
        for(i=1; i<numCols; i++){
            startingPos[i] = startingPos[i-1] + rowTerms[i-1];
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
void printTerm(sparse_matrix_t term[], int n){
    int i=0;
    printf(" Id /rid /cid /value \n");
    for(i=0; i<n; i++){
        printf("%3d/%3d/%3d/%3d \n",i,term[i].rid,term[i].cid,term[i].value);
    }
    return;
}
