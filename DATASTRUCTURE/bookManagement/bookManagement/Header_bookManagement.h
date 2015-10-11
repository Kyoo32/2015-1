//
//  Header_bookManagement.h
//  bookManagement
//
//  Created by Kate KyuWon on 5/8/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#ifndef bookManagement_Header_bookManagement_h
#define bookManagement_Header_bookManagement_h

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


#define BOOK_LEN 100

extern int numBook;
extern int librarySize;

typedef struct book {
    int bookcode;
    char name[BOOK_LEN+1];
    enum {fiction = 1, nonfiction = 2} genre;
} Book;

extern Book* library;

void clearLineFromReadBuffer(void);

int findBook(int bookcode);
int read_line(char str[], int n);
void insertBook(void);
void searchBook(void);
void printLibrary(void);
void deleteBook(int bookPos);
void amendBookInfor(int bookPos);

void extendLib (struct book*);


#endif
