
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void){
	/*
	char buffer[5];

	int i;

	for (i = 0; i < 3; i++){
		fgets(buffer, sizeof(buffer), stdin);
		puts(buffer);
		printf("strlen(buffer) = %d\n", strlen(buffer));
	}

	fflush(stdout);



	*/



	/*  string io
	char str1[10];
	char str2[10];
	char str3[20];

	fgets(str1,strlen(str1),stdin);
	str1[strlen(str1) - 1] = 0;
	
	fgets(str2,strlen(str2), stdin);
	
	

	fgets(str3, 5, str1);
	

	fgets(&str3[5], 5, str2);
	
	
	
	puts(str3);



	*/

	////////tokenize practice!!!!!!!!!!!!!!

	char first[100];
	char second[100];
	char *fptr = first;
	char *sptr = second;
	int i = 0;

	fgets(first, sizeof(first), stdin);
	fgets(second, sizeof(second), stdin);

	first[strlen(first) - 1] = 0;
	second[strlen(second) - 1] = 0;

	while (*(fptr++) != ' ');
	while (*(sptr++) != ' ');

	for (i = 0; &first[i] < fptr; i++){
		if ( first[i] != second[i]) {
			puts("1");
			return 0;
		}
		puts("0");
	}

	fptr++;
	sptr++;
	i++;

	while (fptr == &first[strlen(first)]|| * (fptr++) != ' ');
	while (sptr == &second[strlen(second)] || *(sptr++) != ' ');

	for (; &first[i] < fptr; i++){
		if (first[i] != second[i]) {
			puts("1");
			return 0;
		}
		puts("0");
	}



	return 0;
}