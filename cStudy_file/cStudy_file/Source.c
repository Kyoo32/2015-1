#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){


	
	FILE * fp = fopen("mystory.txt", "wt");
	if (fp == NULL){
		puts("fail to open the file.");
		return -1;
	}

	fputs("#name : Kate\n",fp);
	fputs("#Id : 1234\n",fp);
	fputs("#moblie: 123\n",fp);

	//fflush(fp);

	fclose(fp);

	

	FILE *fp;
	


	return 0;
}