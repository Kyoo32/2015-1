

/*
* Date : 2015. 4. 28.
* Author : Kate
* Purpose: structure
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

typedef struct complexNum{
	double x;
	double y;
 //x is real number and y is imaginary number	
}Complex;

void addComplex(Complex c1, Complex c2){
	printf("The result is %3.2f + %3.2fi\n", c1.x + c2.x , c1.y + c2.y);
	return;
}

void subtractComplex(Complex c1, Complex c2){
	printf("The result is %3.2f + %3.2fi\n", c1.x - c2.x, c1.y - c2.y);
	return;
}

void timeComplex(Complex c1, Complex c2){
	printf("The result is %3.2f + %3.2fi\n", c1.x *c2.x - c1.y * c2.y, c1.y*c2.x + c2.y*c1.x);
	return;
}

double absoluteNum(Complex c1){
	return sqrt(c1.x*c1.x + c1.y*c1.y);	
}


int main(void){
	Complex c1, c2;
	puts("enter the first x, y ( x + yi ) :");
	scanf("%lf %lf", &c1.x, &c1.y);

	puts("enter the second x, y (x + yi) :");
	scanf("%lf %lf", &c2.x, &c2.y);

	addComplex(c1, c2);
	subtractComplex(c1, c2);
	timeComplex(c1, c2);

	printf("The absolute number of first is %3.2f\n", absoluteNum(c1));
	printf("The absolute number of second is %3.2f\n", absoluteNum(c2));

	return 0;
}
