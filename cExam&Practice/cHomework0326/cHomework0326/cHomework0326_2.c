/*
* Date : 2015. 3. week3
*/

#include "cHomework.h"
#include <stdio.h>

int main(void)//����
{
	/*
	//1
	int userNum1 = 0, userNum2 = 0;
	printf("�� ���� �Է��ϼ���: ");
	scanf_s("%d %d", &userNum1, &userNum2, 2);

	printf("�� : %d\n", add(userNum1, userNum2));

	return 0;


	*/
	/*
	//2
	int userNum = 0;
	
	printf("�ϳ��� ���� ������ �Է��ϼ���: ");
	scanf_s("%d", &userNum, 1);

	printf("%d������ �� : %d\n", userNum, sumUntilNum(userNum));

	return 0;

	*/


	//3�� ������ lab5�� ���ԵǾ �Ѿ�ڽ��ϴ� ;;;;

	/*
	//4
	int userNum = 0;

	printf("1~10������ ������ �Է��ϼ���: ");
	scanf_s("%d", &userNum, 1);

	userNum=checkNum(userNum);

	printf("���� ���� : %d\n", userNum);

	return 0;
	*/

	//5

	int userNum = 0;

	printf("���� ������ �Է��ϼ���: ");
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
		printf("�߸��Է��ϼ̽��ϴ�.\n�ٽ� �Է��ϼ���(1~10): ");
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