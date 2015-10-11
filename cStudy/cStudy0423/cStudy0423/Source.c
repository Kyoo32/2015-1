/*
* Date: 2015. 4. 23
* Author: Kate
* Purpose : Structure
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//quadrant
/*

struct point{
	int xpos;
	int ypos;
};

int equal(struct point p1, struct point p2);
int quadrant(struct point p);

int main(void){

	struct point p1, p2;

	puts("Enter the position of the first point: ");
	scanf("%d %d", &p1.xpos, &p1.ypos);

	puts("Enter the position of the second point: ");
	scanf("%d %d", &p2.xpos, &p2.ypos);

	printf("They are %d. (0:different, 1:same)\n", equal(p1, p2));
	printf("And the first point is in %d quadrant.\n", quadrant(p1));
	printf("And the second point is in %d quadrant.\n", quadrant(p2));
	

	return 0;
}

int equal(struct point p1, struct point p2){
	int result = 1;

	if (p1.xpos != p2.xpos) result = 0;
	if (p1.ypos != p2.ypos) result = 0;

	return result;
}

int quadrant(struct point p){

	if (p.xpos > 0 && p.ypos) return 1;
	else if (p.xpos < 0 && p.ypos>0) return 2;
	else if (p.xpos < 0 && p.ypos < 0) return 3;
	else return 4;
}


*/



//exchange only position

void exPosByDot(char*);

int main(void){
	char url[100];

	puts("Enter a url: ");
	fgets(url, sizeof(url), stdin);
	url[strlen(url)-1] = 0;

	exPosByDot(url);

	puts("The result: ");
	puts(url);

	return 0;
}

void exPosByDot(char *str){
	
	int count = 0;
	int i = 0, n = 0 ,time=0;
	int len = strlen(str);
	int start = 0;

	char temp[100];


	for (i = 0; i < len ; i++){
		if (str[i] == '.') count++;
	}
	count++;

	for (time = 0; time < count; time++){
		while (str[n] != '.'&&n<len){
			n++;
		}
		for (i = start; i < n; i++){
			temp[(len-1) - ((n-1) -(i-start))]= str[i];
		}
		temp[(len - 1) - n] = '.';
		n++;
		start = n;
	}
	temp[n] = 0;

	for (i = 0; i < len; i++){
		str[i] = temp[i];
	}

	return;
}
