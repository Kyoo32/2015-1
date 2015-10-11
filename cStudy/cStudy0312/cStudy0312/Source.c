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

	printf("정수 하나를 입력하세요: ");
	scanf_s("%d", &userInput, 1);

	userInput = userInput - userInput - userInput - userInput;

	printf("함수 값은 %d 입니다. \n", userInput);

	return 0;
	*/


	/*
	//4.
	int admission = 0, habitMalaria = 0;
	int result = 0;
	int finalResult = 0;
	char notice = 'y';

	printf("당신의 헌혈 가능 여부를 알려드립니다. 다음 질문에 답하세요.\n\n");
	printf("1. 최근 일주일 이내에 입원한 적이 있습니까? (yes=1, no=0)");
	scanf_s("%d", &admission, 1);
	printf("2. 최근 일년 이내에 말라리아 위험 지역에 거주한 적이 있습니까? (yes=1, no=0)");
	scanf_s("%d", &habitMalaria, 1);

	 
	result = admission + habitMalaria;
	finalResult = (result < 1);
	
	printf("당신의 헌혈 여부는 %d 입니다.(가능:1, 불가능:0)\n", finalResult);
	
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

	printf("long double 자료형의 크기를 반지름으로 하는 원의 넓이는 %f 입니다. \n", areaR);
	printf("실수 하나를 입력하세요: ");
	scanf_s("%f", &userInput, 1);

	areaS = areaR * userInput;

	printf("직사각형의 넓이는 %f 입니다. \n", areaS);

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

	printf("정수 5264를 실수로: %f\n", inum);
	printf("실수 7.26542를 정수로: %d\n", dnum);
	printf("큰 정수 257를 작은 정수로: %d\n", ch);

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