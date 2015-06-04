
#include <conio.h>
#include<stdio.h>
#include <Windows.h>
#include<processenv.h>

enum {
	BLACK,      /*  0 : ��� */
	DARK_BLUE,    /*  1 : ��ο� �Ķ� */
	DARK_GREEN,    /*  2 : ��ο� �ʷ� */
	DARK_SKY_BLUE,  /*  3 : ��ο� �ϴ� */
	DARK_RED,    /*  4 : ��ο� ���� */
	DARK_VOILET,  /*  5 : ��ο� ���� */
	DARK_YELLOW,  /*  6 : ��ο� ��� */
	GRAY,      /*  7 : ȸ�� */
	DARK_GRAY,    /*  8 : ��ο� ȸ�� */
	BLUE,      /*  9 : �Ķ� */
	GREEN,      /* 10 : �ʷ� */
	SKY_BLUE,    /* 11 : �ϴ� */
	RED,      /* 12 : ���� */
	VOILET,      /* 9 : ���� */
	YELLOW,      /* 10 : ��� */
	WHITE,      /* 15 : �Ͼ� */
};




void textColor(int _colorValue)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), _colorValue);
}

int gotoxy(int x, int y)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.Y = y;
	pos.X = x;
	SetConsoleCursorPosition(hConsole, pos);
	return 0;
}

int show_logo()
{
	int i, j;
	int cur_color = 0;
	gotoxy(40, 2);
	printf("Kyoo's");
	Sleep(100);
	gotoxy(20, 3);
	printf("������������������������������������������");
	Sleep(100);
	gotoxy(20, 4);
	printf("���ڡڡ�      �ڡ�      �ڡ�    ��    �ڦ�");
	Sleep(100);
	gotoxy(20, 5);
	printf("����    ��  ��    ��  ��    ��  ��  ��  ��");
	Sleep(100);
	gotoxy(20, 6);
	printf("���ڡڡ�    ��    ��  ��    ��  �ڡ�    ��");
	Sleep(100);
	gotoxy(20, 7);
	printf("����    ��  ��    ��  ��    ��  ��  ��  ��");
	Sleep(100);
	gotoxy(20, 8);
	printf("���ڡڡ�      �ڡ�      �ڡ�    ��    �ڦ�");
	Sleep(100);
	gotoxy(20, 9);
	printf("������������������������������������������");
	gotoxy(20, 10);
	puts("Ver 0.1");


	gotoxy(28, 20);
	printf("Please Press Any Key~!");

	for (i = 0; i >= 0; i++)
	{
		if (i % 8 == 0)
		{
			gotoxy(22, 19);
			for (j = 0; j<37; j++)
			{
				textColor((cur_color + j) % 16 * 16);
				printf(" ");
				
			}
			if (cur_color >0)
				cur_color--;
			else
				cur_color = 15;
		
		}
		if (kbhit())
			break;
		Sleep(30);
	}

	getche();
	textColor(GRAY);
	system("cls");

	return 0;
}


int main(void){

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	textColor(WHITE);
	show_logo();

	return 0;
}