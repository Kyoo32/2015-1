//
//  main.c
//  cLecture0430
//
//  Created by Kate KyuWon on 4/30/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>



typedef struct person{
    char name[30];
    char phone[30];
    int age;
} Person;

typedef struct position {
    int x;
    int y;
}Position;

typedef union positionU{
    double x;
    int y;
} PositionU;



typedef union coco{
    int a;
    
    char d[4];
}CoCo;



int main(int argc, const char * argv[]) {
   
/*
    int i=0;
    int j=0;
    int num=1;
    
    int **arrptr = NULL;
    arrptr = (int**)( malloc (sizeof(int*) *10) );
    
    if(arrptr == NULL){
        return -1;
    }
    
    
    for(i=0; i<10; i++){
        
        arrptr[i] = (int*)( malloc(sizeof(int)*10) );
        if(arrptr[i] == NULL){
            for(j=0; j<i ; i++){
                free(arrptr[j]);
            }
            free(arrptr);
        return -1;
        }
    }
    
    for(i=0, num=1; i<10; i++){
        for(j=0; j<10;j++){
            *(*(arrptr+i)+j)=num;
            num++;
        }
    }
    
    
    for(i=0, num=1; i<10; i++){
        for(j=0; j<10;j++){
            printf("%d\n", *(*(arrptr+i)+j) );
        }
    }
    
    for(i=0; i<10; i++){
        free(arrptr[i]);
    }
    
    free(arrptr);
    
    
    */
    
    /*
    int i=0;
    int j=0;
    struct person **ptr;
    
    ptr = (Person**)(malloc( sizeof(Person*) *3 ));
    
    if(ptr == NULL) return -1;
    
    for(i=0; i<3; i++){
        
    ptr[i] = (struct person*)(malloc(sizeof(struct person)));
        
        if(ptr[i]==NULL){
            for(j=0; j<i; j++){
                free(ptr[i]);
            }
            free(ptr);
            return -1;
        }
    }
    
    strcpy(ptr[0]->name, "이승기");
    strcpy(ptr[0]->phone, "010-1234-5678");
    ptr[0]->age = 35;
    
    printf(" %s\n%s\n%d\n", ptr[0]->name, ptr[0]->phone, ptr[0]->age);
    
    
    for(i=0; i<3; i++){
        
        free(ptr[i]);
    }
    
    free(ptr);
     
     
     */
    
    Position p = {3, 4};
    //Position * ptr = &p;
    
    PositionU u= {4.2};
    
    printf("%d\n%d\n", sizeof(Position), sizeof(PositionU));
    
    printf("%p / %p / %p / %p", p.x, p.y, u.x, u.y);
    
    
    
    return 0;
}
