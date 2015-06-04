/*
* Date : 2015. 3. 22.
* Author : Kate
* Purpose : 도전 프로그래밍 1
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int GreatCommonNum(int, int);

int main(void)
{
	/*
	//1
	int userInput = 0;

	printf("10진수 하나를 입력하세요: ");
	scanf("%d", &userInput);

	printf("%d to %x", userInput, userInput);

	return 0;


	//2

	int userStart = 0, userEnd = 0;
	int i = 0, j = 0;

	printf("구구단을 출력합니다. 원하는 시작 단과 마지막 단을 입력하세요: ");
	scanf("%d %d", &userStart, &userEnd);

	if (userStart > userEnd){
		int temp;
		temp = userEnd;
		userEnd = userStart;
		userStart = temp;
	}

	for (i = userStart; i <= userEnd; i++)
	{

		for (j = 1; j < 10; j++){
			printf("%d * %d = %d \n", i, j, i*j);
		}
		printf("\n");
	}

	return 0;


	*/

	/*
	//3(1)
	int userNum1 = 0, userNum2 = 0;
	int biggerNum = 0;
	int greatCommonNum = 0;
	int i = 0;

	printf("최대공약수를 알려드립니다. 두 수를 입력하세요: ");
	scanf("%d %d", &userNum1, &userNum2);

	biggerNum = (userNum1 > userNum2) ? userNum1 : userNum2;

	for (i = biggerNum; i >0 ; i--){

		if (userNum1 % i == 0 && userNum2 % i == 0){
			greatCommonNum = i;
			break;
		}
	}

	if (greatCommonNum == 0){
		printf("두 수는 서로소입니다.\n");
	}
	else{
		printf("두 수의 최대공약수는 %d입니다.\n", greatCommonNum);
	}

	return 0;
	*/

	/*
	//3(2)

	int userNum1 = 0, userNum2 = 0;

	printf("최대공약수를 계산해 드립니다. 두 수를 입력하세요: ");
	scanf("%d %d", &userNum1, &userNum2);

	printf("두 수의 최대공약수는 %d 입니다. \n", GreatCommonNum(userNum1, userNum2));

	return 0;

	*/

	/*
	//4
	int a = 0, b = 0, c = 0, d = 0;

	printf("당신이 소유하고 있는 금액 : 3500\n");

	
	for (b = 0; b <= 10; b++){
			for (c = 0; c <= 7; c++){
				for (d = 0; d <= 12; d++){

					if (15 * a + 5 * b + 7 * c + 4 * d == 35)
						printf("크림빵 : %d, 새우깡 : %d, 콜 라 : %d\n",b,c,d);
				}
			}
		}
	

		return 0;
	*/

    /*
	//5
	int judge = 1;
	int num = 1;
	int count = 0;
	int i = 1;

	for (num = 2;; num++){
		judge = 1;
		for (i = 2; i < num; i++){
			if (num%i == 0) {
				judge = 0;
				break;
			}		
		}
		if (judge == 1){
			printf("%d ", num);
			count++;
		}

		if (count == 10){
			break;
		}
	}

	return 0;

	*/
	
	//7
	int userNum = 0;
	int border = 1;
	int i = 1;

	printf("숫자를 입력하세요: ");
	scanf("%d", &userNum);

	for (i = 1;; i++){
		border *= 2;
		if (border > userNum)
			break;
	}

	printf("\n상수 n 입력 : %d\n", userNum);
	printf("공식을 만족하는 k의 최댓값은 %d\n", i - 1);

	return 0;
}


int GreatCommonNum(int p, int q){

	if (q == 0) return p;

	return GreatCommonNum(q, p%q);
}