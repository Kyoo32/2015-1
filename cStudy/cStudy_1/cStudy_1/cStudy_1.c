/*
 * Author: Kate Kyoo
 * Date: 10, march, 2015
 * Purpose: practice
 */




#include <stdio.h>

int main(void)
{
	int num1=3;
	int num2=4;
	int result = num1 + num2;

	printf("num1= %d, num2=%d \n", num1, num2);
	//visualC는 초기화를 안하면 에러가 뜨네요.
	printf("%d \n", result);

	return 0;
}