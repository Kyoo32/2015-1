
//
//  main.c
//  dataStructureHW2
//
//  Created by Kate KyuWon on 4/23/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>


void printList(int[], int);
int binarySearch(int [], int, int, int);
void showResult(int, int);

int main(int argc, const char * argv[]) {
    
    int key;
    int list[10] = {1, 3,4,5,6,7,8,9,12, 20};
    int size = ((int)sizeof(list)/ sizeof(int));
    int pos;
    
    printList(list ,size);
    
    //test1
    key=3;
    pos=binarySearch(list, 0, size-1, key);
    showResult(pos, key);
    //test2
    key=20;
    pos=binarySearch(list, 0, size-1, key);
    showResult(pos, key);
    //test3
    key=10;
    pos=binarySearch(list, 0, size-1, key);
    showResult(pos, key);
    //test4
    key=-1;
    pos=binarySearch(list, 0, size-1, key);
    showResult(pos, key);
    
    //test5
    int list1[1]={2};
    key=1;
    pos=binarySearch(list1, 0, 0, key);
    showResult(pos, key);
    
    //test6
    int list2[2]={1,3};
    key=1;
    pos=binarySearch(list2, 0, 1, key);
    showResult(pos, key);
    
    //test7
    key=3;
    pos=binarySearch(list, 0, 1, key);
    showResult(pos, key);
    
    //test8
    key=0;
    pos=binarySearch(list, 0, 1, key);
    showResult(pos, key);
    
    //test9
    key=4;
    pos=binarySearch(list, 0, 1, key);
    showResult(pos, key);
    
    //test10
    key=2;
    pos=binarySearch(list, 0, 1, key);
    showResult(pos, key);
    
    
    return 0;
    }

void printList(int list[], int length){
    int i=0;
    for(i=0; i<length; i++){
        printf("%3d", list[i]);
    }
    puts("");
    
    return ;
}

int binarySearch(int list[], int left, int right, int key){
    int middle = 0;
    
    while(left<=right){
        middle = left + (right - left) /2;
        if(key == list[middle]) return middle;
        else if(key<list[middle]) right = middle -1;
        else left = middle +1;
        }
    
    return -1;
}

void showResult(int pos , int key){
    if(pos !=-1)
        printf("Key %d is at %d\n", key, pos);
    else
        printf("Key %d is not found\n", key);
    return;
}