



int main(void){


	/*
	//과제 3
	char userChar = 0;
	int check = 0;

	printf("1 to start, -1 to quit: ");
	scanf_s("%d", &check, 1);
	getchar();

	while (check != -1){


		printf("\nenter character: ");
		scanf_s("%c", &userChar, 1);



		if (userChar >= 'A'&& userChar <= 'Z'){
			printf("1\n"); break;

		}
		else if (userChar >= 'a'&& userChar <= 'z'){
			printf("2\n"); break;

		}
		else if (userChar >= 48 && userChar <= 57){
			printf("3\n"); break;

		}
		else if (userChar > -1 && userChar < 128){
			printf("0\n"); break;

		}


		check = -1;
	}

	printf("프로그램을 종료합니다.\n\n");

	return 0;

	*/

	
	//과제 4

	int won1 = 0, won2 = 0, won5 = 0, won10 = 0, won20 = 0, won50 = 0;
	int count = 0;
	int sumOfPair = 0;

	printf("방법-(50만원, 20만원,10만원, 5만원,2만원, 1만원)\n");

	for (won50 = 0; won50 <= 2; won50++){
		
		for (won20 = 0; won20 <= 5; won20++){

			for (won10 = 0; won10 <= 10; won10++){

				for (won5 = 0; won5 <= 20; won5++){

					for (won2 = 0; won2 <= 50; won2++){

						for (won1 = 0; won1 <= 100; won1++){

							sumOfPair = 50 * won50 + 20 * won20 + 10 * won10 + 5 * won5 + 2 * won2 + 1 * won1;
							if (sumOfPair == 100){
								count++;
								printf("%d-(%d, %d, %d, %d, %d, %d)\n", count, won50, won20, won10, won5, won2, won1);
							}

						}
					}
				}
			}
		}
	}



	return 0;
	

	

}