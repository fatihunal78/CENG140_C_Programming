/* uzunlugu ve kendisi girilen bi dizideki yanyana bulunan en uzun altdiziyi
   bulup yerini ve uzunlugunu verir
*/
#include <stdio.h>
#include <stdlib.h>

int main ()

{
   int   boy ,i ,j ,b ,ayni_sayisi=0 ;
   char  *p  ;

   printf("dizinin uzunlugunu girin: ") ;
   scanf(" %d" , &boy ) ;

   p = (char *)malloc (sizeof (char)*boy)  ;

   printf ("diziyi girin : ")   ;
   for ( i= 0 ;i < boy ; i++)
      scanf ( " %c" , &p[i]) ;

   for (j= boy/2 ; j>=1 ; j--)               /* j dizinin uzunlugu*/
   {  for ( b=0 ; b <= boy-2*j ; b++ )       /* b ,j uzunlugundaki dizinin basini gosteriyor*/
      {  for(i=b ,ayni_sayisi=0; i<b+j;i++)
	    {if (p[i]==p[i+j]) ayni_sayisi++ ;
	    }
	 if (ayni_sayisi == j) { printf(" dizinin baslangici = %d ,  dizinin uzunlugu = %d\n" ,b , j) ;
	                         printf(" tekrar eden dizi : ") ;
	                         for (i=b ;i<b+j;i++) printf("%c" , p[i]) ;
	                         printf("\n") ;
	                         return 0 ;
	                       }	
	 }
   }

    /* dizinin basini 0'dan baslayarak indeksleyip veriyor*/

   return 0 ;
}




/*
Program once ortak bulunabilecek en uzun diziden basliyor ve 1 uzunlugundaki
diziler dahil tekrar eden var mi diye bakiyor.

eger ayni uzunlukta ve tekrrar eden farkli diziler varsa ikisini de veriyor.
*/

