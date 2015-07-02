//
//  main.c
//  cLecture0430bye
//
//  Created by Kate KyuWon on 4/30/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>
int mystrlen(char*);
void mystrcat(char*, char*, char*);
void mystrcpy(char*, char*);
int mystrcmp(char*, char*);

int main(int argc, const char * argv[]) {
    
    
    char *str = "Hello World";
    char *dest;
    char *re;
    
    char str1[30] ="first";
    char str2[30] = "second";
    char *result;
    
    char str3[30] = "My string";
    char str4[30] = "My stringu";
    int cmpResult =0;
    
    
    int len = mystrlen(str);
    printf("길이 : %d, 내용: %s , %d \n", mystrlen(str), str, sizeof(str));
    
    
    result = (char*) malloc(sizeof(mystrlen(str1)+mystrlen(str2)+1));
    mystrcat(str1, str2, result);
    printf("%s\n", result);
    
    dest = (char*) malloc(sizeof(mystrlen(str)+1));
    mystrcpy(dest, str);
    printf("str: %s, dest: %s\n", str, dest);
    
    cmpResult=mystrcmp(str3, str4);
    printf("%d", cmpResult);
    
    
    return 0;
}

int mystrcmp(char*str1, char*str2){
    int str1len = mystrlen(str1);
    int str2len = mystrlen(str2);
    int bigger = (str1len>str2len)? str1len: str2len;
    int i=0;
    int result = 0;
    
    while(i<bigger){
        if(str1[i]>str2[i]){
            result = 1;
            return result;
        }
        else if(str1[i]<str2[i]){
            result = -1;
            return result;
        }
        i++;
    }
    return result;
}

void mystrcpy(char*dest, char*source){
    int len = mystrlen(source);
    int i=0;
    
    for(i=0; i<len; i++){
        dest[i]= source[i];
    }
    dest[i] = 0;
}

void mystrcat(char*first, char*second, char*result){
    int i=0, j=0;
    int lenI, lenJ=0;
    int lenR=0;
    while(first[i]){
        lenI++;
        i++;
    }
    while(second[j]){
        lenJ++;
        j++;
    }
    
    lenR =lenI + lenJ +1;
    
    for(i=0;i<lenI;i++){
        result[i]=first[i];
    }
    j=0;
    for(i=lenI; i<lenR; i++, j++){
        result[i] = second[j];
    }
    result[i]=0;

}

int mystrlen(char*str){
    int len=0;
    int i=0;
    
    while(str[i] != 0){
        len++;
        i++;
    }
    
    return len;
}