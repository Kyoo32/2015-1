
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){

	int ch;
	FILE *fp=fopen("out_date.txt", "r");
	if (fp == NULL){
		printf("File open error\n");
		return -1;
	}

	while ( (ch = fgetc(fp)) != EOF)
		printf("%c\n", ch);
	
	fclose(fp);



	return 0;

}