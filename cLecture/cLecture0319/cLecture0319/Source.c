/*
* Date : 2015. 3. 19
* Author : Kate
* Purpose : loop and if
*/

#include <stdio.h>

int main(void)
{
	/*

	//practicing while
	int i = 0;

	while (i < 10){
		printf("Hello world! \n");
		i++;
	}
	return 0;
	
	//for�� �̿� ������ ���
	int i = 1;
	int userInput;

	printf("�� �� ? ");
	scanf_s("%d", &userInput, 1);

	for (i = 1; i <= userInput; i++){

		printf(" %d * %d = %d \n", userInput, i, userInput*i);
	}

	return 0;

	

	//for ��ø���� ������ ���
	int dan = 2, count = 1;

	for (dan = 2; dan < 10; dan++){

		for (count = 1; count < 10; count++){

			printf(" %d * %d = %d \n", dan, count, dan*count);
		}

		printf("\n");
	}


	return 0;


	

	//while ��ø ����
	int circle = 0;
	int i = 0;

	while (i < 6){
		
		circle = 0;
		while (circle < i ){
			printf("0");
			circle++;
		}
		printf("*\n");

		i++;
	}

	
	return 0;

	//for�� �̿� ���ϱ�

	int i = 0;
	int total = 0;

	for (i = 1; i <= 100; i++){
		total += i;
	}

	printf("total : %d\n", total);

	return 0;



	
	//while ��ø�� �̿��� ������ ���
	int dan = 2, count = 1;

	while (dan < 10){
		count = 1;
		while (count < 10){
			printf(" %d * %d = %d\n", dan, count, dan*count);
			count++;
		}
		printf("\n");

		dan++;
	}	

	return 0;

	//����� �Է�
	int userInput = 0;
	int sum = 0;
	int count = 0;
	double average = 0;

	do{

		printf("���� (0 to quit):");
		scanf_s("%d", &userInput, 1);

		sum += userInput;

		count++;
	} while (userInput != 0);

	average = (double)sum / (count-1);
	printf("sum : %d, average: %f\n", sum, average);

	return 0;

	
	//lab5
	int asc = 'A';
	int count = 0;

	for (count = 0; count < 26; count++){

		printf("%d : %c\n", asc, asc);
		asc += 1;
	}

	return 0;


	//lab6
	int even = 2;
	int sum = 0;
	int i = 0;

	for (i = 0; i < 50; i++){
		sum += even;
		even += 2;
	}

	printf(" %d \n", sum);

	return 0;

*/	
	//lab7!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

	int userInput = 0;
	int sum = 0;
	int i = 0;

	for (i = 0; i < 5; i++){
		printf("%d��° ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &userInput, 1);

		while (userInput < 1){
			printf("1�� ���ų� ū ���� �Է��ϼ���: ");
			scanf_s("%d", &userInput, 1);
		}

		sum += userInput;
	}


	printf("���� %d\n", sum);
	return 0;

	/*
	

	//if basic
	int num;
	scanf_s("%d", &num, 1);

	if (num == 0){
		printf("0 �Դϴ�.\n");
	}
	if (num < 0){
		printf("���� �Դϴ�.\n");
	}
	if (num > 0){
		printf("��� �Դϴ�.\n");
	}
	
	return 0;




	//���� if

	int userChoose = 1;
	double userNum1, userNum2;
	double result;

	printf("���� ���α׷� 1.���� 2.���� 3.���� 4.������ 0.����\n");
	printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &userChoose, 1);

	
	while (userChoose != 0){
		while (userChoose > 4 || userChoose < 0){
			printf("�߸� �Է��ϼ̽��ϴ�.\n�ٽ� �Է��ϼ���: ");
			scanf_s("%d", &userChoose, 1);
		}


		printf("��� �� �� �Ǽ��� ���ʴ�� �Է��ϼ���: ");
		scanf_s("%lf %lf", &userNum1, &userNum2, 2);

		if (userChoose == 1){
			result = userNum1 + userNum2;
		}
		else if (userChoose == 2){
			result = userNum1 - userNum2;
		}
		else if (userChoose == 3){
			result = userNum1 / userNum2;
		}
		else if (userChoose == 4){
			result = userNum1 * userNum2;
		}
		else
		{
			printf("�߸� �Է��ϼ̽��ϴ�. \n");
		}


		printf("result : %f\n", result);
	}

	printf("\n���α׷��� �����մϴ�. \n");

	return 0;

	




	
	//7 or 9�� ���
	int num = 1;
	
	for (num = 1; num < 101; num++){
		
		if (num % 7 == 0 || num % 9 == 0){
			printf("7�� ��� �Ǵ� 9�� ���: %d\n", num);
		}
	}

	return 0;

	

	int score = 0;

	int total = 0;
	int average = 0;

	int count = 1;

	for (count = 1; count <= 5; count++){

		printf("%d��° �л��� ������ �Է��ϼ���: ", count);
		scanf_s("%d", &score, 1);

		printf("--->");
		if (score >= 90)
			printf("A");
		else if (score < 90 && score >= 80)
			printf("B");
		else if (score < 80 && score >= 70)
			printf("c");
		else
			printf("F");
		printf("\n\n");

		total += score;
	}
	
	average = total / (count - 1);

	printf("\n\n5�� �л� ������ ����: %d\n", total);
	printf("5�� �л� ������ ���: %d\n", average);

	return 0;


	*/
}