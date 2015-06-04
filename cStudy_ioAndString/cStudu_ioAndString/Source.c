/*
* Date: 2015. 4. 21 9:31 A.M.
* Author: Kate
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int charToInt(char);


void MyFunc(void)
{
	static int si = 0;
	int j = 0;
	si++; j++;
	printf("si: %d, j: %d \n", si, j);
}




int main(void){

	
	//21-1
	int userInput = 0;
	int error = 0;

	printf("enter one character: ");
	userInput = getchar();
	fflush(stdin);

	if (userInput < 65){
		puts("Wrong Scope");
	}
	else if (userInput > 90 && userInput < 97){
		puts("Wrong Scope");
	}
	else if(userInput > 122){
		puts("Wrong Scope");
	}


	if (userInput >= 65 && userInput <= 90){
		userInput += 32;
	}
	else if (userInput >= 97 && userInput <= 122){
		userInput -= 32;
	}


	putchar(userInput);
	putchar('\n');

//	return 0;

	/*


	
	//21-1.1

	char userStr[100];
	int sum = 0;
	int len = 0;
	int i = 0;

	printf("Enter a message: ");
	scanf("%s", userStr);

	len = strlen(userStr);

	for (i = 0; i < len; i++){
		if ('0' <= userStr[i] && userStr[i] <= '9')
			sum += charToInt(userStr[i]);
		
	}

	printf("the result: %d \n", sum);

	//return 0;

	*/
	


	//21-2.2
	char str1[50];
	char str2[50];
	char str3[50];
	int len = 0;

	puts("Enter a word");
	fgets(str1, sizeof(str1), stdin);
	len = strlen(str1);
	printf("%d\n", len);
	str1[len-1] = 0;

	puts("Enter a word");
	fgets(str2, sizeof(str2), stdin);
	len = strlen(str2);
 	str2[len-1] = 0;

	strcpy(str3, str1);
	strcat(str3, str2);
	
	printf("%s", str3);

	int array[3][2] = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
		int(*ptr)[2] = array;

		printf("%d\n", sizeof(array));
		printf("%d\n", sizeof(array[0]));
		printf("%d\n", sizeof(ptr));
		printf("%d\n", sizeof(*array[0]));
	
		
			
			int i;
		for (i = 0; i< 5; i++)
			MyFunc();
		return 0; 



//	return 0;

	

	/*
	int str1[10];
	int str2[10];

	strcpy(str1, strcpy(str2, "abcd"));

	printf("%s\n%s", str1, str2);


	return 0;

	*/
}

int charToInt(char a){
	return a - 48;
}