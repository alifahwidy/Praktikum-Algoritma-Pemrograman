/*
Nama File   : UpahKerja.c
Deskripsi   : Menghitung besarnya tarif listrik
Nama        : Alifah Ananda Widy
NIM         : 24060121140138
*/

#include <stdio.h>

int main()
{
    /* Kamus */
    int p;
    int g;
    int r;
    int T;


    /* Algoritma */
    printf("Menghitung Tarif Listrik \n");
    printf("Jumlah daya listrik yang digunakan : ");
    scanf("%d", &p);
    printf("Golongan ke : ");
    scanf("%d", &g);

    switch(g)
    {
        case 1 : r = 1000;
        break;

        case 2 : r = 2000;
        break;

        default:
            printf("Pilihan golongan tidak tersedia \n");
        break;
    }

    if (0 < p && p <= 100)
    {
        T = 100 * r;
    }

    else if (100 < p && p < 1000)
    {
        T = p * r;
    }

    else (p >= 1000);
    {
        T = p * r * 1.1;
    }
    printf("Tarik listrik yang harus dibayar sebesar : Rp %d", T);

    return 0;
}
