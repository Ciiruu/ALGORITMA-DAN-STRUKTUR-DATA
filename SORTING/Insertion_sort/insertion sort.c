#include <stdio.h>
int main()
{
    printf("INI ADALAH PROGRAM INSERTION SECARA ACSENDING\n");
    printf("---------------------------------------------\n");
    int n, array[20], i, j, temp;
    printf("Masukkan jumlah banyaknya data: ");
    scanf("%d", &n);
    printf("Masukkan %d angka integer\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    //insertion sort
    for (i = 1; i <= n; i++)
    {
        j = i;
        while (j > 0 && array[j - 1] > array[j])
        {
            temp = array[j];
            array[j] = array[j - 1];
            array[j - 1] = temp;
            j--;
        }
    }
    printf("Hasil pengurutan sebagai berikut: ");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}