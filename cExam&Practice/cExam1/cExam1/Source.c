/*
* Date : 2015. 3. 22.
* Author : Kate
* Purpose : ���� ���α׷��� 1
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int GreatCommonNum(int, int);

int main(void)
{
	/*
	//1
	int userInput = 0;

	printf("10���� �ϳ��� �Է��ϼ���: ");
	scanf("%d", &userInput);

	printf("%d to %x", userInput, userInput);

	return 0;


	//2

	int userStart = 0, userEnd = 0;
	int i = 0, j = 0;

	printf("�������� ����մϴ�. ���ϴ� ���� �ܰ� ������ ���� �Է��ϼ���: ");
	scanf("%d %d", &userStart, &userEnd);

	if (userStart > userEnd){
		int temp;
		temp = userEnd;
		userEnd = userStart;
		userStart = temp;
	}

	for (i = userStart; i <= userEnd; i++)
	{

		for (j = 1; j < 10; j++){
			printf("%d * %d = %d \n", i, j, i*j);
		}
		printf("\n");
	}

	return 0;


	*/

	/*
	//3(1)
	int userNum1 = 0, userNum2 = 0;
	int biggerNum = 0;
	int greatCommonNum = 0;
	int i = 0;

	printf("�ִ������� �˷��帳�ϴ�. �� ���� �Է��ϼ���: ");
	scanf("%d %d", &userNum1, &userNum2);

	biggerNum = (userNum1 > userNum2) ? userNum1 : userNum2;

	for (i = biggerNum; i >0 ; i--){

		if (userNum1 % i == 0 && userNum2 % i == 0){
			greatCommonNum = i;
			break;
		}
	}

	if (greatCommonNum == 0){
		printf("�� ���� ���μ��Դϴ�.\n");
	}
	else{
		printf("�� ���� �ִ������� %d�Դϴ�.\n", greatCommonNum);
	}

	return 0;
	*/

	/*
	//3(2)

	int userNum1 = 0, userNum2 = 0;

	printf("�ִ������� ����� �帳�ϴ�. �� ���� �Է��ϼ���: ");
	scanf("%d %d", &userNum1, &userNum2);

	printf("�� ���� �ִ������� %d �Դϴ�. \n", GreatCommonNum(userNum1, userNum2));

	return 0;

	*/

	/*
	//4
	int a = 0, b = 0, c = 0, d = 0;

	printf("����� �����ϰ� �ִ� �ݾ� : 3500\n");

	
	for (b = 0; b <= 10; b++){
			for (c = 0; c <= 7; c++){
				for (d = 0; d <= 12; d++){

					if (15 * a + 5 * b + 7 * c + 4 * d == 35)
						printf("ũ���� : %d, ����� : %d, �� �� : %d\n",b,c,d);
				}
			}
		}
	

		return 0;
	*/

    /*
	//5
	int judge = 1;
	int num = 1;
	int count = 0;
	int i = 1;

	for (num = 2;; num++){
		judge = 1;
		for (i = 2; i < num; i++){
			if (num%i == 0) {
				judge = 0;
				break;
			}		
		}
		if (judge == 1){
			printf("%d ", num);
			count++;
		}

		if (count == 10){
			break;
		}
	}

	return 0;

	*/
	
	//7
	int userNum = 0;
	int border = 1;
	int i = 1;

	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &userNum);

	for (i = 1;; i++){
		border *= 2;
		if (border > userNum)
			break;
	}

	printf("\n��� n �Է� : %d\n", userNum);
	printf("������ �����ϴ� k�� �ִ��� %d\n", i - 1);

	return 0;
}


int GreatCommonNum(int p, int q){

	if (q == 0) return p;

	return GreatCommonNum(q, p%q);
}