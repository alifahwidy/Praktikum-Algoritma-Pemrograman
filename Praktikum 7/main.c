// Nama File    : Praktikum7
// Nama         : Alifah Ananda Widy
// NIM          : 24060121140138
// Deskripsi    : Membuat soal tentang searching, minimal 10 elemen array

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    int arr[] = {1, 3, 7, 8, 10, 15, 17, 21, 69, 73};
    int N = sizeof(arr) / sizeof(arr[0]);
    int X;
    int IX;

    // Algoritma
    printf("Input nilai elemen yang ingin dicari: ");
    scanf("%d", &X);

    BinSearch (arr, N, X, &IX);
    (IX == -1)
        ? printf("Elemen tidak ditemukan \n")
        : printf("Elemen ditemukan pada index ke : %d\n", IX);

    return 0;
}
