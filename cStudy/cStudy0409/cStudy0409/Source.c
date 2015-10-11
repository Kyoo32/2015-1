/*
* Date : 2015. 4. 9 
* Author : Kate
* Purpose : study pointer and mutidimemsional array
*/

//#define _CRT_SECERE_NO_WARNINGS

#include <stdio.h>

void setZero(int m, int n,int*);
void printArray(int m, int n, int*);

int main(void){

	int a[2][3] = { 1, 2, 3, 4, 5, 6 };

	setZero(2,3, &a[0][0]);
	printArray(2, 3, a);

	return 0;
}

void setZero(int m, int n, int *a){
	
	int*p;

	for (p = a; p < a+m*n ; p++){
		*p = 0;
	}

	return ;
}

void printArray(int m, int n, int*a){
	int i = 0, j = 0;

	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			printf("%3d", a[ n*i + j]);
		}
		printf("\n");
	}

	return 0;
}
