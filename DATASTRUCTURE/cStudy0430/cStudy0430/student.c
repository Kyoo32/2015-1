//
//  student.c
//  cStudy0430
//
//  Created by Kate KyuWon on 4/30/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAMEMAX 50;

typedef struct student{
    char name[50];
    int studenId;
    int gpa;
    char *major;
    char *course;
} Student;

void printStudent(Student);

int main(void){
    
 //   Student list[10]={{ "a" , 1, 0, "relation", "dipolmet"},{ "b" , 2, 0, "chinese", "seller"}};
    
    char *string = "ABCD";
    char *dest = NULL;
    char *source = "EFGH";
    
    printf("%d\n", strlen(string));
    
    strcpy(dest , string);
    printf("%s, %d\n", dest, strlen(dest));
    
    
  //  printStudent(list[0]);
        
    
    return 0;
}

void printStudent(Student s){
    
    printf("Student %s : studentId - %d, gpa - %d, major - %s, course - %s\n", s.name, s.studenId, s.gpa, s.major, s.course);
    
    return;
}