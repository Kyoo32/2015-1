/*
* Date : 2015. 4. 5
* 과제 7~8
*/ 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "cHomework0402.h"


int main(void){
	
	/*
	//과제 7-1

	int a[10][10] = { 0 };
	int i = 0, j = 0;
	int num = 1;

	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			if (j >= 9 - i){
				a[i][j] = num;
				num++;
			}
			else{
				continue;
			}
		}
	}

	printArray(10, 10, a);

	return 0;

	
	*/


	/*
	//과제7-2
	int a[10][10] = { 0 };
	int i = 0, j = 0;
	int num = 1;
	

	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			if (j >i){
				a[i][j] = num;
				num++;
			}
			else{
				continue;
			}
		}
	}

	printArray(10, 10, a);

	return 0;
	*/



	/*
	//과제8-1
	int a[5][5] = { 0 };
	int i = 0, j = 0;
	int temp = 0;
	
	printf("0이 아닌 정수 17개를 입력하세요: ");

	for (j = 0; j < 5; j++){
		temp = j;
		if (j % 5 < 2) temp = 4 - j;

		for (i = 0; i < 5; i++){
			if (i >= (4-temp)&&i <= temp){
				scanf("%d", &a[i][j]);
			}
			else{
				continue; 
			}
		}
	}

	printArray(5, 5, a);

	return 0;
	*/


	/*
	
	//과제8-2

	int a[5][5];
	int i = 0, j = 0;
	int sum = 1;

	printf("정수 25개를 입력하세요: ");
	for (sum = 0; sum < 9; sum++){

		if (sum >=4){
			j = 0;
			for (i = 4; j < 4; i--){
				j = sum - i;
				scanf("%d", &a[i][j]);
			}
		}
		else{
			for (i=sum; i >= 0; i--){
				j = sum - i;
				scanf("%d", &a[i][j]);
			}
		}

	}


	printArray2(5, 5, a);
	
	return 0;

	*/

	/*
	//과제 8-3
	
	int a[5][5] = { 0 };
	int i = 0, j = 0;
	int period = 4;
	int start = 0;

	printf("정수 25개를 입력하세요: ");

	
	
	while(1){

		for (j = start; j < start + period; j++){	
			scanf("%d", &a[i][j]);
		}
		if (i == 2 && j == 3) break;
		for (i = start; i < start + period; i++){
			scanf("%d", &a[i][j]);
		}
		for (; j>start ; j--){
			scanf("%d", &a[i][j]);
		}
		for (; i>start ; i--){
			scanf("%d", &a[i][j]);
		}
		

		i++;
		start++;
		period = period / 2;
	}

	printf("\n");
	
	printArray2(5, 5, a);

	return 0;


	*/



}


void printArray2(int m, int n, int *a){

	int i = 0, j = 0;

	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			printf("%3d", a[m*i + j]);
		}
		printf("\n");
	}
}


void printArray(int m, int n, int *a){

	int i = 0, j = 0;

	printf("\nThe result you put is below.\n");
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			if (a[m*i + j] == 0){
				printf("   ");
			}
			else{
				printf("%3d", a[m*i+ j]);
			}
		}
		printf("\n");
	}

}