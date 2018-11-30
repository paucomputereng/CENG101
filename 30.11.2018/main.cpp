#include<stdio.h>
#define SIZE 10 
void yazdir();
void arrYazdir(char *dizi, int boyut);
void dikdortgen(int k, int u, int *alan, int *cevre);
void bubbleSort( int * const array, const int size );
int main(){
	/*
	int a = 5;
	int *ptr = &a;

	printf("Pointer: %p \t %d \n", ptr, *ptr);

	printf("Hello world!");
	yazdir();
	*/

	char arr[20];
	//arrYazdir(arr, 20);
	/*
	int uzun, kisa, alan, cevre;
	printf("Kisa ve uzun kenari giriniz: ");
	scanf("%d %d", &kisa, &uzun);
	dikdortgen(kisa, uzun, &alan, &cevre);
	printf("Alan = %d, Cevre = %d \n", alan, cevre);*/

	/* initialize array a */

   int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
   
   int i; /* counter */

   printf( "Data items in original order\n" );

   /* loop through array a */
   for ( i = 0; i < SIZE; i++ ) {
      printf( "%4d", a[ i ] );
   } /* end for */

   bubbleSort( a, SIZE ); /* sort the array */

   printf( "\nData items in ascending order\n" );
   
   /* loop through array a */
   for ( i = 0; i < SIZE; i++ ) {
      printf( "%4d", a[ i ] );   
   } /* end for */

   printf( "\n" );
	return 0;
}

/* sort an array of integers using bubble sort algorithm */
void bubbleSort( int * const array, const int size )
{
   void swap( int *element1Ptr, int *element2Ptr ); /* prototype */
   int pass; /* pass counter */
   int j; /* comparison counter */
   
   /* loop to control passes */
   for ( pass = 0; pass < size - 1; pass++ ) {

      /* loop to control comparisons during each pass */
      for ( j = 0; j < size - 1; j++ ) {

         /* swap adjacent elements if they are out of order */
         if ( array[ j ] > array[ j + 1 ] ) {
            swap( &array[ j ], &array[ j + 1 ] );
         } /* end if */
      } /* end inner for */
   } /* end outer for */
} /* end function bubbleSort */

void swap(int *elem1, int *elem2){
	int temp = *elem1;
	*elem1 = *elem2;
	*elem2 = temp;
}


void dikdortgen(int k, int u, int *alan, int *cevre){
	*alan = k * u;
	*cevre = 2 * (k + u);
}

void yazdir(){
	printf("Burasi yazdir fonksiyonu!\n");
}

void arrYazdir(char *dizi, int boyut){
	gets(dizi);
	char *ptr = dizi;
	printf("Pointerla yazdir:\n");
	for(int i = 0; i < boyut; i++){
		printf("%c\n", *ptr);
		ptr++;
	}
}

