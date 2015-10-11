/*
* Date : 2014. 4. 21
* Author : kate
* Purpoes: homework of april 16th
*/

#define _CRT_SECURE_NO_WARNINGS
#define maxLength 10

#include <stdio.h>
#include <string.h>
#include "cHomework0416.h"

int main(void){
	/*
	//과제1
	
	int gugu[8][9] = { 0 };
	int size = ((int)sizeof(gugu[0]) / sizeof(int));

	setGugu(gugu[0], size);
	printGugu(gugu[0], size);

	return 0;
	*/

	/*
	//과제2
	double num = 0;
	double square = 0;

	printf("enter one number: ");
	scanf("%lf", &num);

	square = squareByValue(num);
	squareByReference(&num);

	printf("Value: %.2f \nReference: %.2f\n", square, num);

	return 0;

	*/
	/*
	//과제3
	char word1[20];
	char word2[20];
	int len = 0;
	char out[100];

	puts("Enter the first word: ");
	fgets(word1, sizeof(word1), stdin);
	
	puts("Enter the second word: ");
	fgets(word2, sizeof(word2), stdin);
	
	mystrcat(word1, word2, out);

	printf("the result: %s\n", out);

	return 0;
	*/
	/*
	//과제4
	char string[100];


	printf("Enter a message: ");
	scanf("%[^\n]s", string);

	reverseOneWord(string);
	printString(string);

	return 0;
	*/

	/*
	//도전1
	int a[10];
	int i = 0;
	int len = ((int)sizeof(a) / sizeof(a[0]));

	for (i = 0; i < len; i++){
		printf("enter %d integer: ", i + 1);
		scanf_s("%d", &a[i], 1);
	}

	showOddNum(a, len);
	showEvenNum(a, len);

	return 0;

	*/

	/*
	//도전3
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
	//도전4
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
	//도전2
	int userNum = 0;

	printf("Enter integer: ");
	scanf("%d", &userNum);


	printBinary(userNum);

	printf("\n");

	return 0;

	*/


	//insertionSort

	int arr[maxLength] = { 4, 6, 5, 3, 2, 1, 9, 8, 0, 7 };
	int size = (int)sizeof(arr)/sizeof(int);

	puts("Array before insertion sort");
	printArr(arr, size);
	insertSort(arr, size);
	puts("Array After insertion sort");
	printArr(arr, size);


	return 0;
}

//과제1
void setGugu(int *arr, int length){
	int *ptr = arr;
	int dan = 2;
	int time = 1;

	for (dan = 2; dan < 10; dan++){
		for (time = 1; time < 10; time++){
			*ptr = dan * time;
			ptr++;
		}
	}


	return;
}
void printGugu(int *arr, int length){
	int m = 0, n = 0;

	for (m = 0; m < 8; m++){
		for (n = 0; n < length; n++){
			printf("\t%d * %d = %d \n", m + 2, n + 1, arr[(m*length) + n]);
		}
		printf("\n");
	}

	return;
}

//과제2
double squareByValue(double num){
	return num * num;
}
void squareByReference(double *a){
	*a = (*a)*(*a);

	return;
}

//과제3
void mystrcat(char *str1, char*str2, char*out){
	int len = strlen(str1)-1;
	int i = 0;
	int j = 0;

	for (i = 0; i < len; i++){
		out[i] = str1[i];
	}
	out[i] = ' ';
	i++;

	len = strlen(str2) - 1;
	for (j = 0; j < len; j++){
		out[i + j] = str2[j];
	}
	out[i + j] = '\0';

	return;
}

//과제4
void reverseOneWord(char a[]){
	int start = 0, end = 0;
	int len = 0;
	int i = 0, j = 0;
	char temp;

	for (i = 0; a[i] != 0; i++){
		len++;
	}

	i = 0;
	while (start < len){

		if (a[i] == 32) start += 1;

		for (j = start; a[j] != 32 && a[j] != 0; j++){
			//
		}
		j -= 1;
		end = j;
		for (i = start; i <= j; i++, j--){
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}


		start = end + 1;
		i = start;
	}

	return;
}
void printString(char a[]){

	int i = 0;
	int len = 0;

	for (i = 0; a[i] != 0; i++){
		len++;
	}

	for (i = 0; i < len; i++){
		printf("%c", a[i]);
	}
	printf("\n");


	return;
}

//과제5
void insertSort(int*arr, int size){
	int i = 0, j = 0;
	int pos = 0;
	int temp = 0;

	puts("insertion sort");
	for (i = 0; i < size; i++){
		temp = arr[i];
		pos = i;
		for (j = 0; j < i; j++){
			if (arr[j] > arr[i]) {
				pos = j;
				break;
			}
		}
		
		for (j=i-1; j>=pos; j--){
			arr[j+1] = arr[j];
		}

		arr[pos] = temp;	
		printArr(arr, size);
		

	}

	return;
	
}
void printArr(int *arr, int length){

	int i = 0;

	for (i = 0; i < length; i++){
		printf("%3d ", arr[i]);
	}

	printf("\n");
	return;
}


//도전1
void showOddNum(int*a, int n){
	int i = 0;

	printf("홀수 출력: ");
	for (i = 0; i < n; i++){
		if (n - i <2 && a[i] % 2 == 1) printf("%d", a[i]);
		else if (a[i] % 2 == 1) printf("%d, ", a[i]);
	}
	printf("\n");
}
void showEvenNum(int*a, int n){
	int i = 0;

	printf("짝수 출력: ");
	for (i = 0; i < n; i++){
		if (n - i <= 2 && a[i] % 2 == 0) printf("%d", a[i]);
		else if (a[i] % 2 == 0) printf("%d, ", a[i]);
	}
	printf("\n");
}

//도전2
void printBinary(int num){
	int resultOfMuti = 1;
	int remain = 1;

	if (num == 0) return;

	resultOfMuti = num / 2;
	remain = num % 2;

	printBinary(resultOfMuti);


	printf(" %d", remain);

}

