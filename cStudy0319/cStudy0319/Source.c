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

	printf("칼로리를 계산해 드립니다. \n\n");
	
	printf("\na.밥 -300cal\nb.된장찌개 - 128cal\nc.설렁탕 - 212cal\nd.갈비탕 - 630cal\ne.김치전 - 196cal\nf.불고기 - 163cal\ng.시금치나물 - 79cal\nh.도라지나물 - 110cal\ni.배추김치 - 33cal\n");
	
	printf("\n먹은 음식 4개 이하를 입력하세요. (0 to nothing)\n");
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

	printf("\n\n당신이 먹은 총 칼로리의 양은 %d 입니다. \n", sum);
	if (sum <= 500)
		printf("이대로라면 당신도 몸짱!\n");
	else if (sum > 500 && sum <= 700)
		printf("지금 먹던 거 내려 놓으세요.\n");
	else
		printf("비만 접근!!!\n");

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

	printf("얼마의 칩이 환전되는 지 알려드립니다. \n한화 금액을 입력하세요: ");
	scanf_s("%d", &won,1);

	printf("\n%d개의 칩으로 환전됩니다.\n", WonToChip(won));

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
	printf("갯수랑 길이: ");
	scanf_s("%d %lf", &num, &length,2);

	printf("답 : %f", SumOfSqure(num, length));

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

