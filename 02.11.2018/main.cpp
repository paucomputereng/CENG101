#include <stdio.h>
#define SIZE 5

int main(){
	/*
	int arr[5] = {1,2,3,4,5};
	int toplam = 0;
	// arr[0] + arr[1] + ... + arr[4]
	for(int i=0; i < 5; i++){
		toplam = arr[i] + toplam;
	}
	printf("Toplam: %d\n", toplam);
	*/
	/*
	int arr[3];
	int toplam = 0;
	for(int i=0; i < 3; i++){
		printf("Dizinin %d'ninci elemanini girin: \n", (i+1));
		scanf("%d", &arr[i]);
		toplam += arr[i];
	}
	printf("Toplam: %d\n", toplam);
	*/
	/*
	int arr[3];
	
	for(int i=0; i < 3; i++){
		printf("Dizinin %d'ninci elemanini girin: \n", (i+1));
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for(int i=1; i < 3; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	printf("Maksimum eleman: %d\n", max);
	*/
	// Bubble sort
	/*
	int arr[SIZE] = {12, 32, 3, 21, 1};
	printf("Siralanmamis: \n");
	for (int i=0; i < SIZE; i++){
		printf("%d ", arr[i]);
	}
	for(int i=1; i < SIZE; i++){
		for(int j=0; j <SIZE-1; j++){
			if(arr[j] > arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	printf("\nSiralanmis: \n");
	for (int i=0; i < SIZE; i++){
		printf("%d ", arr[i]);
	}
	*/
	return 0;
}