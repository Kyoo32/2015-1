/*
* Date : 2015. 3. 23
* Author : Kate
* Purpose : Array
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	/*
	//11-1.1

	int a[5] = { 0 };
	int i = 0;
	int max = 0;
	int min = 0;
	int sum = 0;

	printf("���� 5���� �Է��ϼ���: ");
	for (i = 0; i < 5; i++){
	scanf("%d", &a[i]);
	}

	max = a[0];
	min = a[0];
	for (i = 0; i < 5; i++){
	sum += a[i];
	max = (max > a[i]) ? max : a[i];
	min = (min < a[i]) ? min : a[i];
	}

	printf("max : %d \nmin: %d\nsum: %d\n", max, min, sum);

	return 0;


	//11-1.2
	char sentence[] = { 'G', 'o', 'o', 'd',' ', 't', 'i', 'm', 'e' };
	int howlong = (int)(sizeof(sentence) / sizeof(char));
	int i = 0;

	for (i = 0; i < howlong; i++){
	printf("%c", sentence[i]);
	}
	printf("\n");

	return 0;


	//11-2.1

	char voca[50];
	int len = 0;

	printf("�ܾ �Է��ϼ���: ");
	scanf("%s", voca);

	while (voca[len] != 0){
		len++;
	}

	printf("�Է��� ���ܾ��� ����: %d\n", len);

	return 0;

	

	//11-2.2

	char userVoca[50];
	int len = 0;
	int i = 0;

	printf("�ܾ �Է��ϼ���: ");
	scanf("%s", userVoca);

	while (userVoca[len] != '\0'){
		len++;
	}

	len--;
	for(i = 0; i < len; i++, len--){
		int temp;
		temp = userVoca[len];
		userVoca[len] = userVoca[i];
		userVoca[i] = temp;
	}

	printf("��� : %s \n", userVoca);

	return 0;


	

	//11-2.3

	char userVoca[50];
	int len = 0;
	int i = 0;
	int max = 0;

	printf("���ܾ��� �Է��ϼ���: ");
	scanf("%s", userVoca);

	while (userVoca[len] != '\0'){
		len++;
	}

	max = userVoca[0];

	for (i = 0; i < len; i++){
		max = (max > userVoca[i]) ? max : userVoca[i];
	}

	printf("���� ū �ƽ�Ű�ڵ�� %c\n", max);

	return 0;


	*/

}
