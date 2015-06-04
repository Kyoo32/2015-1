/*
* Date : 2015. 3. week4
* 범위 : 함수, 조건문
*/

#include "cHomework.h"
#include <stdio.h>



/*
//lab3 온도 변환
int main(void)
{
	double userInput;
	int choose;

	printf("프로그램을 선택을 위해 숫자를 입력하세요:\n");
	printf("섭씨(cel)를 화씨(fal)로:0\n화씨(fal)를 섭씨(cel)로:1\n");

	scanf_s("%d", &choose);

	printf("\n온도를 입력하세요: ");
	scanf_s("%lf", &userInput);

	switch (choose)
	{
	case 0:
		printf("---> %d\n", CelToFah(userInput));
		break;
	case 1:
		printf("---> %d\n", FahToCel(userInput));
		break;
	default:
		printf("선택오류\n");
		break;
	}

	return 0;
}

double CelToFah(double cel)
{
	double fah;

	fah = 1.8 * cel + 32;

	return fah;
}

double FahToCel(double fah)
{
	double cel;

	cel = (fah - 32) / 1.8;

	return cel;
}

*/

/*

//lab5 가장 큰 수, 가장 작은 수 반환

int main(void)
{
	int num1, num2, num3;

	printf("세개의 정수를 입력하세요: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("가장 큰 수는 %d\n", MaxNum(num1, num2, num3));
	printf("가장 작은 수는 %d\n", MinNum(num1, num2, num3));

	return 0;

}


int MaxNum(int a, int b, int c)
{
	int max;

	max = (a > b) ? a : b;
	max = (max > c) ? max : c;

	return max;
}

int MinNum(int a, int b, int c)
{
	int min;

	min = (a < b) ? a : b;
	min = (min < c) ? min : c;

	return min;


}


*/



int main(void)//도전 프로그래밍
{
	/*
	//1
	int userInput = 0;

	printf("10진수 하나를 입력하세요: ");
	scanf("%d", &userInput);

	printf("%d to %x", userInput, userInput);

	return 0;
	*/
	
	/*
	//2

	int userStart = 0, userEnd = 0;
	int i = 0, j = 0;

	printf("구구단을 출력합니다. 원하는 시작 단과 마지막 단을 입력하세요: ");
	scanf_s("%d %d", &userStart, &userEnd,2);

	if (userStart > userEnd){
	int temp;
	temp = userEnd;
	userEnd = userStart;
	userStart = temp;
	}

	printTable (userStart, userEnd);

	return 0;


	

	
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
	

	int userSecond = 0;
	
	printf("초를 입력하세요: ");
	scanf_s("%d", &userSecond, 1);

	secondTohms(userSecond);

	return 0;
	
	


	//7
	int userNum = 0;
	
	

	printf("숫자를 입력하세요: ");
	scanf_s("%d", &userNum, 1);

	greatK(userNum);

	return 0;

	*/

	/*
	//8
	int n = 0;
	
	printf("양의 정수를 입력하세요: ");
	scanf_s("%d", &n, 1);

	printf("2의 %d승은 %d\n", n, multOfTwo(n));

	return 0;
	
	*/
}


void printTable(int userStart, int userEnd)//도전 프로그래밍 2
{
	int i = 0, j=0;
	for (i = userStart; i <= userEnd; i++)
	{

		for (j = 1; j < 10; j++){
			printf("%d * %d = %d \n", i, j, i*j);
		}
		printf("\n");
	}
}

int GreatCommonNum(int p, int q)//도전 프로그래밍 3(2)
{

	if (q == 0) return p;

	return GreatCommonNum(q, p%q);

}

void secondTohms(int userSecond)//도전 프로그래밍6

{
	int hour = userSecond / 3600;
	int min = (userSecond - 3600 * hour) / 60;
	int second = (userSecond - 3600 * hour) %60;

	printf("[h : %d, m: %d, s: %d]\n", hour, min, second);

}

void greatK(int userNum)//도전프로그래밍7
{
	int border = 1;
	int i = 1;

	for (i = 1;; i++){
		border *= 2;
		if (border > userNum)
			break;
	}

	printf("\n상수 n 입력 : %d\n", userNum);
	printf("공식을 만족하는 k의 최댓값은 %d\n", i - 1);
}

int multOfTwo(int n)//도전프로그래밍 8
{
	if (n == 1) return 2;

	else return 2 * multOfTwo(n - 1);
	
}




