/*
* Date : 2015. 4. 2
* Author : kate
* Purpose : study array and pointer
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
	/*
	
	int arr[] = { 1, 2, 3, 4 };
	int i = 0;

	for (i = 0; i < 4; i++){
		printf("arr[i+1] = %d\n", arr[i]);
		printf("%p\n\n", &arr[i]);
	}

	printf("%d\n", (int)sizeof(arr));

	return 0;

	*/


	/*
	//lab 1

	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	int sum = 0;

	for (i = 0; i < 10; i++){
		sum += a[i];
	}

	printf("sum is %d\n", sum);

	return 0;
	*/

	/*
	//lab2

	int arr[5];
	int i = 0;
	int max;
	int min;
	int sum = 0;

	for (i = 0; i < 5; i++){
		printf("enter %d number: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	max = arr[0];
	min = arr[0];
	for (i = 0; i < 5; i++){

		//삼항연산자는 자바스크립트 선호 방식, c는 선호하지 않는다.
		max = (max > arr[i]) ? max : arr[i];
		min = (min < arr[i]) ? min : arr[i];

		sum += arr[i];
	}
	
	printf("big num: %d, small num: %d, sum: %d\n", max, min, sum);

	return 0;

	*/

	/*
	int arr[3][3] = { { 1, 2 }, { 4 }, { 7, 8 } };
	int i = 0, j = 0;

	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("arr[%d][%d] = %d. %p\n", i, j, arr[i][j], ((arr + i) + j));
		}
	}

	return 0;

	*/
	


	/*
	//lab3


	int dan[9][3];
	int i = 0, j = 0;

	for (i = 0; i < 3; i++){
		for (j = 0; j < 9; j++){
			dan[j][i] = (i + 2) * (j + 1);
		}
	}

	for (i = 0; i < 3; i++){
		for (j = 0; j < 9; j++){

			printf("%d * %d = %d\n", (i + 2), (j + 1), dan[j][i]);
		}
		printf("\n"); 
	}


	return 0;


	*/
	/*
	//lab4

	int a[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int b[4][2];
	
	int i = 0, j = 0;

	for (i = 0; i < 2; i++){
		for (j = 0; j < 4; j++){
			b[j][i] = a[i][j];
		}
	}

	for (j = 0; j < 4; j++){
		for (i = 0; i < 2; i++){
			printf("%d ", b[j][i]);
		}
		printf("\n");
	}
	return 0;

	*/


	/*
	
	char str[] = { "Hello, world!" };
	int len = 0;

	printf("%d\n", sizeof(str));

	//str[13] = 'a';

	//printf("%s\n", str);

	while (str[len] != 0){
		len++;
	}
	printf("len = %d\n", len);

	return 0;


	*/
	/*
	//lab2
	char originWord[100];
	char reverseWord[100];
	int len = 0;
	int i = 0;

	scanf("%s", originWord);

	while ( originWord[len] != '\0'){
		len++;
	}

	for (i = 0; i < len; i++){
 		reverseWord[i] = originWord[(len-1)-i];
	}
	reverseWord[len] = 0;

	
	
	printf("%s", reverseWord);

	printf("\n");


	return 0;


	*/
	

	/*
	int num = 10;
	int *pnum = NULL;
	//pnum=&num;

	//printf("num = %d, &num = %p  , %p\n&pnum = %p", *pnum, pnum, &num, &pnum);
	printf("%p\n", pnum);


	return 0;
	

	*/

	/*
	//ptr
	int num1, num2 = 0;
	int *ptr = &num1;
	
	*ptr = 10;
	printf("%d %d %d \n", num1, num2, *ptr);

	num2 = *ptr;
	printf("%d %d %d \n", num1, num2, *ptr);

	ptr = &num2;
	*ptr = 3;
	printf("%d %d %d \n", num1, num2, *ptr);


	return 0;

	*/


	int num1 = 10, num2 = 20;
	int *ptr1, *ptr2;
	int *temp;

	printf("1.\tnum1 =%d, num2 = %d\n", num1, num2);
	ptr1 = &num1;
	ptr2 = &num2;

	printf("2.\t*ptr1 =%d, *ptr2 = %d\n", *ptr1, *ptr2);
	*ptr1 += 10;
	*ptr2 -= 10;

	printf("3.\tnum1 =%d, num2 = %d\n", num1, num2);
	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("4.\t*ptr1 =%d, *ptr2 = %d\n", *ptr1, *ptr2);
	//printf("4.\tnum1 =%d, num2 = %d\n", num1, num2);

	return 0;

}	
