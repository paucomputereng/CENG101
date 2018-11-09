#include <stdio.h>
#include <math.h>

int main(){

	//https://github.com/paucomputereng/CENG101
	int araSinav[32] = {45,56,34,23,56,88,23,43,12,5,43,10,76,98,67,
		94,65,53,20,43,32,41,76,57,45,32,32,12,33,78,65,65};
/*
	for(int i=1; i < 10; i++){
		printf("%d ", i);
	}
*/
	/*
	float ort = 0;
	for(int i=0; i<32; i++){
		ort += araSinav[i];
	}
	ort /= 32.0;
	printf("Ortalama: %f\n", ort);

	int min = araSinav[0];
	for(int i=0; i < 32; i++){
		if(araSinav[i] < min){
			min = araSinav[i];
		}
	}
	printf("Minimum not: %d \n", min);
	int max = araSinav[0];
	for(int i=0; i < 32; i++){
		if(araSinav[i] > max){
			max = araSinav[i];
		}
	}
	printf("Maximum not: %d \n", max);

	/*
	1. Verilerin aritmetik ortalamasý bulunur.

	2. Her bir veri ile aritmetik ortalama arasýndaki farkýn kareleri toplanýr.

	3. Bulunan toplam veri sayýsýnýn bir eksiðine bölünerek karekökü alýnýr.
	*/
	/*
	// pow(2,3), sqrt(6), math.h
	float toplam = 0;
	for(int i=0; i < 32; i++){
		float fark = araSinav[i] - ort;
		float karesi = pow(fark, 2);
		toplam += karesi;
	}
	float standartSapma = sqrt(toplam / 31);
	printf("Standart sapma: %f\n ", standartSapma);
	*/
	/*
	for (int i=100; i < 1000; i++){
		if(i % 3 == 1 && i % 4 == 1 && i % 5 == 1 && i % 7 == 0){
			printf("Para: %d\n", i);
			break;
		}
	}
	*/
	int tavsan = 845;
	int kus = 1655;
	int yil = 2017;

	while(tavsan < kus){
		tavsan += tavsan * 4.3 / 100;
		kus += kus * 1.4 / 100;
		yil++;
	}
	printf("Yil: %d \n", yil);
	return 0;
}