//
//  combination!.c
//  dataSturctureHW3
//
//  Created by Kate KyuWon on 4/27/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>
int size;
void combination(int n, int c, int combs[]){
    
    if(c == 0){
        int i;
        for(i=0; i<size; i++){
            printf("%d ",combs[i]);
        }
        printf("\n");
        return;
    }
    if(n==0)
        return;
    
    combs[c-1] = n;
    
    combination(n-1, c-1, combs);
    combination(n-1, c, combs);
}

int main(void){
    int n;
    int i=1;
    scanf("%d" , &n);
    for(i=1;i<=n;i++){
        int arr[i];
        size = i;
        combination(n, i, arr);
    }
}