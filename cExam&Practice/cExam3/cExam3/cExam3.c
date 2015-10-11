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
	
	//����1
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
	//����3

	int i;
	printf("������ ���� : 0���� %d����\n", 99);
	for (i = 0; i < 5; i++){
	printf("���� %d : %d\n", i + 1, rand() % 100);
	}

	return 0;

	*/

	/*
	//����4

	int i;
	int result;

	srand((int)time(NULL));
	for (i = 0; i < 2; i++){

	do{
	result = rand()%7;
	} while (result == 0);
	printf("�ֻ��� %d�� ��� : %d\n", i + 1, result);
	}

	return 0;
	*/

	/*
	//����2
	int arr[maxLength][maxLength] = { 0 };
	int userLength = 0;

	printf("1~10 ������ ������ �Է��ϼ���: ");
	scanf("%d", &userLength);
	while (userLength<1 || userLength>maxLength){
		printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���: ");
		scanf("%d", &userLength);
	}

	snailArrByUserN(userLength, arr);
	printArray(userLength, userLength, arr); //����1���� ��  printArray�Լ�

	return 0;



	*/
	

	/*
	//����5
	//0-����, 1-����, 2-��
	int userInput = 0;
	int comCard = 0;
	int wincount = 0, tiecount = 0;
	int result = 0;//game result 0-userWin, 1-tie, 2-userLose
	
	printf("��ǻ�Ϳ� ������������ �մϴ�.\
		   		   	\n����� �̱�� ������ ����˴ϴ�.\n");
				   		   


	while (result != 2){

		srand((int)time(NULL));
		comCard = rand() % 3;
		printf("\n���� ���� �� �� �����ϼ���(0 - ����, 1 - ����, 2 - ��) : ");
		scanf("%d", &userInput);
		while (userInput < 0 || userInput>2){
			printf("�߸��� �Է��Դϴ�.\
				   	\n�ٽ� �Է��ϼ���: ");
			scanf("%d", &userInput);
		}
		userInput = userInput % 3;
		
		switch (userInput){
		case 0: printf("����� ���� ����, "); break;
		case 1: printf("����� ���� ����, "); break;
		case 2: printf("����� �� ����, "); break;
		}
		switch (comCard){
		case 0: printf("��ǻ�ʹ� ���� ����, "); break;
		case 1: printf("��ǻ�ʹ� ���� ����, "); break;
		case 2: printf("��ǻ�ʹ� �� ����, "); break;
		}
		
		result = rockSissorPaper(userInput, comCard);
		if (result == 0){
			printf("����� �̰���ϴ�!\n");
			wincount++;
		}
		else if (result == 1) {
			printf("�����ϴ�!\n");
			tiecount++;
		}
	}
	if (result == 2) printf("����� �����ϴ�. ������ �����մϴ�.\n");


	printf("\n������ ���: %2d�� %2d��\n", wincount, tiecount);


	return 0;

	*/
}

//����2
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


//����1
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



//����5
int rockSissorPaper(int user, int com){
	if (user == com) return 1;

	if (user == 0 && com == 2) return 0;
	if (user != 0 && user > com) return 0;

	if (user == 2 && com == 0) return 2;
	if (user!=2&&user < com) return 2;

}
