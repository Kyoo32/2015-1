//
//  exam2.c
//  cStudyDynaAlloc
//
//  Created by Kate KyuWon on 5/14/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int arraysize = 5;
    int id =0;
    int userInput = 0;
    int* array;
    array = (int*) malloc( sizeof(int)*arraysize );
    
    while(1){
        
        printf("Input integer: ");
        scanf("%d", &userInput);

        
        if(userInput == -1){
            int i=0;
            
            for(i=0; i < id ; i++){
                printf("%d", array[i]);
            }
            printf("\n");
            
            
            free(array);
            return 0;
        }
        else{
            
            arraysize = (int)sizeof(array) / sizeof(int);
            
            if(id < arraysize) {
                array[id] = userInput;
            }
            else{
                array = (int*)realloc( array, arraysize + 3 );
                array[id] = userInput;
            }
            
            id++;
            
        }
        
    }
   
}