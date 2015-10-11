/*
* Date : 2015. 3. 31
* Author : Kate
* Purpose : solve programming 
*/

#define _CRT_SECURE_NO_WARNINGS

#include "cExam2.h"
#include <stdio.h>


int main(void){
	/*
	//1
	int a[10];
	int i = 0;
	int len = ((int)sizeof(a) / sizeof(a[0]));

	for (i = 0; i < len; i++){
		printf("enter %d integer: ",i+1);
		scanf_s("%d", &a[i], 1);
	}

	showOddNum(a, len);
	showEvenNum(a, len);
	
	return 0;
	*/


	/*
	//3
	int a[10];
	int len = ((int)sizeof(a) / sizeof(a[0]));
	int i = 0;
	int userInput = 0;
	int left = 0, right = 9;

	for (i = 0; i < len; i++){
		printf("enter %d integer: ", i + 1);
		scanf_s("%d", &userInput, 1);
		if (userInput% 2 == 1){
			a[left] = userInput;
			left++;
		}
		else if (userInput% 2 == 0){
			a[right] = userInput;
			right--;
		}

		if (left - right == 1) break;
	}

	printf("배열 요소의 출력 : ");
	for (i = 0; i < len; i++){
		printf("%d ", a[i]);
	}
	
	return 0;

	*/
	/*
	//4
	char checkPalind[100];
	int length = 0;
	int i = 0;
	int notPalind = 0;
	
	printf("enter one word: ");
	scanf("%s", checkPalind);

	while (checkPalind[i] != 0){
		length++;
		i++;
	}

	for (i = 0; i < length / 2; i++){
		
		if (checkPalind[i] != checkPalind[(length - 1) - i]) {
			printf("not palindrome\n");
			notPalind = 1;
			break;
		}

	}

	if (notPalind == 0) printf("palindrome\n");

	return 0;
	*/

	/*
	//5

	int a[4];
	int len = ((int) sizeof(a) / sizeof(a[0]));
	int i = 0;

	printf("Enter %d integers: ",len);
	for (i = 0; i < len; i++){
		scanf("%d", &a[i]);
	}

	bubble(a, len);

	for (i = 0; i < len; i++){
		printf("%d", a[i]);
	}
	
	return 0

	*/
	
	//2
	int userNum = 0;
	
	printf("Enter integer: ");
	scanf("%d", &userNum);

	
	printBinary(userNum);

	printf("\n");

	return 0;

	
}

void printBinary(int num){
	int resultOfMuti = 1;
	int remain = 1;

	if (num == 0) return;
	
	resultOfMuti = num / 2;
	remain = num % 2;

	printBinary(resultOfMuti);

	
	printf(" %d", remain);

}


void bubble(int*a, int len){
	int i = 0;
	int temp = 0;

	//int j = 1;

	if (len == 1) return;

	for (i = 0; i < len-1; i++){
		if (a[i]>a[i + 1]){
			temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;
		}

			
		//printf(" %d : %d %d %d %d \n", j, a[0], a[1], a[2], a[3]);
		//j++;
		

	}
	
	return bubble(a, len - 1);

}
void showOddNum(int*a, int n){
	int i = 0;

	printf("홀수 출력: ");
	for (i = 0; i < n; i++){
		if (n - i <2&&a[i]%2==1) printf("%d", a[i]);
		else if (a[i] % 2 == 1) printf("%d, ", a[i]);
	}
	printf("\n");
}
void showEvenNum(int*a, int n){
	int i = 0;

	printf("짝수 출력: ");
	for (i = 0; i < n; i++){
		if (n - i <=2 && a[i] % 2 == 0) printf("%d", a[i]);
		else if (a[i] % 2 == 0) printf("%d, ", a[i]);
	}
	printf("\n");
}