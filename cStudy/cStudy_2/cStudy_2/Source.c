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

	printf("���ĺ� �ϳ��� �Է��ϼ���. (�� x,y,z ����) ");
	scanf_s("%c", &userInput, 1);

	printf("����� �Է��� ���ĺ��� ���� �ΰ��� %c %c %c �Դϴ�. \n", userInput, userInput+1, (userInput)+2);

	return 0;
}