/*
* Date : 2015. 3. 19
* Author : Kate
* Purpose : cStudy chapter 8,9
*/


/*
int main(void)
{
	
	//8-2

	char food = 0;
	//int removeNewline = 0;
	int sum = 0;
	int i = 0;

	printf("Į�θ��� ����� �帳�ϴ�. \n\n");
	
	printf("\na.�� -300cal\nb.����� - 128cal\nc.������ - 212cal\nd.������ - 630cal\ne.��ġ�� - 196cal\nf.�Ұ�� - 163cal\ng.�ñ�ġ���� - 79cal\nh.���������� - 110cal\ni.���߱�ġ - 33cal\n");
	
	printf("\n���� ���� 4�� ���ϸ� �Է��ϼ���. (0 to nothing)\n");
	for (i = 0; i < 4; i++)
	{
		scanf("%c",  &food);
		getchar();


		if (food == 'a')
			sum += 300;
		else if (food == 'b')
			sum += 128;
		else if (food == 'c')
			sum += 212;
		else if (food == 'd')
			sum += 630;
		else if (food == 'e')
			sum += 196;
		else if (food == 'g')
			sum += 79;
		else if (food == 'h')
			sum += 110;
		else if (food == 'i')
			sum += 33;
		else
			continue;
	}

	printf("\n\n����� ���� �� Į�θ��� ���� %d �Դϴ�. \n", sum);
	if (sum <= 500)
		printf("�̴�ζ�� ��ŵ� ��¯!\n");
	else if (sum > 500 && sum <= 700)
		printf("���� �Դ� �� ���� ��������.\n");
	else
		printf("�� ����!!!\n");

	return 0;

}
	
*/




/*
//9-2

#include <stdio.h>

int WonToChip(int);
int main (void)
{
	int won=0;

	printf("���� Ĩ�� ȯ���Ǵ� �� �˷��帳�ϴ�. \n��ȭ �ݾ��� �Է��ϼ���: ");
	scanf_s("%d", &won,1);

	printf("\n%d���� Ĩ���� ȯ���˴ϴ�.\n", WonToChip(won));

	return 0;
}

int WonToChip(int money)
{
	 int chip;

	if (money >= 50000){
		money = money / 100;
		chip = money * 0.9;
	}
	else if (money < 50000){
		money = money / 100;
		chip = money;
	}

	return chip;
}


*/








double SumOfSqure(int, double);
int main(void)
{
	int num;
	double length;
	printf("������ ����: ");
	scanf_s("%d %lf", &num, &length,2);

	printf("�� : %f", SumOfSqure(num, length));

	return 0;
}

double SumOfSqure(int num, double length)
{
	float sum = 0;
	float squre;
	int i=0;

	if (num == 1){
		sum += length * length;
		return sum;
	}
	
	squre = length * length;
	for (i = 0; i < num-1; i++)
	{
		squre = squre * 25 / 49;
	}

	sum = squre + SumOfSqure(num - 1, length);
	
	return sum;
}

