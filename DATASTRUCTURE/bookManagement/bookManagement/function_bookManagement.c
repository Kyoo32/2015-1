//
//  function_bookManagement.c
//  bookManagement
//
//  Created by Kate KyuWon on 5/8/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include "Header_bookManagement.h"


void clearLineFromReadBuffer(void){
    while(getchar() != '\n');
}

int findBook(int bookcode){
    int i;
    
    for(i=0; i<numBook; i++){
        if (library[i].bookcode == bookcode) {
            return i;
        }
    }
    return -1;
}

int read_line(char str[], int n){
    int ch, i =0;
    
    while(isspace (ch = getchar() ));
    while (ch!= '\n' && ch !=EOF){
        if (i<n){
            str[i++] = ch;
        }
        ch =getchar();
    }
    str[i] = '\0';
    return i;
    
}


void insertBook(void){
    
    int bookcode;
    char check;
    
    if(numBook >= librarySize){
        printf("Database is full; can't add more books.\n");
        extendLib(library);
        
    }
    
    printf("Enter bookcode: ");
    
   
    while(scanf("%d%c",&bookcode,&check) != 2 || check != '\n')
    {
       
        printf("Please enter an integer only: ");
        if(check == '\n'){
            scanf("%c",&check);
           
        }
        else
        {
            while(check != '\n') {
                scanf("%c",&check);
            }
                }
        
        check = 0;
    }
    
    
    if (findBook(bookcode) >= 0){
        printf("Book you want to add already exists.\n");
        return;
    }
    
    library[numBook].bookcode = bookcode;
    printf("Enter book name: ");
    read_line(library[numBook].name, BOOK_LEN);
    printf("Enter the genre(fiction = 1 /nonfiction = 2): ");
    scanf("%d", &library[numBook].genre);
    clearLineFromReadBuffer();
    while(library[numBook].genre != 1 && library[numBook].genre != 2){
        printf("Wrong input, try to enter again: ");
        scanf("%d", &library[numBook].genre);
        clearLineFromReadBuffer();
    }
    numBook++;
}

void extendLib (struct book * originalLib){
   
    originalLib = (Book*)realloc(originalLib, librarySize * 2);
   
    (librarySize) *= 2;
    
    return ;
}

void searchBook(void){
    int i, bookcode;
    char code = 0;
    
    printf("Enter part bookcode: ");
    scanf("%d", &bookcode);
    clearLineFromReadBuffer();
    i=findBook(bookcode);
    
    if(i >= 0){
        printf("Book name :%s\n", library[i].name);
        printf("The genre of the book: ");
        if(library[i].genre == 0) printf("%s\n", "fiction");
        else printf("%s\n", "nonfiction");
        
        printf("If you want to \namend this book's information, press a,\ndelete this book, press d,\nnothing, press n\n");
        scanf("%c", &code);
        getchar();
        
        switch(code){
            case 'd': deleteBook(i);
                break;
            case 'a': amendBookInfor(i);
                break;
            case 'n': break;
        }
        
    }
    else{
        printf("Book not found.\n");
    }
}

void deleteBook(int bookPos){
    int i=bookPos;
    
    for(i=bookPos ; i<librarySize;i++){
        library[i]=library[i+1];
    }
    
    numBook--;
    
}

void amendBookInfor(int bookPos){
    char code =0;
    printf("to amend name, press n\nto amead genre, press g: ");
    scanf("%c", &code);
    clearLineFromReadBuffer();
    
    switch(code){
    case 'n':
            printf("Enter book name: ");
            read_line(library[bookPos].name, BOOK_LEN);
            break;
    case 'g':
            printf("Enter the genre(fiction = 0 /nonfiction = 1): ");
            scanf("%d", &library[bookPos].genre);
            clearLineFromReadBuffer();
            while(library[bookPos].genre != 1 &&library[bookPos].genre != 2){
                printf("Wrong input, try to enter again: ");
                scanf("%d", &library[bookPos].genre);
                clearLineFromReadBuffer();
            }
            break;
    }
    
}


void printLibrary(void){
    int i;
    
    printf("|Book Code  /     Book Name     /      Book Genre|\n");
    for(i=0; i<numBook ; i++){
        printf("%-10d    %-25s", library[i].bookcode, library[i].name);
        if(library[i].genre == 0) printf("%10s\n", "fiction");
        else printf("%10s\n", "nonfiction");
    }
}
