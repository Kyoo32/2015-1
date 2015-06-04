


#include "structure.h"


int main(void){


	/*
	struct student me;
	struct student *kim = &me;
	printf("%d \n %p", sizeof(me), &me.gender);
	printf("%p", &me.Number);

	kim->Number= 1234;
	me.gender = 20;

	Student you;
	Student* yi;

	Student lee = { 1234, "ÀÌ¿ר", 21, };


	Person actor[3];
	int i = 0;
	
	for (i = 0; i < 3; i++){
		scanf("%s %d %d", &actor[i].name, &actor[i].phoneNum, &actor[i].age);	
	}
	
	for (i = 0; i < 3; i++){
		printf("%s %d %d\n", actor[i].name, actor[i].phoneNum, actor[i].age);
	}
	return 0;



	*/

	/*
	int arr[] = { 0 };
	int *ptr;
	int i = 0;
	int num;
	printf("how many? : ");
	scanf("%d", &num);

	ptr=(int*)malloc(sizeof(int)*num);
	if (ptr == NULL){
		printf("error code: ");
		return -1;
	}

	for (i = 0; i < num; i++){
		scanf("%d", ptr + i);
	}
	for (i = 0; i < num; i++){
		printf("%d", ptr[i]);
	}



	free(ptr);

	*/

	Person *actor;
	actor =(Person*)malloc(sizeof(Person) * 1);

	scanf("%s %d %d", actor->name, &(actor->phoneNum),&(actor->age));

	printf("%s\n%d\n%d", actor->name, actor->phoneNum, actor->age);

	free(actor);

	return 0;

}




