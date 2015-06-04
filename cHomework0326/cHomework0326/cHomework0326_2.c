/*
* Date : 2015. 3. week3
*/

#include "cHomework.h"
#include <stdio.h>

int main(void)//과제
{
	/*
	//1
	int userNum1 = 0, userNum2 = 0;
	printf("두 수를 입력하세요: ");
	scanf_s("%d %d", &userNum1, &userNum2, 2);

	printf("합 : %d\n", add(userNum1, userNum2));

	return 0;


	*/
	/*
	//2
	int userNum = 0;
	
	printf("하나의 양의 정수를 입력하세요: ");
	scanf_s("%d", &userNum, 1);

	printf("%d까지의 합 : %d\n", userNum, sumUntilNum(userNum));

	return 0;

	*/


	//3번 문제는 lab5에 포함되어서 넘어가겠습니다 ;;;;

	/*
	//4
	int userNum = 0;

	printf("1~10사이의 정수를 입력하세요: ");
	scanf_s("%d", &userNum, 1);

	userNum=checkNum(userNum);

	printf("최종 숫자 : %d\n", userNum);

	return 0;
	*/

	//5

	int userNum = 0;

	printf("양의 정수를 입력하세요: ");
	scanf_s("%d", &userNum, 1);

	dixToBinary(userNum);

	return 0;
}

int add(int a, int b){
	return a + b;
}


int sumUntilNum(int num){
	int sum = 0;
	int i = 1;
	
	for (i = 0; i <= num; i++){
		sum += i;
	}

	return sum;
}


int checkNum(int num){

	while (num < 1 || num>10){
		printf("잘못입력하셨습니다.\n다시 입력하세요(1~10): ");
		scanf_s("%d", &num, 1);
	}

	return num;
}


void dixToBinary(int num){
	
	int divide = num / 2;
	int rest = num % 2;

	if (divide == 1){
		printf("%d %d ", divide, rest);
		return;
	}
	else{
		dixToBinary(divide);
		printf("%d ", rest);
	}

}