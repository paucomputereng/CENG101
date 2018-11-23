#include <stdio.h>
#include <math.h>

void giris(int no[], int notu[], int N);
float ortalama(int notu[], int N);
void goruntule(int no[], int notu[], int N);
void kalanlar(int nolar[], int notlar[], int ogr_say);
void gecenler(int notlar[], int nolar[], int N, float ort);
int kalan_sayisi(int ogr_sayi, int notlar[]);
int max_not(int abc[], int ogr_sayi);
int min_not(int notlar[], int ogr_sayi);
void notlari_sirala(int notlar[], int numaralar[], int N);
void numaralari_sirala(int notlar[], int numaralar[], int N);
void swap(int hedef_dizi[], int index1, int index2);
float standart_sapma(int notlar[], int N, float ort);

int main(){

	int N;
	int OgrNo[BUFSIZ], BNotu[BUFSIZ];
	float ort;
	printf("Ogrenci sayisini giriniz: ");
	scanf("%d", &N);
	
	giris(OgrNo, BNotu, N);
	
	goruntule(OgrNo, BNotu, N);
	
	ort = ortalama(BNotu, N);
	
	printf("Not ortalamasi: %5.2f\n", ort);
	printf("____________________________\n\n");
	
	/*
		60'dan küçük sınav sonuçlarını
			ve bu sonuçlara ait öğrenci numaralarını görüntüleyen
				fonksiyonu
	*/
	kalanlar(OgrNo, BNotu, N);
	printf("\n");
	/*
	Ortalamanın üstünde not alan 
	öğrenci numaraları ve bu öğrencilere ait notları görüntüleyen
	fonksiyon,
	*/
	gecenler(BNotu, OgrNo, N, ort);
	printf("\n");
	
	/*
	60'dan küçük sınav sonuç değerlerinin sayısını veren fonksiyonu (return),
	*/
	
	int kalanlar = kalan_sayisi(N, BNotu);
	printf("Kalan Ogrenci Saiyis: %d\n", kalanlar);
	
	/*
	En yüksek sınav sonucunu veren fonksiyonu (return),
	*/
	int maximum_not = max_not(BNotu, N);
	printf("Maximum Notunuz: %d\n", maximum_not);
	
	/*
	En düşük sınav sonucunu veren fonksiyonu (return),
	*/
	int minimum_not = min_not(BNotu, N);
	printf("Minimum Notunuz: %d\n", minimum_not);
	
	/*
	Sınav sonuçlarına göre küçükten büyüğe
	sıralı olarak öğrenci numaralarını ve sınav sonuçlarını
	görüntüleyen fonksiyonu
	*/
	notlari_sirala(BNotu, OgrNo, N);
	goruntule(OgrNo, BNotu, N);
	
	/*
	Öğrenci numaralarına göre küçükten büyüğe sıralı olarak öğrenci numaralarını ve sınav
sonuçlarını görüntüleyen fonksiyonu ve
	*/
	numaralari_sirala(BNotu, OgrNo, N);
	goruntule(OgrNo, BNotu, N);
	
	/*
	Sınav sonuçlarına ait standart sapmayı veren fonksiyon
	*/
	float ss = standart_sapma(BNotu, N, ort);
	printf("Notlarin Standart Sapmasi:\t%2.2f\n", ss);
	
	return 0;
}

float standart_sapma(int notlar[], int N, float ort){
	float toplam = 0;
	
	for(int i = 0; i < N; i++){
		int ortdan_fark = ort - notlar[i];
		toplam += ortdan_fark * ortdan_fark;
	}
	
	return sqrt(toplam / N);
}

void numaralari_sirala(int notlar[], int numaralar[], int N){
	for(int i = 0; i < N - 1; i++){
		for(int j = 0; j < N - i - 1; j++){
			if(numaralar[j] > numaralar[j + 1]){
				swap(numaralar, j, j + 1);
				swap(notlar, j, j + 1);
			}
		}
	}
}


void notlari_sirala(int notlar[], int numaralar[], int N){
	for(int i = 0; i < N - 1; i++){
		for(int j = 0; j < N - i - 1; j++){
			if(notlar[j] > notlar[j + 1]){
				swap(notlar, j, j + 1);
				swap(numaralar, j, j + 1);
			}
		}
	}
}

void swap(int hedef_dizi[], int index1, int index2){
	int temp = hedef_dizi[index1];
	hedef_dizi[index1] = hedef_dizi[index2];
	hedef_dizi[index1] = temp;
}

int min_not(int notlar[], int ogr_sayi){
	int gecici_min = notlar[0];
	
	for(int i = 0; i < ogr_sayi; i++){
		if(notlar[i] < gecici_min)
			gecici_min = notlar[i];
	}
	
	return gecici_min;
}

int max_not(int notlar[], int ogr_sayi){
	int gecici_max = notlar[0];
	
	for(int i = 0; i < ogr_sayi; i++){
		if(notlar[i] > gecici_max)
			gecici_max = notlar[i];
	}
	
	return gecici_max;
}

int kalan_sayisi(int ogr_sayi, int notlar[]){
	int sayi = 0;
	for(int i = 0; i < ogr_sayi; i++){
		if(notlar[i] < 60)
			sayi++;
	}
	
	return sayi;
}

void gecenler(int notlar[], int nolar[], int N, float ort){
	printf("Ogrenci#\tNotu\n");
	for(int i = 0; i < N; i++){
		if(notlar[i] > ort){
			printf("%8d\t%d\n", nolar[i], notlar[i]);
		}
	}
}

void kalanlar(int nolar[], int notlar[], int ogr_say){
	printf("Ogrenci#\tNotu\n");
	for(int i = 0; i < ogr_say; i++){
		if(notlar[i] < 60)
			printf("%8d\t%d\n", nolar[i], notlar[i]);
	}
}

void giris(int no[], int notu[], int N){
	int i;
	for (i=0; i<N; i++)
	{ 
		printf("Ogrenci no gir: ");
		scanf("%d", &no[i]);
		printf("%d numarali ogrencinin notunu gir : ", no[i]);
		scanf("%d", &notu[i]);
	}
}

void goruntule(int no[], int notu[], int N){
	printf("Ogrenci#\tNotu\n");
	for (int i=0; i<N; i++)
		printf("%8d\t%3d\n", no[i], notu[i]);
}

float ortalama(int notu[], int N){ 
	float t;
	int i;
	t = 0;
	for (i=0; i<N; i++)
		t = t + notu[i];
	float ort = t / N;
	
	return ort;
}
