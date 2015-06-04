/*
* Date : 2015. 3. 23.
* Author : Kate
* Purpose : Practicing arrays
*/

#include <stdio.h>

#define NUM_RATES ( (int) (sizeof(value) / sizeof(value[0]) ) )
#define INITIAL_BALANCE 100.00

int main(void)
{
	int i, low_rate, num_years, year;
	double value[5];

	printf("Enter interest rate: ");
	scanf_s("%d", &low_rate, 1);	
	printf("Enter number of years: ");
	scanf_s("%d", &num_years, 1);

	printf("\nYears");
	for (i = 0; i < NUM_RATES; i++){
		printf("%6d%%", low_rate + i);
		value[i] = INITIAL_BALANCE;
	}
	printf("\n");

	for (year = 1; year <= num_years; year++){
		printf("%3d     ", year);
		for (i = 0; i < NUM_RATES; i++){
			value[i] += (low_rate + i) / 100.0 * value[i];
			printf("%7.2f", value[i]);
		}
		printf("\n");
	}

	return 0;
}