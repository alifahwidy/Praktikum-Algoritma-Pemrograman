/*
Nama File   : BiayaParkir.c
Deskripsi   : Mennetukan besarnya biaya parkir yang dihitung berdasarkan lamanya parkir
Nama        : Alifah Ananda Widy
NIM         : 24060121140138
*/

#include <stdio.h>

int main()
{
   /* Kamus */
   int t;
   int T;

   /* Algoritma */
   printf("Menentukan Biaya Parkir \n");
   printf("Waktu lamanya parkir : ");
   scanf("%d", &t);

   if (t > 2)
   {
       T = 2000 + ((t - 2) * 500);
       printf("Biaya parkir sebesar : Rp %d", T);
   }

   else
   {
       T = 2000;
       printf("Biaya parkir sebesar : Rp %d", T);
   }

    return 0;
}
