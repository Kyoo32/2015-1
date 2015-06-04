/*
* date: 11, 12, march, 2015
* author: Kate
* purpose: cStudy_2
*
*/

#include <stdio.h>

int main(void)
{
	char userInput;

	printf("알파벳 하나를 입력하세요. (단 x,y,z 제외) ");
	scanf_s("%c", &userInput, 1);

	printf("당신이 입력한 알파벳과 이후 두개는 %c %c %c 입니다. \n", userInput, userInput+1, (userInput)+2);

	return 0;
}