/*
*	Date : 2015. 4.15
*	Author : kate
*	Purpose : solve the question set 3
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include"cExam3.h"

#include <stdlib.h>
#include <time.h>

#define maxLength 10

int main(void){
	/*
	
	//도전1
	int arr[4][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
	int columnSize = ((int)sizeof(arr[0]) / sizeof(int));
	int rowSize = ((int)sizeof(arr) / sizeof(int) / sizeof(columnSize));
	int i = 0;

	printArray(rowSize, columnSize, arr);
	for (i = 0; i < 3; i++){
	rotateArray(rowSize, columnSize, arr);
	printArray(rowSize, columnSize, arr);

	}

	return 0;
	*/

	/*
	//도전3

	int i;
	printf("난수의 범위 : 0부터 %d까지\n", 99);
	for (i = 0; i < 5; i++){
	printf("난수 %d : %d\n", i + 1, rand() % 100);
	}

	return 0;

	*/

	/*
	//도전4

	int i;
	int result;

	srand((int)time(NULL));
	for (i = 0; i < 2; i++){

	do{
	result = rand()%7;
	} while (result == 0);
	printf("주사위 %d의 결과 : %d\n", i + 1, result);
	}

	return 0;
	*/

	/*
	//도전2
	int arr[maxLength][maxLength] = { 0 };
	int userLength = 0;

	printf("1~10 사이의 정수를 입력하세요: ");
	scanf("%d", &userLength);
	while (userLength<1 || userLength>maxLength){
		printf("잘못 입력하셨습니다. 다시 입력하세요: ");
		scanf("%d", &userLength);
	}

	snailArrByUserN(userLength, arr);
	printArray(userLength, userLength, arr); //도전1에서 쓴  printArray함수

	return 0;



	*/
	

	/*
	//도전5
	//0-가위, 1-바위, 2-보
	int userInput = 0;
	int comCard = 0;
	int wincount = 0, tiecount = 0;
	int result = 0;//game result 0-userWin, 1-tie, 2-userLose
	
	printf("컴퓨터와 가위바위보를 합니다.\
		   		   	\n당신이 이기면 게임이 종료됩니다.\n");
				   		   


	while (result != 2){

		srand((int)time(NULL));
		comCard = rand() % 3;
		printf("\n가위 바위 보 중 선택하세요(0 - 가위, 1 - 바위, 2 - 보) : ");
		scanf("%d", &userInput);
		while (userInput < 0 || userInput>2){
			printf("잘못된 입력입니다.\
				   	\n다시 입력하세요: ");
			scanf("%d", &userInput);
		}
		userInput = userInput % 3;
		
		switch (userInput){
		case 0: printf("당신은 가위 선택, "); break;
		case 1: printf("당신은 바위 선택, "); break;
		case 2: printf("당신은 보 선택, "); break;
		}
		switch (comCard){
		case 0: printf("컴퓨터는 가위 선택, "); break;
		case 1: printf("컴퓨터는 바위 선택, "); break;
		case 2: printf("컴퓨터는 보 선택, "); break;
		}
		
		result = rockSissorPaper(userInput, comCard);
		if (result == 0){
			printf("당신이 이겼습니다!\n");
			wincount++;
		}
		else if (result == 1) {
			printf("비겼습니다!\n");
			tiecount++;
		}
	}
	if (result == 2) printf("당신이 졌습니다. 게임을 종료합니다.\n");


	printf("\n게임의 결과: %2d승 %2d무\n", wincount, tiecount);


	return 0;

	*/
}

//도전2
void snailArrByUserN(int userLength, int*arr){

	int i = 0, j = 0;
	int period = userLength - 1;
	int start = 0;
	int count = 1;

	while (period>0){

		for (j = start; j < start + period; j++){
			arr[(i*userLength)+j] = count;
			count++;
		}

		for (i = start; i < start + period; i++){
			arr[(i*userLength) + j] = count;
			count++;
		}
		for (; j > start; j--){
			arr[(i*userLength) + j] = count;
			count++;
		}
		for (; i > start; i--){
			arr[(i*userLength) + j] = count;
			count++;
		}


		i++;
		start++;
		period = period - 2;
	}

	if (period == 0) arr[(i*userLength) + (j+1)] = count;
}


//도전1
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
}
void rotateArray(int row, int column, int*arr){
	//int temp[row][column] = { 0 };  -? Variable Length Array doesn't work
	int temp[4][4] = { 0 };
	int m = 0, n = 0;

	for (m = 0; m < row; m++){
		for (n = 0; n < column; n++){
			temp[n][3 - m] = (arr[(m*column) + n]);
		}
	}
	for (m = 0; m < row; m++){
		for (n = 0; n < column; n++){
			arr[(m*column)+n] = temp[m][n];
		}
	}
	

	return;
}



//도전5
int rockSissorPaper(int user, int com){
	if (user == com) return 1;

	if (user == 0 && com == 2) return 0;
	if (user != 0 && user > com) return 0;

	if (user == 2 && com == 0) return 2;
	if (user!=2&&user < com) return 2;

}
