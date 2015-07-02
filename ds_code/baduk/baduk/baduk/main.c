//
//  main.c
//  baduk
//
//  Created by Kate KyuWon on 4/10/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include "baduk.h"

#include <stdio.h>
#include <stdlib.h>

char command = 'g';

int main(void) {
    int baduk[badukSize][badukSize];
    
    explainBaduk();
    if(command=='q') {
        endOfGame();
        return 0;
    }
    printBoard(baduk);
    //putStone(baduk);
    
    return 0;
}

void explainBaduk(void)
{
    
    printf("---------------------------------\n");
    printf("|     바둑게임에 오신걸 환영합니다!      |\n");
    printf("|   흑과 백 순서대로 수를 놓아주세요.     | \n");
    printf("|  바둑판이 모두 채워지거나, 수를 놓기전에  |\n");
    printf("|   q를 누르면 게임이 종료됩니다.        |\n");
    printf("| 게임을 시작하려면 g, 하기 싫으면 q를    |\n");
    printf("|         눌러주세요 (◕‿‿◕｡)        |\n");
    printf("---------------------------------\n");
    
    scanf("%c", &command);
    
    return;
};

void endOfGame(void)
{
    system("cls");
    printf("---------------------------------\n");
    printf("|         바둑게임을 종료합니다!       |\n");
    printf("|         재밌는 게임 되셨나요??       |\n");
    printf("|       다음에 또 만나요 (◕‿‿◕｡)     |\n");
    printf("---------------------------------\n");

    return;
};


void printBoard(int a[][badukSize]){
    int i=0, j=0;
    
    for(i=0; i<badukSize; i++){
        for(j=0; j<badukSize; j++){
            
            
        }
    }

    return ;
};

