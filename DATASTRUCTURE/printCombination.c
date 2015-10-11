#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static void	printCombInstance(char *str, int size, int *selectionMark)
{
	int	id;

	for(id = 0; id < size; id++) if(selectionMark[id]) printf("%c", str[id]);
	printf("\n");
}

void printComb(char *str, int size, int startPos, int combLen, int *selectionMark)
{
	if(combLen == 0) {
		printCombInstance(str, size, selectionMark);
		return;
	}
	if(startPos == size) return;
	if (combLen > size - startPos) return;

	selectionMark[startPos] = 1;
	printComb(str, size, startPos + 1, combLen - 1, selectionMark);

	selectionMark[startPos] = 0;
	printComb(str, size, startPos + 1, combLen, selectionMark);
}

void printAllComb(char *str, int size)
{
	int	combLen, id;
	int	*selectionMark = (int *)malloc(sizeof(int)*size);

	printf("empty\n");
	for(combLen = 1; combLen <= size; combLen++) {
		for(id = 0; id < size; id++) selectionMark[id] = 0;
		printComb(str, size, 0, combLen, selectionMark);
	}

	free(selectionMark);
}

void testPrintAllComb(void)
{
	char arr1[] = "abc";
	char arr2[] = "abcd";
	char arr3[] = "abcde";

	printAllComb(arr1, sizeof(arr1)-1);
	printf("-----------------\n");
	printAllComb(arr2, sizeof(arr2)-1);
	printf("-----------------\n");
	printAllComb(arr3, sizeof(arr3)-1);
	printf("-----------------\n");
}