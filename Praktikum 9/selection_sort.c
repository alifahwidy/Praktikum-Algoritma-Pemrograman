// Nama File: selection_sort.c
// Nama: Alifah Ananda Widy
// NIM: 24060121140138
// Deskripsi: Membuat selection sort, panjang array bebas

#include <stdio.h>

void swap(int *x, int *y)
{
    // Kamus Lokal
    int temp;

    //Algoritma
    temp = *x;
    *x = *y;
    *y = temp;
}

void selection_sort(int arr[], int n)
{
    // Kamus Lokal
    int i;
    int j;
    int min;

    // Algoritma
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            min = i;
            if (arr[j] < arr[min])
            {
                min = j;
            }
            swap(&arr[min], &arr[i]);
        }
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
    selection_sort(arr, n);
    printArr(arr, n);

    return 0;
}

