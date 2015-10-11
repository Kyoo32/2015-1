


#include <stdio.h>

void show(int arr[][5]){
	int i, j;
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			printf("%3d ", arr[i][j]);
		}
		puts("");
	}
	return;
}




int main(){
	int i = 0, j = 0, num = 1;
	int direction = 1;//0일때 좌하, 1일때 우상 
	int arr[5][5] = { 0 };
	while (1){

		arr[i][j] = num++;
		if (j == 4 && direction == 1){ i++; direction = 0; }
		else if (i == 0 && direction == 1){ j++; direction = 0; }
		else if (j == 0 && direction == 0){ i++; direction = 1; }
		else if (i == 4 && direction == 0){ j++; direction = 1; }
		else {
			if (direction == 0){ i++; j--; }
			if (direction == 1){ j++; i--; }
		}

		if (num > 25)break;
	}
	show(arr);
	return 0;


}