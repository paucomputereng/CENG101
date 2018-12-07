#include<stdio.h>
#include<stdlib.h>

void ogrYazdir(struct ogrenci dizi[], int boyut);
void resitYazdir(struct ogrenci dizi[], int boyut);
void nosuTek(struct ogrenci dizi[], int boyut);
void ogrBul(struct ogrenci dizi[], int boyut, int sorgu);
struct basit{
	int no;
};

struct ogrenci{
	int numara;
	char ad[25];
	int yas;
	char adres[50];
};

struct ders {
	char dersAdi[30];
	int puan;
};

int main(){
	/*
	Bir öðrencinin bir dönem içerisinde aldýðý dersleri ve bu derslerden 
	aldýðý ders notlarýný kullanýcýdan alarak saklayan ve ekrana yazdýran 
	bir program yazýnýz. Yapýlarý (structures) kullanarak oluþturacaðýmýz 
	program, kullanýcýdan veriAdedi deðerini (aldýðý ders sayýsý) alarak,
	yapý deðiþkenlerinin saklanmasý için ayrýlacak belleði malloc() 
	fonksiyonunu kullanarak dinamik olarak hesaplamalýdýr.
	memory allocation
	*/
	int ogreAdedi;
	printf("Ogrenci adedi giriniz: \n");
	scanf("%d", &ogreAdedi);
	struct ders *dersler = (struct ders *)malloc(sizeof(struct ders) * ogreAdedi);
	
	for(int i=0; i<ogreAdedi; i++){
		printf("Ders adi giriniz:\n");
		scanf("%s", (dersler+i)->dersAdi);
		printf("Ders puani giriniz:\n");
		scanf("%d", &(dersler+i)->puan);
	}

	for(int i=0; i<ogreAdedi; i++){
		printf("Ders adi: %s Notu: %d\n",(dersler+i)->dersAdi, (dersler+i)->puan);
	}

	/*
	struct basit b;
	printf("No giriniz:\n");
	scanf("%d", &b.no);
	printf("Girdiginiz no: %d", b.no);
	
	int ogrSayisi=2;
	struct ogrenci ogrenciler[2];
	for(int i=0; i<ogrSayisi; i++){
		printf("Ogr no giriniz: ");
		scanf("%d", &ogrenciler[i].numara);
		printf("Ogr ad giriniz: ");
		scanf("%s", ogrenciler[i].ad);
		printf("Ogr yas giriniz: ");
		scanf("%d", &ogrenciler[i].yas);
		printf("Ogr adres giriniz: ");
		scanf("%s", ogrenciler[i].adres);
	}*/
	//ogrYazdir(ogrenciler, ogrSayisi);
	//printf("Resitler:\n");
	//resitYazdir(ogrenciler, ogrSayisi);
	/*
	nosuTek(ogrenciler, ogrSayisi);
	int sorgu;
	printf("Sorgulanacak ogr no:\n");
	scanf("%d", &sorgu);
	ogrBul(ogrenciler, ogrSayisi, sorgu);
	*/
	return 0;
}

void ogrYazdir(struct ogrenci dizi[], int boyut){
	for(int i=0; i<boyut; i++){
		printf("No: %d\n", dizi[i].numara);
		printf("Ad: %s\n", dizi[i].ad);
		printf("Yas: %d\n", dizi[i].yas);
		printf("Adres: %s\n", dizi[i].adres);
	}
}

void resitYazdir(struct ogrenci dizi[], int boyut){
	for(int i=0; i<boyut; i++){
		if(dizi[i].yas >= 18 ){
			printf("Ad: %s\n", dizi[i].ad);
		}
	}
}

void nosuTek(struct ogrenci dizi[], int boyut){
	for(int i=0; i<boyut; i++){
		if(dizi[i].numara % 2 == 1 ){
			printf("Ad: %s\n", dizi[i].ad);
		}
	}
}

void ogrBul(struct ogrenci dizi[], int boyut, int sorgu){
	for(int i=0; i<boyut; i++){
		if(dizi[i].numara == sorgu ){
			printf("Ad: %s\n", dizi[i].ad);
		}
	}
}