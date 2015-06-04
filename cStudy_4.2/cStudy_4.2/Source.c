/*
* Date : 2015. 3. 18
* Author : Kate
* Purpose : solve examples of chapter 9 in the C book
*/

#include <stdio.h>


/*
//9-1.1
int MaxNum(int, int, int);
int MinNUm(int, int, int);

int main(void)
{
	int num1, num2, num3;

	printf("������ ������ �Է��ϼ���: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("���� ū ���� %d\n", MaxNum(num1, num2, num3));
	printf("���� ���� ���� %d\n", MinNum(num1, num2, num3));

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


/*
//9-1.2

double CelToFah(double);
double FahToCel(double);

int main(void)
{
	double userInput;
	int choose;

	printf("���α׷��� ������ ���� ���ڸ� �Է��ϼ���:\n");
	printf("����(cel)�� ȭ��(fal)��:0\nȭ��(fal)�� ����(cel)��:1\n");

	scanf_s("%d", &choose);

	printf("\n�µ��� �Է��ϼ���: ");
	scanf_s("%lf", &userInput);

	switch (choose)
	{
		case 0:
			printf("---> %d\n", CelToFah(userInput));
			break;
		case 1:
			printf("---> %d\n", FahToCel(userInput));
			break;
		default :
			printf("���ÿ���\n");
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

/*9-1.3

//
void ShowFiboSeries(int many)
{
	int f1 = 0, f2 = 1, f3 = 0, i = 0;
	
	if (many == 1)
		printf("%d", f1);
	else
		printf("%d %d ", f1, f2);


		for (i = 0; i < many - 2; i++)
		{
			f3 = f1 + f2;
			printf("%d ", f3);
			f1 = f2;
			f2 = f3;
		}
	return 0;
}

int main(void)
{
	int many = 0;

	printf("�Ǻ���ġ�� ����մϴ�. �� �� ����ұ��?");
	scanf_s("%d", &many, 1);

	ShowFiboSeries(many);


	return 0;
}


*/

