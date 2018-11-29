#include <stdio.h>
#define SIZE 10

void dortgen(int a,int b, int *alan,int *cevresi);
void swap( int *element1Ptr, int *element2Ptr );
void bubbleSort(int *array, int size);
void isimOkuYazdir(char *dizi, int boyut);

int main(){
	
	/*
	Bir karakter dizisi tanımlayıp içine kullanıcı tarafından girilen cümleyi koyunuz.
	Bir döngü ve pointer ile diziyi harf-harf (teker teker) ekrana yazınız.
	Programın başında pointer'i dizinde ilk elemanına atayıp,
		daha sonra çift artı işareti ile pointer'in değerini arttırınız.
	Ayrı bir tamsayi değişkeni ile kaç karakter yazılacağını kontrol ediniz.
	*/
	/*
	char isim[20];
	isimOkuYazdir(isim, 20);
	*/
	int x = 5;
	int *x_ptr = &x; //100
	char c = 'A';
	char *c_ptr = &c;//500
	
	printf("X Adres: %x, Deger: %d", x_ptr, *x_ptr);
	printf("X Adres Yeni: %x\n", ++x_ptr);
	
	printf("C Adres: %x, Deger: %c", c_ptr, *c_ptr);
	printf("C Adres Yeni: %x\n", ++c_ptr);
	
	
	/*
		int x, y;
		int alan, cevresi;
		printf("Boşlukla ayrılmış iki değer giriniz: " );
		scanf("%d %d", &x, &y);
		dortgen(x, y, &alan, &cevresi);
		printf("Alanı %d ve çevresi %d dir\n", alan, cevresi);
	*/
	
	/*
	   int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	   int i;
	   printf( "Data items in original order\n" );
	   for ( i = 0; i < SIZE; i++ ) {
	      printf( "%4d", a[ i ] );
		}
	
	   bubbleSort(a, SIZE );
	
	   printf( "\nData items in ascending order\n" );
	
	   for ( i = 0; i < SIZE; i++ ) {
	      printf( "%4d", a[ i ] );   
	   }

	   printf( "\n" );
	*/
		
}

void isimOkuYazdir(char *dizi, int boyut){
	//Kullanıcıdan cümle al.
	printf("Isminizi giriniz:\t");
	gets(dizi);
	//char *ptr = &dizi[0];
	char *ptr = dizi;
	printf("Isminiz:\t");
	for(int i = 0; i < boyut; i++){
		printf("%c", *ptr);
		ptr++;
	}
	printf("\n");
}

/* sort an array of integers using bubble sort algorithm */
void bubbleSort(int *array, int size)
{
   
   int pass; /* pass counter */
   int j; /* comparison counter */
   
   /* loop to control passes */
   for ( pass = 0; pass < size - 1; pass++ ) {
      /* loop to control comparisons during each pass */
      for ( j = 0; j < size - 1; j++ ) {
         /* swap adjacent elements if they are out of order */
         if ( array[ j ] > array[ j + 1 ] ) {
            swap(&array[j], &array[j + 1] );
         } /* end if */
      } /* end inner for */
   } /* end outer for */
} /* end function bubbleSort */

void swap( int *element1Ptr, int *element2Ptr )
{
   int hold = *element1Ptr;
   *element1Ptr = *element2Ptr;
   *element2Ptr = hold;
}

//pass by value;
void swapNormal(int element1Ptr, int element2Ptr)
{
   int hold = element1Ptr;
   element1Ptr = element2Ptr;
	element2Ptr = hold;
}

void dortgen(int a, int b, int *alan,int *cevresi)
{
  *alan = a * b;
  *cevresi = 2 * (a + b);
}


	/*
	Bir karakter dizisi tanımlayıp içine kullanıcı
		tarafından girilen cümleyi koyunuz.
	Bir döngü ve pointer ile diziyi harf-harf (teker teker) ekrana yazınız.
	Programın başında pointer'i dizinde ilk elemanına atayıp,
		daha sonra çift artı işareti ile pointer'in değerini arttırınız.
	Ayrı bir tamsayi değişkeni ile kaç karakter yazılacağını kontrol ediniz.
	*/
