/*
* Date : 2015. 4 .14
* Purpose : Function pointer
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "cStudy0414.h"
/*
int main(void){

	int userChoice = 0;
	double userNum1 = 0, userNum2 = 0;
	double (*operation)(double, double) = add;

	printf("Choose operation: 1-add, 2-subtract, 3-multiply, 4-divide, 0-quit\n");
	do{
		scanf("%d", &userChoice);
		if (userChoice < 0 || userChoice>4) printf("Wrong input! Try again: ");
	} while (userChoice < 0 || userChoice>4);

	if (userChoice == 0){

		printf("The end\n");
		return 0;
	}

	switch (userChoice){
	case 1:
		operation = add;
		break;
	case 2:
		operation = subtract;
		break;
	case 3: 
		operation = multiply;
		break;
	case 4:
		operation = divide;
		break;
	}
	
	printf("Input two real numbers: ");
	scanf("%lf  %lf", &userNum1, &userNum2);
	printf("The result is %.2f\n", operation(userNum1, userNum2));

	return 0;

}

double add(double a, double b){
	return a + b;
}
double subtract(double a, double b){
	return a - b;
}
double multiply(double a, double b){
	return a * b;
}
double divide(double a, double b){
	return a / b;
}



*/

//마방진


int main(void){
	int a[50][50] = { 0 };
	int userLength = 0;
	
	printf("홀수 마방진을 출력합니다.\
		   \n1~50 사이의 홀수를 입력하세요: ");
	scanf("%d", &userLength);
	while (userLength < 1 || userLength>50 || userLength % 2 == 0){
		printf("잘못된 입력값 입니다.\
			   \n다시 입력하세요: ");
		scanf("%d", &userLength);
	}

	toMagicSquare(userLength, a);
	printArray(userLength, userLength, a);
	return 0;
}

void toMagicSquare(int m, int *arr){

	int i = 0, j = 0;
	int num = 1;
	int startJ = (m - 1) / 2;
	j = startJ;
	

	arr[startJ] = num;
	while (1){
		num++;
		i--;
		j++;
		if (i<0 && j> m - 1){
			i += 2;
			j -= 1;
		}
		if (i < 0){
			i = m - 1;
		}
		if (j > m - 1){
			j = 0;
		}
		if (arr[(i*m) + j] != 0){
			
			i += 2;
			i = i%m;
			
			j--;
		}
		arr[(i*m) + j] = num;

		if (num == m*m) break;
	}

	
	return;
};


void printArray(int row, int column, int*arr)
{

	int m = 0, n = 0;

	printf("\n");
	for (m = 0; m < row; m++){
		for (n = 0; n < column; n++){
			printf("%4d ", arr[(m*column) + n]);
		}
		printf("\n");
	}

	return;
};