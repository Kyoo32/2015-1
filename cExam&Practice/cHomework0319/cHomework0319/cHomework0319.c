/*
* Date : 2015. 3. 19
* Author : 이규원
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

	printf("몇 개를 입력받으실까요? ");
	scanf_s("%d", &userCount, 1);

	while (userCount < 1){
		printf("양의 정수를 입력해주세요: ");
		scanf_s("%d", &userCount, 1);
	}

	for (i = 0; i < userCount; i++){

		printf("입력 %d: ", i + 1);
		scanf_s("%d", &userInput, 1);
		sum += userInput;
	}

	average = (double)sum / userCount;

	printf("평균  : %f", average);


	return 0;

	*/


	/*
	//lab7

	int userInput = 0;
	int sum = 0;
	int i = 0;

	while (i < 5){
		printf("%d번째 정수를 입력하세요: ", i + 1);
		scanf_s("%d", &userInput, 1);

		while (userInput < 1){
			printf("1과 같거나 큰 수를 입력하세요: ");
			scanf_s("%d", &userInput, 1);
		}

		sum += userInput;

		i++;
	}

	//for (i = 0; i < 5; i++){
	//	printf("%d번째 정수를 입력하세요: ", i + 1);
	//	scanf_s("%d", &userInput, 1);

	//	while (userInput < 1){
	//		printf("1과 같거나 큰 수를 입력하세요: ");
	//		scanf_s("%d", &userInput, 1);
	//	}

	//	sum += userInput;
	//}


	printf("합은 %d\n", sum);
	return 0;

	*/


	/*

	//과제2

	double userNum1 = 0, userNum2 = 0;
	int judge = 1;

	printf("두 수를 입력하세요: ");
	scanf_s("%lf %lf", &userNum1, &userNum2, 2);

	judge = (userNum1 < 0 || userNum2 < 0) ? 0 : 1;

	if (judge == 1){
		printf("모두 양수 입니다.\n");
	}
	else {
		printf("모두 양수는 아닙니다. \n");
	}

	return 0;


	

	//과제3
	int userInput = 1;
	int sum = 0;
	double average = 0;
	int i = 1;

	for (i = 1; userInput != 0; i++){

		printf("%d번째 수를 입력하세요(0 to quit): ",i);
		scanf_s("%d", &userInput, 1);

		if (userInput == 0) {
			i--;
			break;
		}
		sum += userInput;
	}
	
	
	if (i == 0) printf("종료합니다.\n");
	else{
		average = (double)sum / i;
		printf("\n%d개 수의 평균: %f\n", i, average);
	}
	return 0;

	*/

	/*
	//과제4
	
	int userNum1 = 0, userNum2 = 0;
	int sum = 0;
	int i = 0;

	printf("양의 정수 두개를 입력하세요: ");
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

	printf("두 수 사이의 합: %d\n", sum);

	return 0;

	*/


	//과제 1, fflush 함수의 용도

fflush 함수는 Flush File Buffer를 한다.

int fflush(FILE *stream); 과 같이 쓴다.

fflush는 buffer로 간 stream data 중에 unwritten한 data를 write한다.
이때 stream은 ***output이나 updating을 위해 생성된 것이다.

만일 stream이 null pointer라면, fflush는 버퍼안에 저장된 모든 안 읽힌 데이터를 가지는 모든 stream을 비운다.

return값은 함수가 기능에 맞게 작동하면 zero를, error가 발생했다면 EOF이다.

***fflush는 output fflush를 위해 만들어졌으므로, input stream flush를 위해서 사용하는 것은 바르지 않다.





}
