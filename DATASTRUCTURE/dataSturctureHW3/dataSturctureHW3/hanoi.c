//
//  hanoi.c
//  dataSturctureHW3
//
//  Created by Kate KyuWon on 4/28/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>

/************************************************
 * hanoi : show the sequence of hanoi circle n  *
 *         moving first column to third column  *
 ************************************************/

void hanoi(int n, char departure[], char stopover[], char destination[]){
    if(n==1)
        printf("board%2d move %s -> %s\n", n, departure, destination);
    else{
        hanoi(n-1, departure, destination , stopover);
        printf("board%2d move %s -> %s\n", n, departure, destination);
        hanoi(n-1, stopover, departure, destination);
    }
}

int main (void){
    int n = 64; //n is the number of hanoi circles
    
    hanoi(n, "A", "B", "C");
    
    return 0;
}