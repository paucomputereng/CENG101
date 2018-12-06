#include <stdio.h>
#include <stdlib.h>

/*
Uygulama 1: Yapıları (structures) kullanarak,
	kullanıcıdan 10 öğrencinin bilgilerini (numara, ad-soyad, yaş, adres) alan,
	saklayan ve ekrana yazdıran bir program yazınız.
a) 18 yaşından büyük tüm öğrencilerin isimlerini
	yazdırmak için bir fonksiyon yazınız.
b) Numaraları tek sayı ile biten öğrecilerin
	isimlerini yazdıran başka bir fonksiyon yazınız .
C) Öğrenci numarası kullanıcı tarafından girilen
	bir öğrencinin bilgilerini ekrana yazdıran başka bir fonksiyon yazınız.
*/

/*
Uygulama 2: Bir öğrencinin bir dönem içerisinde aldığı
 dersleri ve bu derslerden aldığı ders notlarını
 kullanıcıdan alarak saklayan ve ekrana yazdıran bir program yazınız.
 Yapıları (structures) kullanarak oluşturacağımız program, kullanıcıdan
 veriAdedi değerini (aldığı ders sayısı) alarak, yapı
 değişkenlerinin saklanması için ayrılacak belleği malloc()
 fonksiyonunu kullanarak dinamik olarak hesaplamalıdır.
Hint: Aşağıdaki yapıyı kullanarak programı oluşturunuz
*/

struct ders {
	char dersAdi[30];
	int puan;
};

struct ogrenci{
	int numara;
	char isim[20];
	int yas;
	char adres[50];
};

void yazdir(struct ogrenci ogrenciler[], int N);
void buyukler(struct ogrenci ogr[], int N);
void teknumaralilar(struct ogrenci ogr[], int N);

int main(){
	//malloc -> memory allocate
/*
	int ogr_sayi = 1;
 	struct ogrenci ogrenciler[ogr_sayi];
	
	for(int i = 0; i < ogr_sayi; i++){
		printf("%d.Ogrenci Numarasi: ", i + 1);
		scanf("%d", &ogrenciler[i].numara);
		printf("\n%d.Ogrenci Ismi: ", i + 1);
		scanf("%s", ogrenciler[i].isim);
		printf("\n%d.Ogrenci Yasi: ", i + 1);
		scanf("%d", &ogrenciler[i].yas);
		printf("\n%d.Ogrenci Adresi: ", i + 1);
		scanf("%s", ogrenciler[i].adres);
	}
	

*/
	int veriAdedi;
	printf("ders sayisini giri:\n");
	scanf("%d", &veriAdedi);

	int x = 5;	
	struct ders *dersler = (struct ders *) malloc(sizeof(struct ders) */*çarpım*/ veriAdedi);

	for(int i = 0; i < veriAdedi; i++){
		printf("\n%d.Ders Adi Girin:", i + 1);
		scanf("%s", (dersler + i)->dersAdi);
		
		printf("\n%d.Ders Puanini Girin:", i + 1);
		scanf("%d", &(dersler + i)->puan);
	}
	
	for(int i = 0; i < veriAdedi; i++){
		printf("\n%d.Ders Adi: %s", i + 1, (dersler + i)->dersAdi);
		printf("\n%d.Ders Puani: %d", i + 1, (*(dersler + i)).puan);
		//printf("\n%d.Ders Puani: %d", (dersler_ptr + 1)->puan);
	}

	free(dersler);
	
	return 0;
}

void yazdir(struct ogrenci ogrenciler[], int N){
	//(*(ogrenci + 1)).name
	//(ogrenci + 1)->name
	for(int i = 0; i < N; i++){
		printf("Isim: %s", ogrenciler[i].isim);
		printf("\nYas: %d", ogrenciler[i].yas);
		printf("\nNumara: %d", ogrenciler[i].numara);
		printf("\nAdres: %s", ogrenciler[i].adres);
	}
}

void buyukler(struct ogrenci ogr[], int N){
	for(int i = 0; i < N; i++){
		if(ogr[i].yas > 18)
			printf("\nOgrenci Adi: %s", ogr[i].isim); 
	}
}

void teknumaralilar(struct ogrenci ogr[], int N){
		for(int i = 0; i < N; i++){
			if(ogr[i].numara % 2 == 1)
				printf("\nOgrenci Numarası: %d", ogr[i].numara); 
	}
}
