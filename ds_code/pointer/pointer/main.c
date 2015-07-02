//
//  main.c
//  pointer
//
//  Created by Kate KyuWon on 4/8/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   /*
    char *p = "hello";
    printf("%s, %c\n", p, *p);
    
    char *day[]={"monday", "tuesday"};
    printf("%s, %c\n", day[0], *day[0]);
    printf("%s, %c\n", *day, *(*(day+1)));
    
    return 0;
    */
    
    /*
    int num1 = 10, num2=20, num3=30;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int *ptr3 = &num3;
    int * ptrArr[] = {ptr1, ptr2, ptr3};
    int **dptr = ptrArr;
    printf("%d %d %d \n", *(ptrArr[0]),*(ptrArr[1]),*(ptrArr[2]));
    printf("%d %d %d \n", *(dptr[0]),*(dptr[1]),*(dptr[2]));
    return 0;
     
    */
    
    
    
    char *language[] = {"visual C++", "java", "javascript", "android"};
    char **ptr = language;
    printf("[%c]", *language[3]);
    printf("[%s]", *ptr);
    printf("[%p]", ptr);
    //printf("")
    printf("[%s]\n", *++ptr);
    
    printf("size language: %d\n", sizeof(language));
    
    char *sptr= "hello";
    
    printf("\n\n\n%p %c ,%s", sptr, *sptr, sptr);
    
    int num= 10;
    int *iptr = &num;
    printf("!!!!%d", sizeof(iptr));
    printf("\n\n%p %d", iptr, *iptr);
    
    
    return 0;
     
    
}
