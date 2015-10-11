//
//  main.c
//  cStudy0430
//
//  Created by Kate KyuWon on 4/30/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>

struct rgb{
    int red;
    int green;
    int blue;
};

struct rgb replication (struct rgb);


int main(int argc, const char * argv[]) {
    
    const struct rgb tree = {0, 255, 0};
    
    struct rgb tree2 = replication(tree);
    
    
    printf(" tree 1 : (%3d,%3d,%3d)\n", tree.red, tree.green, tree.blue);
    printf(" tree 2 : (%3d,%3d,%3d)\n", tree.red, tree.green, tree.blue);
    
    
    return 0;
}


struct rgb replication(struct rgb object){
    
    return object;
}
