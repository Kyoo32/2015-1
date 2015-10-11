/*
* Date : 2015. 3. 26
* Author : kate
* Purpose : make familiar with the function and the condition
*/

#include "Source.h"

int main(void)
{
	/*
	//lab 5.

	int dan = 2;
	int i = 1;

	for (dan = 2; dan < 10; dan++){
		
		if (dan % 2 == 1) continue;

		for (i = 1; i <= dan; i++){
			printf("%d * %d = %d \n", dan, i, dan*i);
		}
		printf("\n");

	}

	return 0;

	

	//lab7
	int userMonth = 0;
	int day = 0;

	printf("���� �Է��ϼ���: ");
	scanf_s("%d", &userMonth, 1);

	switch (userMonth){
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		day = 31;
		break;
	case 2:
		day = 27;
		break;
	case 4: case 6: case 9: case 11:
		day = 30;
		break;
	default:
		day = 0;

	}
	printf("%ddays\n", 31);

	

	//��� ���α׷� �Լ�ȭ

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
			result = add(userNum1, userNum2);
		}
		else if (userChoose == 2){
			result = subtract(userNum1, userNum2);
		}
		else if (userChoose == 3){
			result = multiply(userNum1, userNum2);
		}
		else if (userChoose == 4){
			result = divide(userNum1, userNum2);
		}
		else
		{
			printf("�߸� �Է��ϼ̽��ϴ�. \n");
			result = '0';
		}
		
		printf("result : %f\n", result);

		printf("\n���ڸ� �Է��ϼ���: ");
		scanf_s("%d", &userChoose, 1);
	}

	printf("���α׷��� �����մϴ�. \n");

	
	//�Լ� ����1

	int result, num1, num2;
	howToUseThisProg();
	num1 = readNum();
	num2 = readNum();
	result = add(num1, num2);
	showAddResult(result);

	return 0;

	
	//�Լ� ����2
		int num1, num2;
		printf("�� ���� ���� �Է�: ");
		scanf_s("%d %d", &num1, &num2);
		printf("%d�� %d �� ���방�� ū ����: %d\n", num1, num2, absoCompare(num1, num2));

		return 0;	


	//factorial for
	 int num = 0;
	 int i = 0;
	 int fac = 1;
 
	 scanf_s("%d", &num, 1);

	 for (i = 1; i <=num; i++){
		 fac *= i;
	 }
	 printf("%d", fac);

	 return 0;


	//factorial recursive
	int num = 0;
	scanf_s("%d", &num, 1);

	printf("factorial : %d\n", factoral(num));
		
	return 0;

	

	//fibo by recursive
	int num = 0;
	int i = 0;

	scanf_s("%d", &num);

	for (i = 1; i <= num; i++){
		printf("%d ", fibo(i));
	}
	
	return 0;


	//fibo by for 
	
	int i = 0;
	int num = 0;
	int fibo = 0;
	int a = 0, b = 0;

	scanf_s("%d", &num, 1);

	for (i = 0; i <= num; i++){
		if (i == 0){
			fibo += 0; a = fibo;
		}
		if (i == 1){
			fibo += 1;
			b = fibo;
		}

		fibo = a + b;

		a = b;
		b = fibo;
	}

	printf("%d", fibo);

	*/




}


int fibo(int num){

	if (num == 0) return 0;
	if (num == 1) return 1;

	return fibo(num - 1) + fibo(num - 2);
}

int factoral(int num){

	if (num == 1) return 1;

	return num*factoral(num - 1);
}

int getAbsoValue(int a){
	if (a < 0) return a * (-1);
	else return a;
}

int absoCompare(int a, int b){
	
	if (getAbsoValue(a)> getAbsoValue(b)) return a;
	else return b;
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

void howToUseThisProg(void){
	printf("�� ���� ������ �Է��Ͻø� ���� ����� ��µ˴ϴ�. \n��! �׷� �� ���� ������ �Է��ϼ���.\n");
}

int readNum(void){
	int a;
	scanf_s("%d", &a, 1);
	
	return a;
}

void showAddResult(int result){
	printf("���� ��� ���: %d\n", result);
}