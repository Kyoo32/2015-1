

#include <stdio.h>
#include <string.h>

void maxAndMin(int[], int*, int*);


int add(int a, int b){
	return a + b;
}
int substract(int a, int b){
	return a - b;
}

void SimpleAdder(int n1, int n2)
{
	printf("%d + %d = %d \n", n1, n2, n1 + n2);
}

void ShowString(char* str)
{
	printf("%s \n", str);
}

int calc(int a, int b, int (*operation)(int,int)){
	
	return operation(a, b);

}

int whoIsFirst(int age1, int age2, int(*func)(int, int)){
	return func(age1, age2);
}

int olderFirst(int age1, int age2){
	if (age1 >= age2) return age1;
	else return age2;
}

int youngerFirst(int age1, int age2){
	if (age1 <= age2) return age1;
	else return age2;
}


int main(void){
	int age1 = 10;
	int age2 = 15;

	printf("older : %d\n", whoIsFirst(age1, age2, olderFirst));

	return 0;

}










int main(void){

	/*
	int num1 = 10;
	int num2 = 20;

	int *ptr1 = &num1;
	int *ptr2 = &num2;

	int *ptrArr[] = { ptr1, ptr2 };

	int **dptr = ptrArr;

	printf("%d %d \n",
		*(ptrArr[0]), *(ptrArr[1]));
	printf("%d %d \n",
		*(dptr+1), *(dptr[1]));


	return 0;

	*/
	


	 
	

	int arr[5] = { 2, 5, 6, 3, 7 };
	int *maxPtr = arr;
	int *minPtr = arr;
	
	maxAndMin(arr, &maxPtr, &minPtr);

	printf(" %d \n%d", maxPtr, minPtr);
	return;
	
	




	/*
	int arr[3][2] = { 1, 2, 3, 4, 5, 6 };
	int(*ptr)[2] = arr;
	char *greetings[] = { "hi", "hello", "good morning" };
	char **ptrGreet = greetings;

	printf("%d \n%d", arr[1][0], *(ptr + 1));


	return 0;

	*/


	/*
	int(*ptr)(int, int);
	ptr = add;
	ptr = sub

	*/
/*

	void(*addPtr)(int, int);
	addPtr = SimpleAdder;
	addPtr(3, 4);

	void(*print)(char*);
	print = ShowString;
	print("melong");

	int num1 = 20;
	int num2 = 30;

	printf("%d + %d = %d \n", num1, num2, calc(num1, num2, add));

	return 0;
	*/


}




void maxAndMin(int arr[], int**max, int**min){
	int i = 0;
	*max = &arr[0];
	*min = &arr[0];
	int size = ((int)sizeof(arr) / sizeof(int));

	for (i = 0; i < size; i++){

		if (*min > arr[i]) *min = &arr[i];
		if (*max < arr[i]) *max = &arr[i];
	}

		
	return;
}

