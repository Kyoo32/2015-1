//
//  searchLeftOrRight.c
//  dataStructureHW2
//
//  Created by Kate KyuWon on 4/23/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>
int searchLeftMost(int [], int, int, int);
int searchRightMost(int [], int, int, int);
int getNumOf(int, int);

int main(void){
    int leftMost = 0, rightMost=0;
    int size =0;
    int count =0;
    
    //test1
    int list1[]= {1};
    size = ((int)sizeof(list1)/sizeof(int));
    leftMost=searchLeftMost(list1, 0, size-1, 1);
    rightMost=searchRightMost(list1, 0, size-1, 1);
    count= getNumOf(leftMost, rightMost);
    printf("leftmost: %2d , rightmost: %2d[%d]\n", leftMost, rightMost, count);
    
    printf("%d\n",searchRightMost(list1, 0, size-1, 0));
    
    //test2
    int list2[]= {1,1};
    size = ((int)sizeof(list2)/sizeof(int));
    leftMost=searchLeftMost(list2, 0, size-1, 1);
    rightMost=searchRightMost(list2, 0, size-1, 1);
    count= getNumOf(leftMost, rightMost);
    printf("leftmost: %2d , rightmost: %2d[%d]\n", leftMost, rightMost, count);
    
    printf("%d\n",searchRightMost(list2, 0, size-1, 0));
    
    //test3
    int list3[]= {1,1,1};
    size = ((int)sizeof(list3)/sizeof(int));
    leftMost=searchLeftMost(list3, 0, size-1, 1);
    rightMost=searchRightMost(list3, 0, size-1, 1);
    count= getNumOf(leftMost, rightMost);
    printf("leftmost: %2d , rightmost: %2d[%d]\n", leftMost, rightMost, count);
    
    printf("%d\n",searchRightMost(list3, 0, size-1, 0));

    //test4
    int list4[]= {1,1,1,1};
    size = ((int)sizeof(list4)/sizeof(int));
    leftMost=searchLeftMost(list4, 0, size-1, 1);
    rightMost=searchRightMost(list4, 0, size-1, 1);
    count= getNumOf(leftMost, rightMost);
    printf("leftmost: %2d , rightmost: %2d[%d]\n", leftMost, rightMost, count);
    
    printf("%d\n",searchRightMost(list4, 0, size-1, 0));
    
    //test5
    int list5[]= {1,1,1,1,1};
    size = ((int)sizeof(list5)/sizeof(int));
    leftMost=searchLeftMost(list5, 0, size-1, 1);
    rightMost=searchRightMost(list5, 0, size-1, 1);
    count= getNumOf(leftMost, rightMost);
    printf("leftmost: %2d , rightmost: %2d[%d]\n", leftMost, rightMost, count);

    printf("%d\n",searchRightMost(list5, 0, size-1, 0));
    
    //test6
    int list6[]= {1,2,2,3,5};
    size = ((int)sizeof(list6)/sizeof(int));
    leftMost=searchLeftMost(list6, 0, size-1, 2);
    rightMost=searchRightMost(list6, 0, size-1, 2);
    count= getNumOf(leftMost, rightMost);
    printf("leftmost: %2d , rightmost: %2d[%d]\n", leftMost, rightMost, count);
    
    printf("%d\n",searchRightMost(list6, 0, size-1, 6));
    
    //test7
    int list7[]= {1,2,2,2,3,5};
    size = ((int)sizeof(list7)/sizeof(int));
    leftMost=searchLeftMost(list7, 0, size-1, 2);
    rightMost=searchRightMost(list7, 0, size-1, 2);
    count= getNumOf(leftMost, rightMost);
    printf("leftmost: %2d , rightmost: %2d[%d]\n", leftMost, rightMost, count);
    
    printf("%d\n",searchRightMost(list7, 0, size-1, 6));
    
    //test8
    int list8[]= {1,2,3,3,6};
    size = ((int)sizeof(list8)/sizeof(int));
    leftMost=searchLeftMost(list8, 0, size-1, 3);
    rightMost=searchRightMost(list8, 0, size-1, 3);
    count= getNumOf(leftMost, rightMost);
    printf("leftmost: %2d , rightmost: %2d[%d]\n", leftMost, rightMost, count);
    
    printf("%d\n",searchRightMost(list8, 0, size-1, -1));
    
    //test9
    int list9[]= {1,1,1,3,4,5,6,7};
    size = ((int)sizeof(list9)/sizeof(int));
    leftMost=searchLeftMost(list9, 0, size-1, 1);
    rightMost=searchRightMost(list9, 0, size-1, 1);
    count= getNumOf(leftMost, rightMost);
    printf("leftmost: %2d , rightmost: %2d[%d]\n", leftMost, rightMost, count);
    
    printf("%d\n",searchRightMost(list9, 0, size-1, -1));
    
    //test10
    int list10[]= {1,2,4,6,8,8,8,8,8,8};
    size = ((int)sizeof(list10)/sizeof(int));
    leftMost=searchLeftMost(list10, 0, size-1, 8);
    rightMost=searchRightMost(list10, 0, size-1, 8);
    count= getNumOf(leftMost, rightMost);
    printf("leftmost: %2d , rightmost: %2d[%d]\n", leftMost, rightMost, count);
    
    printf("%d\n",searchRightMost(list10, 0, size-1, -1));



    return 0;
}

int searchLeftMost(int list[], int left, int right, int key){
    
    
    int middle =0;
    while(left<=right){
        middle = left + (right - left)/2;
        if( middle==left && list[middle] == key) return middle;
        if(key == list[middle]){
            if(list[middle-1]!=key) return middle;
            else right = middle -1;
        }
        else if (key > list[middle]){
            left = middle +1;
            searchLeftMost(list, left, right, key);
        }
        else {
            right = middle -1;
            searchLeftMost(list, left, right, key);
        }
        
    }
    
    return -1;
}

int searchRightMost(int list[], int left, int right, int key){
    int middle =0;
    while(left<=right){
        middle = left + (right - left)/2;
        if( middle==right && list[middle] == key) return middle;
        if(key==list[middle]){
            if(list[middle+1]!=key) return middle;
            else left= middle +1;
        }
        else if (key > list[middle]){
            left = middle +1;
            searchRightMost(list, left, right, key);

        }
        else {
            right = middle -1;
            searchRightMost(list, left, right, key);

        }
        
    }
    
    return -1;

}

int getNumOf(int start, int end){
    if(start == -1 || end== -1) return -1;
    return end - start + 1;
}