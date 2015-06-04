/*
* Date : 2015. 4 .2
*
* Purpose : pointer and multi array
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printString(char[]);
void reverseOneWord(char[]);

int main(void){

	/*
	//1

	char string[100];
	int len = 0;
	int i = 0;

	printf("Enter a message: ");
	scanf("%[^\n]s", string);

	for (i = 0; string[i] != 0; i++){
		len++;
	}

	len -= 1;

	for (i = len; i >= 0; i--){
		printf("%c", string[i]);
	}
	
	return 0;
	*/

	//1-2
	char string[100];
	

	printf("Enter a message: ");
	scanf("%[^\n]s", string);
	
	reverseOneWord(string);
	printString(string);

	return 0;

}

void reverseOneWord(char a[]){
	int start = 0, end=0;
	int len = 0; 
	int i=0, j=0;
	char temp;

	for (i = 0; a[i] != 0; i++){
		len++;
	}
	
	i = 0;
	while (start < len){

		if (a[i] == 32) start += 1;

		for (j = start; a[j] != 32 && a[j] !=0; j++){
			//
		}
		j -= 1;
		end = j;
		for (i = start; i<=j; i++, j--){
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}

		
		start = end+ 1;
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