#include <stdio.h>

int main(){
	
	for(int i = 0; i < 5; i++){	
		
		for(int j = 5; j > i; j--){
			printf("*");
		}
		printf("\n");
	}
	
	/*
	int note;
	printf("Dersten aldiginiz notu girin\n");
	scanf("%d", &note);
	
	switch(note){
		
		case 100:
			printf("Sinif 1.si oldunuz\n");
			break;
		case 50:
			printf("Sinif ortalamasindasiniz\n");
			break;
		case 0:
			printf("Siniftan kaldiniz\n");
			break;
		default:
			printf("Notun ozel bir anlami yok");
			break;
	}
	
	printf("Switch/case disindasiniz\n");
	*/
	/*
	int toplam = 0, girdi = -1;
	
	do{
		printf("Eklemek istenen degeri girin\n");
		scanf("%d", &girdi);
		toplam += girdi;
	}while(girdi != -1);
	*/
	
	
	/*
	int toplam = 0, girdi;
	printf("Toplamak istediginiz degerleri sirayla girin\n");
	printf("Cikis yapmak icin -1 girin\n");
	
	while(true){
		printf("Eklemek istenen degeri girin\n");
		scanf("%d", &girdi);

		if(girdi != -1)
			toplam += girdi;
		else
			break;
		
		printf("Girdiniz: %d\n", girdi);
	}
	
	printf("Toplaminiz: %d", toplam);
	*/
	
	
	/*
	int toplam = 0, girdi;
	printf("Toplamak istediginiz degerleri sirayla girin\n");
	printf("Cikis yapmak icin -1 girin\n");
	
	while(1){
		printf("Eklemek istenen degeri girin\n");
		scanf("%d", &girdi);
	if(girdi==-1)
	break;
		toplam += girdi;
	}
	
	printf("Toplaminiz: %d", toplam);
	*/
	/*
		int toplam = 0, sayac;
		
		for(sayac = 1; sayac <= 100; sayac++),{
			toplam += sayac;
			printf("Toplam = %d\n", toplam);
		}
		
		printf("Son Toplam Degeri = %d\n", toplam);
	*/	
	
}