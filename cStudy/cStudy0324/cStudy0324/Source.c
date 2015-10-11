/*
* Date : 2015. 3. 24
* Author : Kate
* Purpose : study Array and Pointer
*/

#include <stdio.h>

int main(void){
	/*
	//11-2

	int recover[4] = { 0 };
	int sumOfRecover = 0;
	int sumOfMoney = 0;
	int i = 0;
	int len = ( (int)sizeof(recover) / sizeof(recover[0]) );

	for (i = 0; i < len; i++){
		printf("리커버 %d의 인원을 입력하세요: ", i+1);
		scanf_s("%d", &recover[i]);
	}
	
	for (i = 0; i < len; i++){
		printf("리커버 %d의 용돈 : %d\n", i + 1, 30000 * recover[i]);
		sumOfMoney += 30000 * recover[i];
	}

	for (i = 0; i < len; i++){
		sumOfRecover += recover[i];
	}
	
	printf("\nNext recover 총 인원 : %d\n", sumOfRecover);
	printf("recover 총 용돈 : %d\n", sumOfMoney);

	return 0;

	

	//11-1

	char userNum[10] = { 0 };
	int i1 = 0;
	int i2 = 0;
	
	for (i1=0; i1 < 10;i1++){
		printf("enter one alphabet: ");
		scanf_s("%c", &userNum[i1], sizeof(userNum[0]));
		//getchar();
		fflush(stdin);

		if (userNum[i1] == '*') break;		
	}

	for (i2 = 0; i2 < i1; i2++){
		printf("%c", userNum[i2]);
	}
	printf("\n");

	for (i1 = 0; i1 < i2; i1++){
		userNum[i1]++;
	}

	for (i2 = 0; i2 < i1; i2++){
		printf("%c", userNum[i2]);
	}

	return 0;

	

	//12-2

	double userNum1 = 0;
	double userNum2 = 0;
	double *ptr1 = &userNum1;
	double *ptr2 = &userNum2;
	double max = 0;
	double result = 0;

	printf("두 실수를 입력하세요: ");
	scanf_s("%lf %lf", ptr1, ptr2);

	result = *ptr1 + *ptr2;
	max = (max > result) ? max : result;

	result = *ptr1 - *ptr2;
	max = (max > result) ? max : result;
	
	result = *ptr1 * (*ptr2);
	max = (max > result) ? max : result;

	result = *ptr1 / *ptr2;
	max = (max > result) ? max : result;

	printf("결과 : %f\n", max);

	return 0;

		
	//12-2bonus
		int num1 = 20, num2 = 10;
		int *ptr1 = &num1;
		int *ptr2 = &num2;
		printf("%d\n", *ptr1 / *ptr2);
		return 0;
	
	*/

	//11-3
	
	const int startMoney = 100;
	double resultOfRate[3];
	int userRate = 0;
	int userYear = 0;
	int indexOfYear = 1;
	int i = 0;

	printf("이자율에 따른 투자결과를 알려드립니다.\n");
	printf("이자율과 투자기간(년)을 입력하세요: ");
	scanf_s("%d %d", &userRate, &userYear);

	for (i = 0; i < 3; i++){
		resultOfRate[i] = startMoney;
	}

	printf("Year\t");
	for (i = 0; i < 3; i++){
		printf("%d%%  \t", userRate+i);
	}
	printf("\n");
	
	for (indexOfYear = 1; indexOfYear <=userYear; indexOfYear++){
		printf("%d", indexOfYear);
		for (i = 0; i < ((int) sizeof(resultOfRate) / sizeof(resultOfRate[0])); i++){
			resultOfRate[i] += resultOfRate[i] * (userRate + i) / 100;
			printf("%10.2f", resultOfRate[i]);
		}
		printf("\n");
	}

	printf("\n");


	return 0;
}