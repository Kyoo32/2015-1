/*
* Date : 2015. 3. 17
* Author : Kate
* Purpose : practice printf, scanf, and loop
*/


#include <stdio.h>

int main(void)

{
	/*
	//6.1

	char userInput = 0;
	int sum = 0, count = 0;


	printf("���ĺ� �ϳ�: ");
	scanf_s("%c", &userInput, 1);

	while (count < userInput){
		count++;

		sum += count;

	}

	printf("����� �Է� �� : %d \n�� : %d \n", userInput, sum);

	return 0;

	


	//7.1
	int userNature = 0;
	int divresult = 2;
	int remain = 0;

	printf("�ڿ��� �ϳ��� �Է��ϼ��� : ");
	scanf_s("%d", &userNature, 1);

	while (divresult>1)
	{
		divresult = userNature / 2;
		remain = userNature % 2;

		printf("%d ----- %d\n", userNature, remain);
		userNature = divresult;
	}

	printf("%d \n", userNature);

	return 0;

	
	//7.4

	int baskinNum = 31;
	int userShout = 0;
	int count = 0;
	int startNum = 0, endNum = 0;

	printf("����Ų~���~31!\n");

	do{

		printf("��ĥ ������ �Է��ϼ���(1~3, 0�� ����): ");
		scanf_s("%d", &userShout, 1);
		
		while (userShout < 0 || userShout>3)//����ڰ� 0~3�� �Է��ϵ��� �Ѵ�.
		{
			printf("��ĥ ������ �Է��ϼ���(1~3, 0�� ����): ");
			scanf_s("%d", &userShout, 1);
		};

		startNum = count;
		endNum = count + userShout;
		
		while (startNum<baskinNum &&count < endNum)//count�� ���ڸ� �����鼭, ��������� �˷��ش�.
		{
			count++;
			startNum = count;
			printf("%d ", count);
		}
		printf("\n");


	} while (count < baskinNum && userShout !=0);

	
	return 0;

	

	//6.2

	int f1, f2, f3, f4; //f means first
	int s1, s2, s3, s4; //s means second
	int t1, t2, t3, t4; //t means third
	int fr1, fr2, fr3, fr4; //fr means four

	printf("���ϴ� �������, ��������, 1���� 16�� �Է��ϼ���: ");
	scanf_s("%d %d %d %d", &f1, &f2, &f3, &f4, 4);
	scanf_s("%d %d %d %d", &s1, &s2, &s3, &s4, 4);
	scanf_s("%d %d %d %d", &t1, &t2, &t3, &t4, 4);
	scanf_s("%d %d %d %d", &fr1, &fr2, &fr3, &fr4, 4);

	printf("%10d%10d%10d%10d\n", f1, f2, f3, f4);
	printf("%10d%10d%10d%10d\n", s1, s2, s3, s4);
	printf("%10d%10d%10d%10d\n", t1, t2, t3, t4);
	printf("%10d%10d%10d%10d\n\n", fr1, fr2, fr3, fr4);

	printf("���� ��: %7d%7d%7d%7d\n", f1 + f2 + f3 + f4, s1 + s2 + s3 + s4, t1 + t2 + t3 + t4, fr1 + fr2 + fr3 + fr4);
	printf("���� ��: %7d%7d%7d%7d\n", f1 + s1 + t1 + fr1, f2 + s2 + t2 + fr2, f3 + s3 + t3 + fr3, f4 + s4 + t4 + fr4);
	printf("�밢���� ��: %d, %d\n", f1 + s2 + t3 + fr4, f4 + s3 + t2 + fr1);

	return 0;

	*/

	//7.3 show the being of Ramanujan number
		//Ramanujan Number = a^3 + b^3 = c^3 + d^3
	int a=1, b=1, c=1, d=1;
	int left = a * a * a + b * b * b;
	int right = 0 ;// c * c *c + d * d * d;
	int count = 1;

	
	// b >= a , c >= d
	for (b = 1; b < 50; b++)
	{
		for (a = 1; a <= b; a++)
		{
			left = a*a*a + b*b*b;

			for (c = 1; c < a; c++)
			{
				right = 0;
				for (d = c; right <=left ; d++)
				{
					right = c * c *c + d * d * d;
					
					for (; right == left;)
					{
						printf("Ramanujan Number %d : %d\n", count, left);
						count++;
						break;
					}
					
				}
			}


		}
	}

	return 0;
}