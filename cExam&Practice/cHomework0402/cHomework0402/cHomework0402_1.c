/*
* Date : 2015. 4. 2
*   과제 1~6
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include<stdlib.h>
#include<ctype.h>


int main(void){

	/*
	//과제 1
	char userVoca[50];
	int len = 0;
	int i = 0;
	int max = 0;

	printf("영단어을 입력하세요: ");
	scanf("%s", userVoca);

	while (userVoca[len] != '\0'){
		len++;
	}

	max = userVoca[0];

	for (i = 0; i < len; i++){
		max = (max > userVoca[i]) ? max : userVoca[i];
	}

	printf("가장 큰 아스키코드는 %c\n", max);

	return 0;
	*/

	/*
	//과제2(1)
	char str[100];
	int len = 0;
	int i = 0;

	int changeOfChar = 0;
	int sum = 0;

	printf("Enter a message: ");
	scanf("%s", str);

	while(str[len] != 0) {
		len++;
	}

	for (i = 0; i < len; i++){
		changeOfChar = (int)str[i];
		sum += changeOfChar;
	}

	printf("the ASCII's sum of your message is %d\n", sum);

	return 0;

	*/


	/*
	//과제2(2)
	char str[100];
	int i = 0;
	int count = 0;
	int numbers[128];

	
	printf("Enter a message: ");
	scanf("%s", str);

	count = extractInteger(str, numbers);
	for (i = 0; i < count; i++){
		printf("%d\n", numbers[i]);
	}
	
	return 0;
	*/



	
	/*
	//과제 3
	char str[100];
	int len = 0;
	int i = 0;

	printf("Enter a message: ");
	scanf("%s", str);

	while (str[len] != 0) {
		len++;
	}

	for (i = 0; i < len; i++){
		if (str[i] < 91){
			str[i] += 32;
		}
		else{
			str[i] -= 32;
		}
	}


	for (i = 0; i < len; i++){
		printf("%c", str[i]);
	}

	return 0;


	*/

	/*
	//과제 4
	int score[3][4] = {0};
	int i = 0; //index of student
	int j = 0; //index of subject

	printf("Enter the score of each subject, each student\n");
	for (i = 0; i < 3; i++){
		printf("Student %d: ", i + 1);

		for (j = 0; j < 3; j++){
			scanf("%d", &score[i][j]);
			score[i][3] += score[i][j];
		}				
	}
	
	
	printf("\nKOREAN\tENGLISH\tMATH\tTOTAL\n");
	printf("================================\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			printf("%d\t", score[i][j]);
		}
		printf("\n");
	}


	return 0;

	*/

	/*
	//과제5
	int prime[100];
	int count = 0;
	int num = 1;
	int i = 0;

	for (num = 1; num <= 200; num++){
		if (checkPrime(num) == 1) {

			prime[count] = num;
			count++;
		}
	}

	for (i = 0; i < count; i++){
		printf("%5d ", prime[i]);
		if ((i + 1) % 10 == 0) printf("\n");
	}

	printf("\n");
	printf("Total : %d\n", count);

	
	return 0;


	*/

	/*
	//과제 6 
	int matrix1[2][3];
	int matrix2[3][2];
	int multResult[2][2];

	int i1 = 0, j1 = 0;
	int i2 = 0, j2 = 0;
	int m = 0, n = 0;// index of multResult.

	printf("Enter numbers orderly you want to put in two matrix :");

	for (i1 = 0; i1 < 2; i1++){
		for (j1 = 0; j1 < 3; j1++){
			scanf("%d", &matrix1[i1][j1]);
		}
	}
	for (i2 = 0; i2 < 3; i2++){
		for (j2 = 0; j2 < 2; j2++){
			scanf("%d", &matrix2[i2][j2]);
		}
	}


	for (m = 0; m < 2; m++){
		for (n = 0; n < 2; n++){
			multResult[m][n] = multOfMatrix(matrix1, matrix2, m, n);
		}
	}

	
	printf("\n\nThe resulf of two matrix's muitply is below.\n");

	for (m = 0; m < 2; m++){
		printf("\t(\t");
		for (n = 0; n < 2; n++){
			printf("%d\t", multResult[m][n]);
		}
		printf(")\n");
	}
	
	
	return 0;

	*/


}

int extractInteger(char *str, int number[]){
	char *endp;
	int c = 0;

	while (*str){
		if (isdigit(*str)){
			number[c++] = strtol(str, &endp, 10);
			while (isdigit(*str)) str++;
		}
		else str++;
	}
	return c;
}

int multOfMatrix(int *a, int *b, int m, int n){
	int result = 0;
	int i = 0;

	for (i = 0; i < 3; i++){
		result += a[3*m+i] * b[2*i + n];
	}

	return result;
}
	

int checkPrime(int n){
	int divisor = 2;
	if (n <= 1) return 0;
	else if (n == 2 || n == 3) return 1;

	for (divisor = 2; divisor * divisor <= n; divisor++){
		if (n %divisor == 0) return 0;

	}

	return 1;
}
