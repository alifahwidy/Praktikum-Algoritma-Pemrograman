/*
Nama File   : UpahKerja.c
Deskripsi   : Menghitung upah kerja
Nama        : Alifah Ananda Widy
NIM         : 24060121140138
*/

#include <stdio.h>

int main()
{
   /* Kamus */
   int t;
   int g;
   int p;
   int T;

   /* Algoritma */
   printf("Menghitung Upah Kerja \n");
   printf("Jam kerja perminggu : ");
   scanf("%d", &t);
   printf("Golongan ke : ");
   scanf("%d", &g);

   switch(g)
   {
       case 1 : p = 1000;
       break;

       case 2 : p = 1500;
       break;

       case 3 : p = 2000;
       break;

       case 4 : p = 2500;
       break;

       default :
           printf("Pilihan golongan tidak tersedia \n");
        break;
   }

   if (0 < t && t < 40)
   {
       T = t * p;
   }

   else
   {
       T = 40 * p + ((t - 40) * 1.5 * p);
   }
   printf("Upah kerja sebesar : Rp %d", T);

   return 0;
}
