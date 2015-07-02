//
//  Ackerman.c
//  dataSturctureHW3
//
//  Created by Kate KyuWon on 5/3/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>


int ackermanRecur(int m, int n);
//int ackermanIter(int m, int n);

int main(void){
    
    printf("%3d", ackermanRecur(4, 0));
    
    return 0;
}


int ackermanRecur(int m, int n){
    if(m==0){
        return n+1;
    }
    if(n==0){
        return ackermanRecur(m-1, 1);
    }
    else{
        return ackermanRecur(m-1, ackermanRecur(m, n-1));
    }
}

//int ackermanIter(int m, int n){
//    
//    if(m==0) return n+1;
//    
//    if(n==0) {
//        if(m-1==0) return n+1;
//    }
//
//}