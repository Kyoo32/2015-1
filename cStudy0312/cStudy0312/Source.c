/*
* Date: 2015.3.12
* Author: Kate
* Purpose: Chapter 3-5
*/


#include <stdio.h>

int main(void){
	
	
	/*
	//3.
	printf("we give you 50%% discount today");

	return 0;
	*/

	/*
	//4-1.
	int userInput;

	printf("���� �ϳ��� �Է��ϼ���: ");
	scanf_s("%d", &userInput, 1);

	userInput = userInput - userInput - userInput - userInput;

	printf("�Լ� ���� %d �Դϴ�. \n", userInput);

	return 0;
	*/


	/*
	//4.
	int admission = 0, habitMalaria = 0;
	int result = 0;
	int finalResult = 0;
	char notice = 'y';

	printf("����� ���� ���� ���θ� �˷��帳�ϴ�. ���� ������ ���ϼ���.\n\n");
	printf("1. �ֱ� ������ �̳��� �Կ��� ���� �ֽ��ϱ�? (yes=1, no=0)");
	scanf_s("%d", &admission, 1);
	printf("2. �ֱ� �ϳ� �̳��� ���󸮾� ���� ������ ������ ���� �ֽ��ϱ�? (yes=1, no=0)");
	scanf_s("%d", &habitMalaria, 1);

	 
	result = admission + habitMalaria;
	finalResult = (result < 1);
	
	printf("����� ���� ���δ� %d �Դϴ�.(����:1, �Ұ���:0)\n", finalResult);
	
	return 0;
	*/

	/*
	//5-1
	long toRadius = 0;
	int radius;
	const float pi = 3.14;
	float userInput;
	float areaR, areaS;
	
	radius = sizeof(long double);
	areaR = pi * radius * radius;

	printf("long double �ڷ����� ũ�⸦ ���������� �ϴ� ���� ���̴� %f �Դϴ�. \n", areaR);
	printf("�Ǽ� �ϳ��� �Է��ϼ���: ");
	scanf_s("%f", &userInput, 1);

	areaS = areaR * userInput;

	printf("���簢���� ���̴� %f �Դϴ�. \n", areaS);

	return 0;
	*/




	/*
	//5-3
	
	char c;
	int i;
	float f;
	double d;
	const int cos;

	printf("%d", sizeof(cos));

	return 0;

	
	
	//5-4
	int inum = 5264;
	double dnum = 7.26542;
	int bigNum = 257;
	char ch = bigNum;
	double result;

	printf("���� 5264�� �Ǽ���: %f\n", inum);
	printf("�Ǽ� 7.26542�� ������: %d\n", dnum);
	printf("ū ���� 257�� ���� ������: %d\n", ch);

	result = inum*dnum;
	printf("%f\n", result);

	result = bigNum / dnum;
	printf("%f", result);

	return 0;
	

	//5-4 plus
	int num1 =
	//double num2 = num1;
	
	printf("%f", num1);

	return 0;
	*/


} 