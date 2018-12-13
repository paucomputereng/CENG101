#include <stdio.h>
#include <string.h>

struct ogrenci{
	int numara;
	char isim[20];
	char soyisim[20];
	int vize;
	int final;
};

int main(){

	/*
	sayilar1.txt dosyasinda 100 adet tamsayi vard?r.
	Bu tamsayilar?n ortalamasini ekrana yazdiran C programini yaziniz.
		
	FILE *fp = fopen("dosyalar/sayilar1.txt", "r");
	float toplam = 0;
	int sayi;
	for(int i = 0; i < 100; i++){
		fscanf(fp, "%d", &sayi);
		toplam += sayi;
	}
	fclose(fp);
	printf("Sayilarin ortalamasi: %.2f\n", toplam / 100);
	*/
	
	/*
	sayilar2.txt dosyas?nda adeti bilinmeyen miktarda ondalikli sayi vard?r.
	Bu ondalikli sayilarin ortalamasini bulan C programini yaziniz.
	
	FILE *fp = fopen("dosyalar/sayilar2.txt", "r");
	float toplam = 0;
	float sayi;
	int sayac = 0;
	while( !feof(fp) ){
		fscanf(fp, "%f", &sayi);
		toplam += sayi;
		++sayac;
	}
	fclose(fp);
	printf("Sayilarin ortalamasi: %.2f\n", toplam / sayac);
	*/
	
	/*
	isimler.txt dosyas?n?n içinde bir s?n?ftaki ö?rencilerin adlar? bulunmaktad?r.
	Bu ö?rencilerin adlar?n? ekrana yazd?ran C program?n? yaz?n?z.
	
	FILE *fp = fopen("dosyalar/isimler.txt", "r");
	char isim1[20];
	char isim2[20];
	while( !feof(fp) ){
		fscanf(fp, "%s%s", isim1, isim2);
		printf("%s\t%s\n", isim1, isim2);
	}
	fclose(fp);
	*/
	
	/*
	isimler.txt dosyas?n?n içinde "ALI" isminin kaç defa geçti?ini bulan C program?n? yaz?n?z.
	//Bu uygulama için <string.h> dosyasi içindeki strcmp (string compare) fonksiyonu kullanilacak.
	// strcmp(str1, str2); fonksiyonu, egerki 
	// str1 > str2 ise 1 döndürür.
	// str1 == str2 ise 0 döndürür.
	// str1 < str2 ise -1 döndürür.
	
	FILE *fp = fopen("dosyalar/isimler.txt", "r");
	char isim[20];
	int sayac = 0;
	while( !feof(fp) ){
		fscanf(fp, "%s", isim);
		if( strcmp(isim, "ALÝ") == 0){
			++sayac;
		}
	}
	fclose(fp);
	printf("ALÝ ismi %d kere geciyor.\n", sayac);
	*/

	/*
	Bilgisayar II dersinin hocas? ö?rencilerin alm??
		oldu?u notlar? notlar.txt dosyas?n?n içinde
	Ö?renci No, Ö?renci ad? ve soyad?, vize notu ve final notu olmak üzere kaydetmi?tir.
	Bu de?erleri okuyup ö?rencinin numaras?, ad?, soyad? ve ortalamas?n?
		kaydedecek C program?n? yaz?n?z.
	(Ortalama vize*0.4+Final*0.6 ?eklinde hesaplanacakt?r.)
	*/
	
	struct ogrenci ogr;
	
	FILE *fp = fopen("dosyalar/notlar.txt", "r");
	FILE *fpw = fopen("cikti.txt", "w"); //ogrencileri dosyaya yazmak için "w(rite)" modunda yeni dosya.
	
	//ekrana çikti vermek için.
	printf("%-10s%-10s%-10s%-10s%-10s%-10s\n", "NUMARA", "ISIM", "SOYISIM", "VIZE", "FINAL", "ORTALAMA");
	//dosyaya yazmak için.
	fprintf(fpw, "%-10s%-10s%-10s%-10s%-10s%-10s\n", "NUMARA", "ISIM", "SOYISIM", "VIZE", "FINAL", "ORTALAMA");
	
	while( !feof(fp) ){
		fscanf(fp, "%d%s%s%d%d", &ogr.numara, ogr.isim, ogr.soyisim, &ogr.vize, &ogr.final);
		float ortalama = (ogr.vize * 0.4) + (ogr.final * 0.6);
		
		//ekrana yazmak için.
		printf("%-10d%-10s%-10s%-10d%-10d%-10.2f\n", ogr.numara, ogr.isim, ogr.soyisim, ogr.vize, ogr.final, ortalama);
		//dosyaya yazmak için.
		fprintf(fpw, "%-10d%-10s%-10s%-10d%-10d%-10.2f\n", ogr.numara, ogr.isim, ogr.soyisim, ogr.vize, ogr.final, ortalama);
	}
	
	fclose(fp);
	fclose(fpw);
	
	
	return 0;
}
