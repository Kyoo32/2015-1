
#include <stdio.h>

#define Max(x, y) ( (x)>(y) ?  (x):(y) )

int main(void){
	int x = 0, y = 0;
	printf("enter two integers: ");
	scanf_s("%d %d", &x, &y, 2);

	printf("The bigger one is %d.\n", Max(x, y));


	return 0;
}