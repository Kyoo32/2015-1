/*
* Date: 2015. 4. 16
* Author: Kate
* Purpose: make a baseball game program in C Book
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cBaseball.h"


int main(void){

	int comNum[3] = { 0 };
	int userNum[3] = { 0 };
	int strikeResult = 0;
	int ballReslut = 0;
	int gameCount = 0;
	
	setRandNum(comNum);
	
	while (strikeResult != 3){
		gameCount++;
		userNumInput(userNum);
		compareNum(comNum, userNum, &strikeResult, &ballReslut);

		printf("The result: %d strike, %d ball\n\n", strikeResult, ballReslut);
	}

	printf("Finally you hit in %d times!\n", gameCount);

	return 0;
}


void setRandNum(int*ptr){

	srand((int)time(NULL));
	(*ptr) = rand() % 10;
	do{
		(*(ptr + 1)) = rand() % 10;
	} while (*(ptr + 1)==*ptr);
	do{
		(*(ptr + 2)) = rand() % 10;
	} while (*(ptr + 2) == *ptr || *(ptr + 2) == *(ptr + 1));

	return;
}

void userNumInput(int*userNum){
	printf("숫자 세개를 입력하세요(0~9): ");
	do{
		scanf("%d %d %d", userNum, userNum + 1, userNum + 2);
		if (userNum[0] < 0 || userNum[0]>9) printf("첫번째로 입력하신 숫자가 잘못되었습니다. 세 개를 다시 입력하세요: \n");
		if (userNum[1] < 0 || userNum[1]>9) printf("두번째로 입력하신 숫자가 잘못되었습니다. 세 개를 다시 입력하세요: \n");
		if (userNum[2] < 0 || userNum[2]>9) printf("세번째로 입력하신 숫자가 잘못되었습니다. 세 개를 다시 입력하세요: ");
	} while (userNum[0] < 0 || userNum[0]>9 || userNum[1] < 0 || userNum[1]>9 || userNum[2] < 0 || userNum[2]>9);

	return;
}

void compareNum(int *com, int *user, int*strike, int *ball){
	int strikeCount = 0;
	int ballCount = 0;

	int i = 0, j=0;

	for (i = 0; i < 3; i++){
		if (com[i] == user[i]) strikeCount++;
	}

	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			if (i == j) continue;
			if (com[i] == user[j]) ballCount++;		
		}
	}

	*strike = strikeCount;
	*ball = ballCount;

	return;
}