/*
* Date: 2015. 5. 7
* Purpose: find and change word
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void findAndChange(FILE*, char*, char*);

int main(int argc, char *argv[]){

	char ch;
	//char filename[100];
	printf("Enter the file name: \n");
   //scanf("%s", filename);

	char searchingWord[100];
	char replacingWord[100];

	if (argc != 2){
		printf("usage : %s filename\n", argv[0]);
	}
	else{

		FILE *userFile = fopen(argv[1], "r");
	

		FILE *tempFile = fopen("temp.txt", "w");
		if (userFile == NULL || tempFile == NULL){
			puts("fail to open file");
			return -1;
		}

		while ((ch = fgetc(userFile)) != EOF)
			fputc(ch, tempFile);
		fclose(userFile);

		puts("Enter the word you want to find:");
		scanf("%s", searchingWord);

		puts("Enter the word replacing found word: ");
		scanf("%s", replacingWord);

		findAndChange(tempFile, searchingWord, replacingWord);

		FILE *modifiedFile = fopen("modified.txt", "w");

		while ((ch = fgetc(tempFile)) != EOF)
			fputc(ch, modifiedFile);

		fclose(tempFile);
		fclose(modifiedFile);
	}

	return 0;
}

void findAndChange(FILE*temp, char*searching, char*replacing){

	if (strstr(searching, temp) )
		printf("%s", searching);

	return;
}


