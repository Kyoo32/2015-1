/*
* Date: 2015. 4. 16
* Author: Kate
* Purpose: String
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "c0416.h"

int main(void){
	/*
	char str1[] = "Hello, world";
	//char *str2 = "Hello, world";

	str1[3] = 'a';

	*str1 = "what";
	
	printf("%s\n", str1);


	*/


	/*
	//lab1
	char str[100];
	
	printf("Enter a message: ");
	scanf("%s", str);

	printf("You input '%s'\n", str);
	
	touppercase(str);
	printf("The result is '%s'\n", str);

	return 0;

	*/

	/*
	//lab2

	char str[100];

	printf("Enter a message: ");
	scanf("%[^\n]s", str);

	printf("You input '%s'\n", str);

	reverse(str);

	printf("The result is '%s'\n", str);

	return 0;

	*/

	/*
	
	char* forward = "12345 789";
	int forward_length = 0;

	////null 전까지의 길이
	while (*(forward++) != '\0') {
		forward_length++;
		printf("Character %d", forward_length);
	}

	return 0;
	*/


	/*
	//lab3
	double userNum1 = 0, userNum2 = 0;
	double addResult = 0, subResult = 0, multiResult = 0, divResult = 0;

	printf("Enter two num: ");
	scanf("%lf %lf", &userNum1, &userNum2);

	fourOperation(userNum1, userNum2, &addResult, &subResult, &multiResult, &divResult);
	printf("1. %f\n2. %f\n3. %f\n4. %f\n", addResult, subResult, multiResult, divResult);

	return 0;

	*/
	/*
	char *p = "hello";
	printf("%p, %s, %c\n\n", p, p, *p);


	char *day[] = { "monday", "tuesday" };
	printf("%s, %c", *(day[0]+1), *day[0]);

	return 0;


	*/



	int num1 = 10;
	int num2 = 20;

	int **ptr1 = &num1;
	int *ptr2 = &num2;

	**ptr1 = 30;
	swapInPtr(&ptr1, &ptr2);
	printf("num1= %d, num2= %d\n", *ptr1, *ptr2);

	return 0;

}

void swapInPtr(int **ptr1, int **ptr2){
	int *temp=*ptr1;
	
	*ptr1 = *ptr2;
	*ptr2 = temp;


	return;
}


//lab3
void fourOperation(double a, double b, double *add, double *sub, double *multi, double *div){
	*add = a + b;
	*sub = a - b;
	*multi = a* b;
	*div = a / b;

	return;
}
//lab2
void reverse(char *str){

	printf("check\n");
	char temp[100];
	int len = 0;
	int i = 0;

	while (str[i] != NULL){
		len++;
		i++;
	}

	for (i = 0; i < len ; i++){
		temp[i] = str[(len-1) - i];
	}
	temp[i] = NULL;

	printf("1: %s \n", temp);
	str = temp;//////??????????


	printf("2: %s \n", str);
	return;
}
//lab1
void touppercase(char* str){
	int i = 0;
	while (str[i] != NULL){

		if (str[i] > 97) str[i] -= 32;
		i++;
	}

	return;
};

