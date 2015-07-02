//
//  honorLaw.c
//  dataSturctureHW3
//
//  Created by Kate KyuWon on 4/24/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>

int honor(int*, int * , int);

int main(void){
    
    int coefficient[] = { 0, 1, 1};
    int size = ((int)sizeof(coefficient)/sizeof(int));
    
    printf("The result of f(%d) is %2d\n", 2, honor(coefficient, coefficient+size-1, 2));
    
    return 0;
}


/*****************************************************************************************************
 * honor : evaluate a polynomial f(x). The first argument is an array pointer of coeffcient.         *
 *         The first element is the coefficient of x^0 , the second is of that of x^1 and so on.     *
 *         The second argument is the last address of the array. The last argument is the value of x.*
 *****************************************************************************************************/

int honor(int *coefficient,int *basePtr, int x){
    
    if( coefficient == basePtr ){
        return  (*coefficient);
    }
    else{
        return x * honor( coefficient+1 ,basePtr, x) + *coefficient;
    }
    
}