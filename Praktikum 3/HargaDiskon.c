/*
Nama File   : HargaDiskon.c
Deskripsi   : Menebtukan harga setelah diberikan diskon
Nama        : Alifah Ananda Widy
NIM         : 24060121140138
*/

#include <stdio.h>

int main()
{
    /* Kamus */
    int a;
    float d;
    int P;
    char j;

    /* Algoritma */
    printf("Menentukan Harga Setelah Didiskon \n");
    printf("Harga awal : Rp. ");
    scanf("%d", &a);
    printf("Jenis diskon : ");
    scanf(" %c", &j);

    if (200 < a && a < 10000)
    {
        switch(j)
        {
        case 'A' :
            d = 0.1;
            P = a - (a * d);
            break;

        case 'B' :
            d = 0.15;
            P = a - (a * d);
            break;

        case 'C' :
            d = 0.2;
            P = a - (a * d);
            break;
        }
        printf("Harga setelah didiskon : Rp %d", P);
    }

    else
    {
        printf("Jenis diskon tidak tersedia");
    }

    return 0;
}
