/*
* Date : 2015. 3. 19
* Author : �̱Կ�
* Purpose : do the homework
*/

#include <stdio.h>

int main(void)
{
	/*
	//lab2

	int userCount = 0;
	int userInput = 0;
	int i = 0;
	int sum = 0;
	double average = 0;

	printf("�� ���� �Է¹����Ǳ��? ");
	scanf_s("%d", &userCount, 1);

	while (userCount < 1){
		printf("���� ������ �Է����ּ���: ");
		scanf_s("%d", &userCount, 1);
	}

	for (i = 0; i < userCount; i++){

		printf("�Է� %d: ", i + 1);
		scanf_s("%d", &userInput, 1);
		sum += userInput;
	}

	average = (double)sum / userCount;

	printf("���  : %f", average);


	return 0;

	*/


	/*
	//lab7

	int userInput = 0;
	int sum = 0;
	int i = 0;

	while (i < 5){
		printf("%d��° ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &userInput, 1);

		while (userInput < 1){
			printf("1�� ���ų� ū ���� �Է��ϼ���: ");
			scanf_s("%d", &userInput, 1);
		}

		sum += userInput;

		i++;
	}

	//for (i = 0; i < 5; i++){
	//	printf("%d��° ������ �Է��ϼ���: ", i + 1);
	//	scanf_s("%d", &userInput, 1);

	//	while (userInput < 1){
	//		printf("1�� ���ų� ū ���� �Է��ϼ���: ");
	//		scanf_s("%d", &userInput, 1);
	//	}

	//	sum += userInput;
	//}


	printf("���� %d\n", sum);
	return 0;

	*/


	/*

	//����2

	double userNum1 = 0, userNum2 = 0;
	int judge = 1;

	printf("�� ���� �Է��ϼ���: ");
	scanf_s("%lf %lf", &userNum1, &userNum2, 2);

	judge = (userNum1 < 0 || userNum2 < 0) ? 0 : 1;

	if (judge == 1){
		printf("��� ��� �Դϴ�.\n");
	}
	else {
		printf("��� ����� �ƴմϴ�. \n");
	}

	return 0;


	

	//����3
	int userInput = 1;
	int sum = 0;
	double average = 0;
	int i = 1;

	for (i = 1; userInput != 0; i++){

		printf("%d��° ���� �Է��ϼ���(0 to quit): ",i);
		scanf_s("%d", &userInput, 1);

		if (userInput == 0) {
			i--;
			break;
		}
		sum += userInput;
	}
	
	
	if (i == 0) printf("�����մϴ�.\n");
	else{
		average = (double)sum / i;
		printf("\n%d�� ���� ���: %f\n", i, average);
	}
	return 0;

	*/

	/*
	//����4
	
	int userNum1 = 0, userNum2 = 0;
	int sum = 0;
	int i = 0;

	printf("���� ���� �ΰ��� �Է��ϼ���: ");
	scanf_s("%d %d", &userNum1, &userNum2, 2);

	if (userNum1 > userNum2){
		int temp;
		temp = userNum2;
		userNum2 = userNum1;
		userNum1 = temp;
	}

	for (i = userNum1+1; i < userNum2; i++){
		sum += i;
	}

	printf("�� �� ������ ��: %d\n", sum);

	return 0;

	*/


	//���� 1, fflush �Լ��� �뵵

fflush �Լ��� Flush File Buffer�� �Ѵ�.

int fflush(FILE *stream); �� ���� ����.

fflush�� buffer�� �� stream data �߿� unwritten�� data�� write�Ѵ�.
�̶� stream�� ***output�̳� updating�� ���� ������ ���̴�.

���� stream�� null pointer���, fflush�� ���۾ȿ� ����� ��� �� ���� �����͸� ������ ��� stream�� ����.

return���� �Լ��� ��ɿ� �°� �۵��ϸ� zero��, error�� �߻��ߴٸ� EOF�̴�.

***fflush�� output fflush�� ���� ����������Ƿ�, input stream flush�� ���ؼ� ����ϴ� ���� �ٸ��� �ʴ�.





}
