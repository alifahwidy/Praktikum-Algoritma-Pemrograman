// Nama File: insertion_sort.c
// Nama: Alifah Ananda Widy
// NIM: 24060121140138
// Deskripsi: Membuat insertion sort, panjang array bebas

#include <stdio.h>

void insertion_sort(int arr[], int n)
{
    // Kamus Lokal
    int i;
    int j;
    int key;

    // Algoritma
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
    }
}

void printArr(int arr[], int n)
{
    // Kamus Lokal
    int i;

    // Algoritma
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main()
{
    // Kamus
    int arr[]= {3, 2, 1, 4, 6, 5, 8, 9, 7, 10};
    int n;

    // Algoritma
    n = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, n);
    insertion_sort(arr, n);
    printArr(arr, n);

    return 0;
}
