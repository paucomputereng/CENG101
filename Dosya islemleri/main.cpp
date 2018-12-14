#include<stdio.h>

int main(){
	/*
	FILE *fptr;
	int deger;
	fptr = fopen("deneme.txt", "r");
	//fprintf(fptr, "\n%d", deger);
	fscanf(fptr, "%d", &deger);
	printf("Dosyadan okunan deger: %d\n", deger);
	fclose(fptr);
	*/
	// sayilar1.txt oluþturalým.
	// Ýçine 100 adet int atayalým
	/*
	FILE *fptr;
	fptr = fopen("sayilar1.txt", "w");
	
	for(int i=0; i<100; i++){
		fprintf(fptr, "%d ", i);
	}
	fclose(fptr);
	*/
	// sayilar1.txt deki sayilarýn ortalamasýný bulalým
	/*
	FILE *fptr;
	fptr = fopen("sayilar1.txt", "r");
	int tmp=0;
	int toplam=0;
	for(int i=0; i<100; i++){
		fscanf(fptr, "%d ", &tmp);
		toplam += tmp;
	}
	fclose(fptr);
	float ort = toplam / 100.0;
	printf("sayilar1.txt'nin ortalamasi: %f\n", ort);
	*/
	// while(!feof(fptr)){}
	/*
	FILE *fptr;
	fptr = fopen("sayilar1.txt", "r");
	int tmp=0;
	int counter = 0;
	int toplam=0;
	while(!feof(fptr)){
		fscanf(fptr, "%d ", &tmp);
		toplam += tmp;
		counter++;
	}
	fclose(fptr);
	float ort = toplam / (float)counter;
	printf("sayilar1.txt'nin ortalamasi: %f\n", ort);
	*/
	// ornek girdi satiri: 
	//103442537 zahid kizmaz 50 60 
	/*
	FILE *fptr;
	fptr = fopen("notlar.txt", "r");
	char no[15], isim[25], soyisim[35];
	int vize=0, finl=0;
	while(!feof(fptr)){
		fscanf(fptr, "%s %s %s %d %d\n",no, isim, soyisim, &vize, &finl);
		float ort = (vize * 0.4 + finl * 0.6);
		printf("Ogrenci Adi Soyadi: %s %s \t Ortalamasi: %.2f\n", isim, soyisim, ort);
	}

	fclose(fptr);
	*/
	return 0;
}