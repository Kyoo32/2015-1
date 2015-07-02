//
//  combination2.c
//  dataSturctureHW3
//
//  Created by Kate KyuWon on 4/28/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int size;
void combination(int n, int c, int combs[], char*string);
char showCharWithIndex(int i, char*string);

int main(void){
    
    char string[100];
    puts("put a string");
    scanf("%s", string);
    
    int n = 0;
    while(string[n]!=0) n++;
    int i = 1;
    
    for(i=1;i<=n;i++){
        int arr[i];
        size = i;
        combination(n, i, arr, string);
    }
    
}

/*
 *******************************************************************
 * combination :  print all combination set, if n is number of set *
 *                   and c is number of subset                     *
 *******************************************************************
 */
void combination(int n, int c, int combs[], char*string){
    
    if(c == 0){
        int i;
        for(i=0; i<size; i++){
            printf("%c ",showCharWithIndex(combs[i]-1, string));
        }
        printf("\n");
        return;
    }
    if(n==0)
        return;
    
    combs[c-1] = n;
    
    combination(n-1, c-1, combs, string);
    combination(n-1, c, combs, string);
}

/*
 *****************************************************************
 * showCharWithIndex: return a character in the index of string  *
 *****************************************************************
 */
char showCharWithIndex(int i, char*string){
    char *temp= string;
    
    return temp[i];
}

