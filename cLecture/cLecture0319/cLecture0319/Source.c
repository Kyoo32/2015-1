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
	
	//for문 이용 구구단 출력
	int i = 1;
	int userInput;

	printf("몇 단 ? ");
	scanf_s("%d", &userInput, 1);

	for (i = 1; i <= userInput; i++){

		printf(" %d * %d = %d \n", userInput, i, userInput*i);
	}

	return 0;

	

	//for 중첩으로 구구단 출력
	int dan = 2, count = 1;

	for (dan = 2; dan < 10; dan++){

		for (count = 1; count < 10; count++){

			printf(" %d * %d = %d \n", dan, count, dan*count);
		}

		printf("\n");
	}


	return 0;


	

	//while 중첩 연습
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

	//for문 이용 더하기

	int i = 0;
	int total = 0;

	for (i = 1; i <= 100; i++){
		total += i;
	}

	printf("total : %d\n", total);

	return 0;



	
	//while 중첩을 이용한 구구단 출력
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

	//사용자 입력
	int userInput = 0;
	int sum = 0;
	int count = 0;
	double average = 0;

	do{

		printf("정수 (0 to quit):");
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
		printf("%d번째 정수를 입력하세요: ", i + 1);
		scanf_s("%d", &userInput, 1);

		while (userInput < 1){
			printf("1과 같거나 큰 수를 입력하세요: ");
			scanf_s("%d", &userInput, 1);
		}

		sum += userInput;
	}


	printf("합은 %d\n", sum);
	return 0;

	/*
	

	//if basic
	int num;
	scanf_s("%d", &num, 1);

	if (num == 0){
		printf("0 입니다.\n");
	}
	if (num < 0){
		printf("음수 입니다.\n");
	}
	if (num > 0){
		printf("양수 입니다.\n");
	}
	
	return 0;




	//계산기 if

	int userChoose = 1;
	double userNum1, userNum2;
	double result;

	printf("계산기 프로그램 1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 0.종료\n");
	printf("숫자를 입려하세요: ");
	scanf_s("%d", &userChoose, 1);

	
	while (userChoose != 0){
		while (userChoose > 4 || userChoose < 0){
			printf("잘못 입력하셨습니다.\n다시 입력하세요: ");
			scanf_s("%d", &userChoose, 1);
		}


		printf("계산 할 두 실수를 차례대로 입력하세요: ");
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
			printf("잘못 입력하셨습니다. \n");
		}


		printf("result : %f\n", result);
	}

	printf("\n프로그램을 종료합니다. \n");

	return 0;

	




	
	//7 or 9의 배수
	int num = 1;
	
	for (num = 1; num < 101; num++){
		
		if (num % 7 == 0 || num % 9 == 0){
			printf("7의 배수 또는 9의 배수: %d\n", num);
		}
	}

	return 0;

	

	int score = 0;

	int total = 0;
	int average = 0;

	int count = 1;

	for (count = 1; count <= 5; count++){

		printf("%d번째 학생의 점수를 입력하세요: ", count);
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

	printf("\n\n5명 학생 점수의 총합: %d\n", total);
	printf("5명 학생 점수의 평균: %d\n", average);

	return 0;


	*/
}