//
//  baduk.h
//  baduk
//
//  Created by Kate KyuWon on 4/10/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#ifndef baduk_baduk_h
#define baduk_baduk_h

#define badukSize 19

typedef char UTF8;

void explainBaduk(void);


void putStone(int arr[][badukSize]);
void tellTurn(int*, int*);
void printBoard(int arr[][badukSize]);
char userChoice(void);
int checkScope(int, int, int [][badukSize]);

void reactStone(int [][badukSize]);
void endOfGame(void);

#endif



