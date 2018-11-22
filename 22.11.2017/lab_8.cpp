#include <stdio.h>

void giris(int no[], int notu[], int N); //signature veya prototype
void goruntule(int no[], int notu[], int N);
float ortalama(int notu[], int N);
void kalanlar(int numaralar[], int notlar[], int org_sayi);
void gecenler(int notlar[], int nolar[], int ogr_sayi, float ortalama);
int azalanlar(int notlar[], int ogr_sayi);
int maximum(int notlar[], int ogr_sayi);
int minimum(int notlar[], int ogr_sayi);
void swap(int notlar[], int a, int b);
void artan_sirala(int notlar[], int numaralar[], int N);
void artan_numara_sirala(int notlar[], int numaralar[], int ogr_sayi);

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
	printf("________________________________________\n\n");
	
	/*
	60'dan küçük sınav sonuçlarını ve bu sonuçlara
		ait öğrenci numaralarını görüntüleyenfonksiyonu
	*/
	kalanlar(OgrNo, BNotu, N);
	
	/*
	Ortalamanın üstünde not alan öğrenci numaraları
		ve bu öğrencilere ait notları görüntüleyenfonksiyon
	*/
	gecenler(BNotu, OgrNo, N, ort);
	
	/*
	60'dan küçük sınav sonuç değerlerinin sayısını veren fonksiyonu (return)
	*/
	int a = azalanlar(BNotu, N);
	printf("60 dan dusuk alanlarin sayisi: %d\n", a);
	
	/*
	 En yüksek sınav sonucunu veren fonksiyonu (return),
	 En düşük sınav sonucunu veren fonksiyonu (return),
	*/
	int max_not = maximum(BNotu, N);
	printf("Max Not: %d\n", max_not);
	
	int min_not = minimum(BNotu, N);
	printf("Min Not: %d\n", min_not);
	
	/*
	Sınav sonuçlarına göre küçükten büyüğe sıralı
	olarak öğrenci numaralarını ve sınav sonuçlarını
	görüntüleyen fonksiyonu,
	*/
	artan_sirala(BNotu, OgrNo, N);
	goruntule(OgrNo, BNotu, N);
	
	/*
	Öğrenci numaralarına göre küçükten büyüğe
	sıralı olarak öğrenci numaralarını ve sınav
	sonuçlarını görüntüleyen fonksiyonu ve
	*/
	artan_numara_sirala(BNotu, OgrNo, N);
	goruntule(OgrNo, BNotu, N);
}

int maximum(int notlar[], int ogr_sayi){
	int max = notlar[0];
	for(int i = 1; i < ogr_sayi; i++){
		if(notlar[i] > max)
			max = notlar[i];
	}
	return max;
}

void artan_numara_sirala(int notlar[], int numaralar[], int ogr_sayi){
	//bubble sort
	for(int i = 0; i < ogr_sayi - 1; i++){
		for(int j = 0; j < ogr_sayi - i - 1; j++){
			if(numaralar[j] > numaralar[j + 1]){
				swap(notlar, j, j + 1);
				swap(numaralar, j, j + 1);
			}
		}
	}
}

void artan_sirala(int notlar[], int numaralar[], int ogr_sayi){
	//bubble sort
	for(int i = 0; i < ogr_sayi - 1; i++){
		for(int j = 0; j < ogr_sayi - i - 1; j++){
			if(notlar[j] > notlar[j + 1]){
				swap(notlar, j, j + 1);
				swap(numaralar, j, j + 1);
			}
		}
	}
}

void swap(int notlar[], int a, int b){
	int temp = notlar[b];
	notlar[b] = notlar[a];
	notlar[a] = temp;
}

int minimum(int notlar[], int ogr_sayi){
	int min = notlar[0];
	for(int i = 1; i < ogr_sayi; i++){
		if(notlar[i] < min)
			min = notlar[i];
	}
	return min;
}

int azalanlar(int notlar[], int ogr_sayi){
	printf("azalanlar() fonksiyonu calisiyor\n");
	int sayac = 0;
	for(int i = 0; i < ogr_sayi; i++){
		if(notlar[i] < 60)
			sayac++;
	}
	
	return sayac;
}

void gecenler(int notlar[], int nolar[], int ogr_sayi, float ortalama){
	printf("gecenler() fonksiyonu calisiyor\n");
	for(int i = 0; i < ogr_sayi; i++){
		if(notlar[i] > ortalama){
			printf("Numarasi: %d\tNotu: %d\n", nolar[i], notlar[i]);
		}
	}
}

void kalanlar(int numaralar[], int notlar[], int org_sayi){
	printf("kalanlar() fonksiyonu calisiyor\n");
	for(int i = 0; i < org_sayi; i++){
		if(notlar[i] < 60){
			printf("Orn No: %d\n", numaralar[i]);
		}
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
