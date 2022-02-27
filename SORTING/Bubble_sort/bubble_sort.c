#include <stdio.h>

int main()
{
    printf("INI ADALAH PROGRAM BUBBLE SORT ACSENDING\n");
    printf("----------------------------------------\n");
    int i, j, k, n, array[20];
    printf("masukan jumlah banyak data: ");
    scanf("%d", &n);
    printf("masukan %d angka integer\n", n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &array[i]);
    }
    //bubblle sort
    for (i = 1; i < n - 1; i++)
    {
        for (j = n; j >= i + 1; j--)
        {
            if (array[j - 1] > array[j])
            {
                k = array[j - 1];
                array[j - 1] = array[j];
                array[j] = k;
            }
        }
    }
    printf("hasil setelah diurutkn adalah: ");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}