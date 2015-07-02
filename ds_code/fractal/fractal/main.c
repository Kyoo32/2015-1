//
//  main.c
//  fractal
//
//  Created by Kate KyuWon on 5/28/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>

void  drawTree(int n){
    if( n ==0 );
    else{
        left(1);
        forword(1);
        drawTree(n-1);
        back(n);
        right(1);
        
        right(1);
        forword(1);
        drawTree(n-1);
        back(n);
        left(1);
    }
}

int main(int argc, const char * argv[]) {
    
    drawTree(5);
    
    
    
    
    return 0;
}
