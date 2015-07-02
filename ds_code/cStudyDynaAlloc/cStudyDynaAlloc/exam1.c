//
//  main.c
//  cStudyDynaAlloc
//
//  Created by Kate KyuWon on 5/14/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//



#include <stdio.h>
#include <stdlib.h>

char* allocChar(int maxLen);
void clearLineFromReadBuffer(void);
void printReversedString(char* );

int main(int argc, const char* argv[]) {
    
   
    int maxLen = 0;
    char *userString = NULL;
    
    puts("how long do you want to input? ");
    scanf("%d", &maxLen);
    clearLineFromReadBuffer();
    userString = allocChar(maxLen);
    
    printf("Enter a message: ");
    fgets(userString, maxLen, stdin);
    //scanf("%s", userString);  //scanf쓰면 스페이스에서 넘어감, 쓰면 안됨
   //test-// printf("-%s-\n", userString);
    
    printReversedString(userString);
    
    free(userString);
    return 0;
}

void printReversedString(char* string){
    int i = 0;
    int len = 0;
    while( string[len] != '\0'){
        len++;
    }
    
    printf("[%d]\n", len );
    
    for(i= len-2; i>=0; i--){ //fgets함수 특성상 개행문자를 포함하기 때문에 뒤에서 두번째부터 출력
        printf("%c", string[i]);
    }
    puts(" ");

    return ;
}

char* allocChar(int maxLen){
    char* string = (char*) malloc( sizeof(char) * maxLen );
    return string;
}

void clearLineFromReadBuffer(void){
    while(getchar() != '\n');
}