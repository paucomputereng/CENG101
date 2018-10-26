#include <stdio.h>

int main(){
	/*  ***
		***
		***
	// i++   i+=1    i = i+1
	for(int i=0; i<=10; i++){
		printf("%d - Hello world.\n", (i+1));
	}
	*/
	/*
	int n, sum=0;
	printf("Bir N sayisi giriniz: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		sum += i;
	}
	printf("Toplam: %d", sum);
	*/
	/*
	int a = 0;
	while(a <= 10){
		printf("Hello world!\n");
		a++;
	}
	*/
	// 5 * 4 * 3 * 2 * 1 
	/*
	int n, carpim = 1;
	printf("Bir sayi giriniz:");
	scanf("%d", &n);
	while(n > 0){
		carpim *= n;
		n--;
	}
	printf("Faktoriyel: %d\n", carpim);
	*/
	/*
	int sum = 0, tmp;
	do{
	//islemler
		printf("Bir sayi giriniz:");
		scanf("%d", &tmp);
		sum += tmp;
	}while(tmp != 0);
	printf("Sonuc: %d\n", sum);
	*/
	/*
	for(int j = 0; j < 3; j++){
		for(int i = 0; i < 3; i++){
			printf("*");
		}
		printf("\n");
	}*/
	/*
		***
		**
		*
	*/
	// 3 -> 2 -> 1 
	/*
	for(int i = 3; i > 0; i--){
		for(int j=1; j <= i ;j++){
			printf("*");
		}
		printf("\n");
	}*/
	
	return 0;
}