/*
* Date : 2015, 3, 18
* Author : Kate
* Purpose : solve the problems in chapter 8, 9 of C
*/

#include <stdio.h>

int main(void)
{

	/*
	//8-1.1
	
	int num = 1;

	for (num = 1; num < 100; num++){

		if (num % 7 == 0 || num % 9 == 0){
			printf(" 7의 배수 또는 9의 배수 : %d \n", num);
		}
		//else if (num % 9 == 0){
		//	printf(" 7의 배수 또는 9의 배수 : %d \n", num);
		//}
	}

	return 0;

	

	//8-1. 2 

	int userNum1, userNum2;

	printf("정수 두개를 입력하세요 : ");
	scanf_s("%d %d", &userNum1, &userNum2, 2);

	if (userNum1 > userNum2)
		printf("두 수의 차이는 : %d\n", userNum1 - userNum2);
	else
		printf("두 수의 차이는 : %d\n", userNum2 - userNum1);

	return 0;

	

	//8-1.3

	int korean, english, math;
	double mean = 0;

	printf(" 국어, 영어, 수학 점수를 순서대로 입력하세요 : ");
	scanf_s("%d %d %d", &korean, &english, &math);

	mean = (double)(korean + english + math) / 3;

	if (mean >= 90)
		printf("학점 : A");
	else if (mean >= 80)
		printf("학점 : B");
	else if (mean >= 70)
		printf("학점 : C");
	else if (mean >= 50)
		printf("학점 : D");
	else
		printf("학점 : F");

	return 0;


	//8-1.4

	int userNum1, userNum2;
	int result;

	printf(" 두 개의 정수를 입력하세요 : ");
	scanf_s("%d %d", &userNum1, &userNum2);

	result = (userNum1 > userNum2) ? userNum1 - userNum2 : userNum2 - userNum1;

	printf(" 두 정수의 차이는 : %d\n", result);

	return 0;

	*/

	//8-2.1
	
	/*
	//(1)
	int num = 2;
	int count = 1;

	for (num = 2; num < 10; num += 2){
		
		while (1)
		{
			printf(" %d * %d = %d \n", num, count , num * count);

			if (count == num)
				break;
			
			count++;
		}

		printf("\n");
	}

	return 0;

	
	//(2)
	int i, j;

	for (i = 1; i < 10; i++){

		if (i % 2 != 0)
			continue;

		for (j = 1; j <10; j++)
		{
			if (j > i)
				break;
			printf(" %d * %d = %d \n", i, j, i*j);
		}

		printf("\n");
	}

	return 0;


	

	//8-2.2
	int a, z;

	for (a = 0; a < 10; a++)
	{
		for (z = 0; z < 10; z++)
		{
			if ((10 * a + z) + (10 * z + a) == 99)
			{
				printf(" (10 * a + z) + (10 * z + a)를 만족하는 (a, z) = (%d, %d)\n", a, z);
				break;
			}
		}
	}
		
	return 0;

	

	//8-3

	int userInput = 0;

	printf("음이 아닌 정수 : ");
	scanf_s("%d", &userInput, 1);
	
	switch(userInput / 10)
	{
		case 0 :
			printf("0이상 10미만\n");
			break;
		case 1 :
			printf("10이상 20미만\n");
			break;
		case 2 :
			printf("20이상 30미만\n");
			break;
		default :
			printf("30이상\n");
			break;
	}

	return 0;

	

	//switch

	int usermonth, userday, useryear;

	printf("enter the date : (mm/dd/yy) ");
	scanf_s("%d %d %d", &usermonth, &userday, &useryear);

	printf("Dated this %d", userday);
	switch (userday)
	{
		case 1 :printf("st");break;
		case 2 :printf("nd");break;
		case 3 :printf("rd");break;
		default :printf("th");
	}
	printf(" day of ");
	switch (usermonth)
	{
		case 1 :printf("January"); break;
		case 2 :printf("February");break;
		case 3 :printf("March");break;
		case 4 :printf("April");break;
		case 5 :printf("May");break;
		case 6 :printf("June");break;
		case 7 :printf("July");break;
		case 8 :printf("August");break;
		case 9 :printf("Semtember");break;
		case 10 :printf("October");break;
		case 11 :printf("November");break;
		case 12 :printf("December");break;
	}
	printf(", 20%2d", useryear);

	return 0;


	
	
	
}



