/*
* Bate : 2015. 3. 16
* Author : Kate
* Purpose : solve problems of chapther 6,7
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	/*
	//7-1.1

	int userInput = 0;
	int count = 0;

	printf("���� ������ �ϳ� �Է��ϼ��� :");
	scanf("%d", &userInput);

	while (count < userInput)
	{
		//printf("%d", userInput);

		printf("Hello world! \n");
		count++;
	}

	return 0;

	

	//7-1.2

	int userInput = 0;
	int count = 0;

	printf("���� ����: ");
	scanf("%d", &userInput);

	while (count < userInput)
	{
		count++;
		printf("%d \n", 3 * count);

	}

	return 0;

	

	//7-1.3

	int userInput = 1;
	int sum = 0;

	int count = 1;

	while (userInput != 0)
	{
		printf("%d", count);
		count++;

		printf("������ �Է��ϼ���: ");
		scanf("%d", &userInput);
		
		sum += userInput;
	}

	printf("���� :  %d", sum);

	return 0;
	

	//7-1.4

	int userInput = 0;
	int count = 9;

	printf("�������� �������� ����մϴ�. ����(1~9)�� �Է��ϼ���: ");
	scanf("%d", &userInput);

	while (count > 0)
	{ 
		printf("\t%d * %d = %d\n", userInput, count, userInput*count);

		count--;
	}

	return 0;

	

	//7-1.5
	int count = 0;

	
	int userCount = 0;
	int userInput = 0;

	int sum = 0;
	double average = 0;

	printf("����� ����մϴ�. \n�� ���� ������ �Է��Ͻðڽ��ϱ�? ");
	scanf("%d", &userCount);

	while (count < userCount)
	{
		count++;
		
		printf("%d��° ������ �Է��ϼ���: ", count);
		scanf("%d", &userInput);

		sum += userInput;
		//average = (double)sum / count;
	}

	average = (double)sum / count;

	printf("����� %f �Դϴ�. \n", average);

	return 0;

	

	//7-2.1
	
	int userInput = 0;
	int sum = 0;

	int count = 0;

	while (count < 5)
	{
		count++;
		printf(" %d��°������ �Է��ϼ���: ", count);
		scanf("%d", &userInput);

		while (userInput < 1)
		{
			printf("\t(!)1�̸��� ���� �Է��ϼ̽��ϴ�. \n\t1�̻� ������ �Է��ϼ���: ");
			scanf("%d", &userInput);
		}

		sum += userInput;
	}

	printf("���� %d �Դϴ�.\n", sum);

	return 0;

	

	//7-2.2

	int count = 0;
	int round = 0;

	while (count < 5)
	{

		while (round < count){
			printf("0\t");
			round++;
		}

		printf("*\n");
	
		round = 0;
		count++;
	}

	return 0;

	//7-3.1-(1)
	
	int total = 0, num = 1;

	while(num != 0)
	{
		printf("���� �Է�(0 to quit) : ");
		scanf("%d", &num);

		total += num;
	}

	printf("�հ� : %d \n", total);

	return 0;

	
	//7-3.1-(2)
	
	int total = 0, num = 0;

	printf("press 1 to start : ");
	scanf("%d", &num);

	while (num != 0){
		printf("���� �Է�(0 to quit): ");
		scanf("%d", &num);

		total += num;
	}

	printf("�հ�: %d\n", total);

	return 0;


	int num = 0, sum = 0;
	
	do{
		sum += num;
		num += 2;
	} while (num < 101);

	printf("�� : %d", sum);

	return 0;
	

	//7-3.3
	int cur = 2;
	int is = 0;

	do{
		is = 1;
		do{
			printf("\t%d * %d = %d\n", cur, is, cur*is);
			is++;
		} while (is < 10);

		printf("\n");
		cur++;
	} while (cur < 10);


	return 0;

	//7-4.1

	int userNum1 = 0, userNum2 = 0;
	int sum = 0;

	printf("���� �ΰ��� ���� �� ���� �Է��ϼ���: ");
	scanf("%d     %d", &userNum1, &userNum2);

	for (; userNum1 <= userNum2; userNum1++){
		sum += userNum1;
	}

	
	printf("�� : %d", sum);
	
	return 0;

	//7-4.2

	int userNum = 0;
	int count = 1;
	int mult = 1;

	printf("���丮���� ����մϴ�. ������ �Է��ϼ���: ");
	scanf("%d", &userNum);

	for (count = 1 ; count < userNum+1; count++){
		mult = mult * count;
	}

	printf("�� : %d \n", mult);

	return 0;
	*/



	} 
