//
//  humanEqual.c
//  dataStructureHW5
//
//  Created by Kate KyuWon on 5/5/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define True 1
#define False 0

typedef struct{
    char name[10];
    int age;
    float salary;
} humanBeing_t;

int humansEqualByCallByValue(humanBeing_t, humanBeing_t);
int humansEqualByCallByReference(humanBeing_t*, humanBeing_t*);

int main(void){
    

    humanBeing_t man = { "apple", 10, 123.456 };
    humanBeing_t same = { "apple", 10, 123.456 };
    humanBeing_t differ1 = { "ms", 10, 123.456 };
    humanBeing_t differ2 = { "apple", 20, 123.456 };
    humanBeing_t differ3 = { "apple", 10, 567.890 };
    
    humanBeing_t *manPtr = &man;
    humanBeing_t *samePtr = &same;
    humanBeing_t *differ1Ptr = &differ1;
    humanBeing_t *differ2Ptr = &differ2;
    humanBeing_t *differ3Ptr = &differ3;
    
    if(humansEqualByCallByValue(man, same))
        printf("Two persons are equal\n");
    else{
        printf("Two persons are different\n");
    }
    
    if(humansEqualByCallByValue(man, differ1))
        printf("Two persons are equal\n");
    else{
        printf("Two persons are different\n");
    }
    
    if(humansEqualByCallByValue(man, differ2))
        printf("Two persons are equal\n");
    else{
        printf("Two persons are different\n");
    }
    
    if(humansEqualByCallByValue(man, differ3))
        printf("Two persons are equal\n");
    else{
        printf("Two persons are different\n");
    }
    
    
    puts("------------------");
    
    if(humansEqualByCallByReference(manPtr, samePtr))
        printf("Two persons are equal\n");
    else{
        printf("Two persons are different\n");
    }
    
    if(humansEqualByCallByReference(manPtr, differ1Ptr))
        printf("Two persons are equal\n");
    else{
        printf("Two persons are different\n");
    }
    
    if(humansEqualByCallByReference(manPtr, differ2Ptr))
        printf("Two persons are equal\n");
    else{
        printf("Two persons are different\n");
    }
    
    if(humansEqualByCallByReference(manPtr, differ3Ptr))
        printf("Two persons are equal\n");
    else{
        printf("Two persons are different\n");
    }
    
    
    
    return 0;
}


/****************************************************************************
 * humansEqualByCallbyValue : compare whether person1 is same with person2  *
 *                            by value                                      *
 ****************************************************************************/
int humansEqualByCallByValue(humanBeing_t person1, humanBeing_t person2){
    
    if(strcmp(person1.name, person2.name)) return False;
    if(person1.age != person2.age) return False;
    if(person1.salary != person2.salary) return False;
    
    return True;
}

/********************************************************************************
 * humansEqualByCallbyReference : compare whether person1 is same with person2  *
 *                                by reference                                  *
 ********************************************************************************/
int humansEqualByCallByReference(humanBeing_t *person1, humanBeing_t *person2){
    
    if(strcmp(person1->name, person2->name)) return False;
    if(person1->age != person2->age) return False;
    if(person1->salary != person2->salary) return False;
    
    return True;
}
