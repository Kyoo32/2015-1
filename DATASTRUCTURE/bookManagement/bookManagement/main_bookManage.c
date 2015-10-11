//
//  main.c
//  bookManagement
//
//  Created by Kate KyuWon on 5/8/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include "Header_bookManagement.h"

int numBook = 0;
Book *library;
int librarySize = 1;

int main(int argc, const char * argv[]) {
    
    
    library = (Book*)malloc( sizeof(Book) * librarySize );
    
    char code;
    
    while(1){
        
        system("clear");
        
        printf("i-insert book, s-search book, p-print library, q-quit program\n");
        printf("Enter operation code: ");
        scanf(" %c", &code);
        while(getchar() != '\n');
        
        switch(code){
            case 'i' : insertBook();
                break;
            case 's':  searchBook();
                break;
            case 'p': printLibrary();
                break;
            case 'q':
                free(library);
                return 0;
            default: printf("Illegal code\n");
        }
        printf("\n");
    }
    
    
    
    return 0;

}



