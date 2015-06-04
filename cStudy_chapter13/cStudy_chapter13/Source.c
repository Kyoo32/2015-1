/*
* Date : 2015. 4.1
*
*/

#include <stdio.h>

int main(void){
	/*
	int a[5] = { 1, 2, 3, 4, 5 };
	int *ptr = &a[0];
	int i = 0;
	int len =( (int)sizeof(a)/sizeof(a[0]));

	for (i = 0; i < len; i++){
		*(ptr + i) += 2;
	}
	
	for (i = 0; i < len; i++){
		printf("%d\n", a[i]);
	}

	return 0;

	*/


	int a[6] = { 1, 2, 3, 4, 5, 6 };
	int *frontptr = a;
	int *endptr = &a[5];
	int i = 0;

	for (i = 0; i < 3; i++){
		int temp = 0;
		temp = *frontptr;
		*frontptr = *endptr;
		*endptr = temp;

		frontptr++;
		endptr--;
	}

	for (i = 0; i < 6; i++){
		printf("%d ", a[i]);
	}

	return 0;
}