/*
 * Purpose: lecture 2 of c
 * Author: Kate
 * Date: 12. mar. 2015
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	
	/*
	 //type

	double d1 = 1.23e-3;

	printf("%f\n", 0.1234);
	printf("%e\n", 0.1234);
	printf("%f\n", 0.12345678);
	printf("%e\n", 0.12345678);
	printf("%e\n", d1);

	return 0;
	
	
	//size of
	char ch = 9;
	long double ld = 10.23;

	printf("%d", sizeof(ld));

	return 0;

	
	
	
	//�������� ��ȣ�� �������� ���� ���� ������ ����
	printf("%d\n", -12 %5);
	printf("%d\t%d\t%d ", 12%5, 12%-5, -12%-5);
	return 0;
	
	
	
	//shor circuit operator
	int num1 = 10;
	int num2 = 12;

	int result;

	result = ( num1 < 10 && (num2 = 15));
	printf("%5d\n", num2);

	result = (num1 != 10 || (num2 = 15));
	printf("%5d", num2);

	
	//bit operator
	int a = 15, b = 20;

	printf("%d", a&b);

	return 0;


	//bit operator
	int num = 15;

	int result = num << 1 ;

	printf("1 shift: %d\n", result);
	printf("2 shift: %d\n", result << 1);
	printf("3 shift: %d\n", result << 1);

	return 0;

	//bit operator
	int result = 3;
	result <<= 3;
	result >>= 2;

	printf("%d", result);


	return 0;
	
	//scanf and printf
	int num1, num2;

	scanf("%d %d", &num1, &num2);
	printf("%d\n%d", num1, num2);


	return 0;
	


	//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!�̰� ���
	//mask and shift
	int userInput;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &userInput);

	userInput &= 4;
	userInput >>= 2;

	printf("the result is %d", userInput);

	return 0;

	//scanf

	int num1, num2;
	int result;

	printf("���� 1: ");
	scanf("%d", &num1);
	printf("���� 2: ");
	scanf("%d", &num2);

	result = num1 + num2;

	printf("%d + %d = %d \n", num1, num2, result);

	return 0;


	//8,10,16���� �ޱ�
	int onum, dnum, xnum;
	
	scanf("%o %d %x", &onum, &dnum, &xnum);
	printf("%d %d %d \n", onum, dnum, xnum);
	
	return 0;

	//����ȯ

	int  num1 = 5264;
	num1 = (double)num1;

	printf("%f\n", num1);
	printf("%d", num1);


	return 0;
	
	//queston 1, most great number
	int num1, num2, num3, num4;
	int prime = 0;

	printf("�� ���� ������ �Է��ϼ���: ");
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

	prime = (prime < num1) ? num1 : prime;
	prime = (prime < num2) ? num2 : prime;
	prime = (prime < num3) ? num3 : prime;
	prime = (prime < num4) ? num4 : prime;
	
	printf("\n���� ū ���� %d �Դϴ�. \n", prime);

	return 0;

	//question2. sec to hourAndSec

	int userSecond;
	int hour, second;

	printf("���ʷ� �ٲپ� �帳�ϴ�. \n�ʸ� �Է��ϼ���: ");
	scanf("%d", &userSecond);

	hour = userSecond / 60;
	second = userSecond % 60;

	printf("%d�� %d�� �Դϴ�. \n", hour, second);


	return 0;

	//positive number to negative 

	int userInput;

	printf("3�� �Է��ϼ���: ");
	scanf("%d", &userInput);

	userInput = ~userInput;
	userInput |= 1;

	printf("%d\n", userInput);
	return 0;


	//scanf works in pattern-matching

	float x, z;
	int y;


	scanf("%f %d %f", &x, &y, &z);
	printf("%f\t%d\t%f", x, y, z);
	scanf("%d", &y);
	printf("%d", y);
	return 0;

	*/
}