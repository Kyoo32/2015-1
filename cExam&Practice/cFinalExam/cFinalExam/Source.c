#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>




typedef struct student{
	int id;
	char name[50];
	char phone[50];
} student_t;


void mystrcat(const char* str1, const char* str2, char* result){
	char *p = str1;
	int len = strlen(str1);
	int i = 0;
	
	while (i<len){
		result[i] = *p;
		p++;
		i++;
	}
	len = len + strlen(str2);
	p = str2;
	while(i < len){
		result[i] = *p;
		p++;
		i++;
	}
	result[i] = '\0';
}
void MaxAndMin(int* arr, int len, int**pmax, int**pmin){
	int i = 0;
	*pmax = &arr[i];
	*pmin = &arr[i];

	for (i = 0; i < len; i++){
		if (**pmax < arr[i]) *pmax = &arr[i];
		if (**pmin > arr[i]) *pmin = &arr[i];
	}
}
int main(void){
	/*
	char *str1 = "hello";
	char *str2 = "world";
	int lenSum = strlen(str1) + strlen(str2) + 1;
	char *result = (char*)malloc(sizeof(char)* lenSum);

	mystrcat(str1, str2, result);

	printf("%s\n", result);
	/////////////
	int array[5] = { 2, 8, 10, 3, 5 };
	int *pmax;
	int *pmin;

	MaxAndMin(array, 5, &pmax, &pmin);
	printf("%d %d\n", *pmax, *pmin);


	*/
	/////////////

	int i = 0;

	student_t *girl1Recover3 = (student_t*)malloc(sizeof(student_t));
	girl1Recover3->id = 1001;
	strcpy(girl1Recover3->name, "이규원");
	strcpy(girl1Recover3->phone, "010-7108-0209" );

	student_t *girl2Recover3 = (student_t*)malloc(sizeof(student_t));
	girl2Recover3->id = 1002;
	strcpy(girl2Recover3->name, "박송희");
	strcpy(girl2Recover3->phone, "010-5555-8888");

	student_t *girl3Recover3 = (student_t*)malloc(sizeof(student_t));
	girl3Recover3->id = 1003;
	strcpy(girl3Recover3->name, "정승미");
	strcpy(girl3Recover3->phone, "010-7777-9999");
	
	
	student_t *pGirls[] = { girl1Recover3, girl2Recover3, girl3Recover3};
	student_t **ppGirls = pGirls;
	
	printf("\t학번\t이름\t핸드폰 번호\n");
	for (i = 0; i < 3; i++){
		printf("\t%d\t%s\t%s\n", (*ppGirls[i]).id, (*ppGirls[i]).name, (*ppGirls[i]).phone );
	}

	free(girl1Recover3);
	free(girl2Recover3);
	free(girl3Recover3);

	return 0;
}