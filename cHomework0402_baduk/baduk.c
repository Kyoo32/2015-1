//
//  main.c
//  baduk
//
//  Created by Kate KyuWon on 4/10/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//


#define _CRT_SECURE_NO_WARNINGS
#include "baduk.h"

#include <stdio.h>
#include <stdlib.h>
//#include <locale.h>

char command = 'g';
int userX = 0, userY = 0;
int countB = 1, countW = 1;
int *ptrB = &countB, *ptrW = &countW;

int main(void) {
	//setlocale(LC_ALL, "ko_KR.utf8");
	
	
	int baduk[badukSize][badukSize] = { 0 };

    explainBaduk();
    if(command=='q'||command=='Q') {
        endOfGame();
        return 0;
    }

	while(countB <= 181){

		tellTurn(ptrB, ptrW);
		printBoard(baduk);
		putStone(baduk);
		command = userChoice();
		if (command == 'q' || command == 'Q'){
			endOfGame();
			break;
		}
		else if (command == 'r' || command == 'R'){
			reactStone(baduk);
			continue;
		}
		
	
		if (countB <= countW) countB++;
		else if (countB > countW) countW++;
	}


    return 0;
}


void explainBaduk(void)
{
    
	printf("┏━━━━━━━━━━━━━━━━━━━━┓\n");
    printf("｜       Welcome to Baduk game!          ｜\n");
    printf("｜Put the stone, black and white in turn ｜ \n");
    printf("｜ If the board are full or, you press q ｜\n");
    printf("｜           the game ends.              ｜\n");
    printf("｜        Now, press g to game           ｜\n");
    printf("｜         or q to quit.                 ｜\n");
	printf("┗━━━━━━━━━━━━━━━━━━━━┛\n");
	do{
		scanf("%c", &command);
		fflush(stdin);
		if (command != 'g' && command != 'q' && command != 'G' && command != 'Q')
			printf("(Incorrect input)\n");

	} while (command != 'g' && command != 'q' && command != 'G' && command != 'Q');
	fflush(stdin);
    
    return;
};
void endOfGame(void)
{
    system("cls");
	printf("┏━━━━━━━━━━━━━━━━━┓\n");
    printf("｜         The game ended.        ｜\n");
    printf("｜      I hope you have a fun     ｜\n");
    printf("｜           See U~               ｜\n");
	printf("┗━━━━━━━━━━━━━━━━━┛\n");

    return;
};


void printBoard(int a[][badukSize]){
    int i=0, j=0;
	//char*black = "♛";
    
	printf("┏━━━━━━━━━━━━━━━━━━━┓\n");
    for(i=0; i<badukSize; i++){
		printf("｜");
        for(j=0; j<badukSize; j++){
			if (a[i][j] == 0) printf("·");
			else if(a[i][j] == 1) printf("♥");
			else if (a[i][j] == 2) printf("♡");
        }
		printf("｜\n");
    }
	printf("┗━━━━━━━━━━━━━━━━━━━┛\n");
    return;
};
char userChoice(void){
	//char command = 'g';

	printf(" ┏━━━━━━━━━━━━━━━━━━┓\n");
	printf(" ｜ If you want to keep gaming, press g｜\n");
	printf(" ｜   or undo just before turn, press r｜\n");
	printf(" ｜       or stop the game, press q    ｜\n");
	printf(" ┗━━━━━━━━━━━━━━━━━━┛\n");

	do{
	scanf("%c", &command);
	fflush(stdin);
	if (command != 'g'&&command != 'r'&&command != 'q'&&command != 'G'&&command != 'R'&&command != 'Q')
		printf("(Incorrect input)\n");

	}while (command != 'g'&&command != 'r'&&command != 'q'&&command != 'G'&&command != 'R'&&command != 'Q');

	return command;
}
void tellTurn(int*b, int*w){

	system("cls");
	printf("\n ┏━━━━━━━━━━━━━━━━━━┓\n");
	printf(" ｜  black stone: %2d / white stone :%2d ｜\n", *b-1, *w-1);
	if (*b <= *w){
		printf(" ｜     It's black stone's turn, %d     ｜\n", *b);
	}
	else if(*b>*w){
		printf(" ｜     It's white stone's turn, %d     ｜\n", *w);
	}
	printf(" ┗━━━━━━━━━━━━━━━━━━┛\n");
	return;
}
void putStone(int a[][badukSize]){
	
	int check = 0;
	printf("\n ┏━━━━━━━━━━━━━━━━━━┓\n");
	printf(" ｜           If you keep gaming,      ｜\n");
	printf(" ｜        put the position (x, y)     ｜\n");
	printf(" ｜       ( x : 1 ~ 19, y : 1 ~ 19 )   ｜\n");
	printf(" ┗━━━━━━━━━━━━━━━━━━┛\n");

	
	scanf("%d %d", &userX, &userY);
	fflush(stdin);
	
	
	check = checkScope(userX, userY, a);
	
	while(check != 0){
		
		printf("\n ┏━━━━━━━━━━━━━━━━━━┓\n");
		printf(" ｜            Wrong scope!!           ｜\n");
		printf(" ｜          Try other position        ｜\n");
		printf(" ┗━━━━━━━━━━━━━━━━━━┛\n");


		scanf("%d %d", &userX, &userY);
		fflush(stdin);

		check = checkScope(userX, userY, a);
	}

	if (countB <= countW){
		a[userX - 1][userY - 1] = 1;
	}
	else if (countB > countW){
		a[userX - 1][userY - 1] = 2;
	}

	return;
}
int checkScope(int a, int b, int arr[][badukSize] ){
	int check = 0;

	if (a > 19 || a<1) check = 1;
	if (b > 19 || b<1) check = 1;

	if (arr[a - 1][b - 1] != 0) check = 1;

	return check;
}


void reactStone(int a[][badukSize]){

	a[userX - 1][userY - 1] = 0;
	userX = 0;
	userY = 0;
	
	return;
}
