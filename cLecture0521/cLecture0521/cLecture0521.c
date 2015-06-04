
#include <stdio.h>
#include <string.h>

typedef struct student{
	char name[50];
	int Id;
	int cs;
	int db;
}student_t;


int main(void){


	int ch = 1;
	char buffer[512];
	int num;


	FILE *readFile = fopen("readText.txt", "rt");
	if (readFile == NULL){
		puts("read file error");
	}
	FILE *writeFile = fopen("writeText.txt", "wt");
	if (writeFile == NULL){
		puts("write file error");
	}

	
	
	while ( ch = fgetc(readFile) != EOF ) {
		printf("%c", ch);
		fputc(ch, writeFile);
	}


	fclose(readFile);
	fclose(writeFile);

	FILE *source = fopen("source.txt", "rt");
	if (source == NULL){
		puts("read file error");
	}

	student_t s1;
	fscanf(source, "%s %d %d %d", s1.name, &s1.Id, &s1.cs, &s1.db);

	student_t s2;
	fscanf(source, "%s %d %d %d", s2.name, &s2.Id, &s2.cs, &s2.db);

	student_t s3;
	fscanf(source, "%s %d %d %d", s3.name, &s3.Id, &s3.cs, &s3.db);

	FILE *dest = fopen("dest.txt", "wt");
	if (dest == NULL){
		puts("write file error");
	}

	fprintf(dest, "%s %d %d %d\n", s1.name, s1.Id, s1.cs, s1.db);
	fprintf(dest, "%s %d %d %d\n", s2.name, s2.Id, s2.cs, s2.db);
	fprintf(dest, "%s %d %d %d\n", s3.name, s3.Id, s3.cs, s3.db);

	fclose(source);
	fclose(dest);


	return 0;
}
