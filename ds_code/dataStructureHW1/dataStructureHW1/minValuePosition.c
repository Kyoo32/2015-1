//
//  main.c
//  dataStructureHW1
//
//  Created by Kate KyuWon on 4/21/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>
int minValuePosIn(int*, int);

int main(int argc, const char * argv[]) {
   
    int list[10]= {10, 3, 4, 6, 5, 1, 9, 8, 2,7};
    int size = ((int)sizeof(list)/sizeof(int));
    
    printf("최솟값 위치: %d\n", minValuePosIn(list, size)+1);
    
    return 0;
}

int minValuePosIn(int* arr, int size){
    int i;
    int minValuePos;
    
    if(arr == NULL || size <= 0) return -1;
    
    minValuePos = 0;
    for(i=1; i<size ; i++){
        if(arr[i] < arr[minValuePos]) minValuePos =i;
    }

    return minValuePos;
}



/*
(문제3)
 ‘1보다 크거나 같은 n개의 정수가 주어졌을 때, 제일 작은 수를 찾으려면 최소한 (n-1)번 이상의 비교 작업을 수행해야 한다.’는 것을 증명하려 한다.
 
 [모순에 의한 증명]
 (n-k)번 만에 최소값을 찾을 수 있다고 가정하자. (k>1)
 
 첫번째 숫자와 두번째 숫자를 비교해 작은 값을 고른다.
 이 작은 값과 세번째 숫자를 비교해 작은 값을 고른다.
 …… (n-k)+1번째 숫자까지 비교한다.
 최종적으로 결정된 작은 값은 첫번째 숫자부터 (n-k+1)번째 중 제일 작은 값이다.  n - ( n-k +1 ) = k - 1개는 고려하지 않았다. (k - 1 > 0)
 (n - k)번 시행 후 결정된 작은수와 남은 (k-1)개를 비교하지 않았으므로 이 작은 수가 n개 중 가장 작은 수라는 보장이 없다. (모순)
 
 반례로, 5개의 서로 다른 정수가 있을 때, 첫번째 정수부터 네번째 정수까지만 3회 비교해 가장 작은 수를 찾았다고 하자. 그런데 이 작은 수보다 마지막 
 다섯번째 수가 더 작다면 가장 작은 수는 다섯번째 수이다. 이 작은 수가 5개 중 가장 작은 값인지 확인하려면 다섯번째 수와 비교하는 실행을 1번 더 
 해야한다.
*/