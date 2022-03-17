/*
Nama File   : UpahKerja.c
Deskripsi   : Menghitung besarnya tunjangan anak yang diberikan
Nama        : Alifah Ananda Widy
NIM         : 24060121140138
*/

#include <stdio.h>

int main()
{
    /* Kamus */
    int c;
    int p;
    int T;

    /* Algoritma */
    printf("Menghitung Tunjangan Anak \n");
    printf("Jumlah anak : ");
    scanf("%d", &c);
    printf("Gaji pokok : ");
    scanf("%d", &p);

    if (0 <= c && c < 3)
    {
        T = c * (0.1 * p);
    }

    else
    {
        T = 3* (0.1 * p);
    }
    printf("Jumlah tunjangan anak yang didapat sebesar : Rp %d", T);

    return 0;
}
