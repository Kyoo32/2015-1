/*
*
*  조건문 과제
*/

#include "cHomework.h"
#include <stdio.h>


int main(void){
	/*
	//과제1
	int end = 7;
	int i = 0, j = 0;
	int spaceNum = 0;
	
	for (i = 0; i <= end; i++){

		if (i<=3){

			spaceNum = 3 - i;
			for (j = 0; j < spaceNum; j++){
				printf(" ");
			}
			for (j = spaceNum; j < 7 - spaceNum; j++){
				printf("*");
			}
			for (; j < end; j++){
				printf("\t");
			}
			printf("\n");
		}
		if (i>3){

			spaceNum = (i % 4);
			for (j = 0; j < spaceNum; j++){
				printf(" ");
			}
			for (j = spaceNum; j < 7 - spaceNum; j++){
				printf("*");
			}
			for (; j < end; j++){
				printf("\t");
			}
			printf("\n");

		}

	}


	return 0;

	*/

	/*

	//과제2
	

	char userCheck = 'c';
	int userDay = 0, userMonth = 0, userYear = 0;
	int divBy400 = 0, divBy100 = 0, divBy4 = 0;

	printf("press c or q: ");
	scanf_s("%c", &userCheck,1);

	while (userCheck == 'c'){
		printf("month: ");
		scanf_s("%d", &userMonth, 1);
		printf("day: ");
		scanf_s("%d", &userDay, 1);
		printf("year: ");
		scanf_s("%d", &userYear);


		if (userMonth < 1 || userMonth >12){
			printf("not date\n");
			break;
		}
		if (userDay < 1 || userDay>32){
			printf("not date\n");
			break;
		}
		
		divBy400 = userYear % 400;
		divBy100 = userYear % 100;
		divBy4 = userYear % 4;

		if (divBy100 == 0 && divBy400 != 0){
			switch (userMonth){
			case 2:
				if (userDay < 28) {
					printf("correct date\n");
					break;
				}
			case 4: case 6: case 9: case 11:
				if (userDay < 31){
					printf("correct date\n");
					break;
				}
			}
		}
		else if (divBy4 != 0){
			switch (userMonth){
			case 2:
				if (userDay < 28) {
					printf("correct date\n");
					break;
				}
			case 4: case 6: case 9: case 11:
				if (userDay < 31){
					printf("correct date\n");
					break;
				}
			}
		}








		if (divBy400 == 0){
			switch (userMonth){
			case 2:
				if (userDay < 29) {
					printf("correct date\n");
					break;
				}
			case 4: case 6: case 9: case 11:
				if (userDay < 31){
					printf("correct date\n");
					break;
				}
			}

		}
		else if (divBy4 == 0 && divBy100 != 0){
			switch (userMonth){
			case 2:
				if (userDay < 29) {
					printf("correct date\n");
					break;
				}
			case 4: case 6: case 9: case 11:
				if (userDay < 31){
					printf("correct date\n");
					break;
				}
			}

		}





		break;
	}




	if (userCheck == 'q'){
		printf("quit program\n");
	}

	return 0;


	*/

	
	//과제 3
	char userChar = 0;
	int check = 0;

	printf("1 to start, -1 to quit: ");
	scanf_s("%d", &check, 1);
	getchar();

	while (check != -1){
		

		printf("\nenter character: ");
		scanf_s("%c", &userChar, 1);
		
		

		if (userChar >= 'A'&& userChar <= 'Z'){
			printf("1\n"); break;

		}
		else if (userChar >= 'a'&& userChar <= 'z'){
			printf("2\n"); break;

		}
		else if (userChar >= 48 && userChar <= 57){
			printf("3\n"); break;

		}
		else if (userChar > -1 && userChar < 128){
			printf("0\n"); break;

		}


		check = -1;
	}

	printf("프로그램을 종료합니다.\n\n");

	return 0;
	
	
	
	/*
	//과제 4

	int won1 = 0, won2 = 0, won5 = 0, won10 = 0, won20 = 0, won50 = 0;
	int count = 0;
	int sumOfPair = 0;

	printf("방법-(50만원, 20만원,10만원, 5만원,2만원, 1만원)\n");

	for (won50 = 0; won50 <= 2; won50++){
		
		for (won20 = 0; won20 <= 5; won20++){

			for (won10 = 0; won10 <= 10; won10++){

				for (won5 = 0; won5 <= 20; won5++){

					for (won2 = 0; won2 <= 50; won2++){

						for (won1 = 0; won1 <= 100; won1++){

							sumOfPair = 50 * won50 + 20 * won20 + 10 * won10 + 5 * won5 + 2 * won2 + 1 * won1;
							if (sumOfPair == 100){
								count++;
								printf("%d-(%d, %d, %d, %d, %d, %d)\n", count, won50, won20, won10, won5, won2, won1);
							}

						}
					}
				}
			}
		}
	}



	return 0;
	

	*/

	/*
	//lab 4
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

	//lab 6

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


	*/


}