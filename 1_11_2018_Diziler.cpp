#include <stdio.h>
#include <stdlib.h>

const int CITY = 2;
const int WEEK = 4;

int main(){
	int temperature[CITY][WEEK];
	
	for(int i = 0; i < CITY; ++i) {
		for(int j = 0; j < WEEK; j++){
			printf("Sehir %d icin hafta %d'nin derecesini girin:\n", i + 1, j + 1);
			scanf("%d", &temperature[i][j]);
		}	
	}
	 
	printf("\nDisplaying values: \n\n");
	for (int i = 0; i < CITY; ++i) {
		 for(int j = 0; j < WEEK; ++j)
		 {
			 printf("City %d, Day %d = %d\n", i+1, j+1,
			temperature[i][j]);
		 }
	}
	
 return 0;
	//Girilen deðerlerin minimumunu bul.
	/*
	int sayi = 20;
	int degerler[sayi];
	
	for(int i = 0;  i < sayi; i++){
		degerler[i] = rand() % 100 + 1;
		printf("%d. deger: %d\n", i + 1, degerler[i]);
	}
	
	//minimum bul.
	int min = degerler[0];
	for(int i = 1; i < sayi; i++){
		if(degerler[i] < min)
			min = degerler[i];
	}
	printf("Minimum degeriniz: %d", min);

	*/
	//Kullanýcýdan 10 tane deðer alýnacak.
	//Dizi içinde saklanacak.
	//Bu deðerlerin ortalamasý alýnacak.
	//!! Ortalama float olacak.
	/*
	int sayi = 10, toplam = 0;
	int degerler[sayi];
	
	printf("10 tane deger girmeniz gerekiyor.\n");
	for(int i = 0;  i < sayi; i++){
		printf("%d. degeri girin: \n", i + 1);
		scanf("%d", &degerler[i]);
		toplam += degerler[i];
	}
	float ortalama = (float) toplam / sayi;
	printf("%d adet degerin ortalamasi = %f", sayi, ortalama);
	*/
	/*
		int sinir = 10;
		int dizim[sinir] = {10, 20, 30, 40, 50, 60, 70, 80 ,90, 100};
		int toplam = 0;
		
		for(int i = 0; i < sinir; i++){
			toplam += dizim[i];
		}
		
		printf("%d adet sayinin toplami = %d'dir.", sinir, toplam);
	*/
}

