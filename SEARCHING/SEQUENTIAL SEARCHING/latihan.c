#include <stdio.h>

int main()
{
    int n, i, Data[10], cari;
    printf("Mau input berapa data? ");
    scanf("%d", &n);
    printf("Masukan %d integer(s)\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &Data[i]);

    printf("Cari angka berapa?");
    scanf("%d", &cari);
    for (i = 0; i < n; i++)
    {
        if (Data[i] == cari)
        {
            printf("Angka %d KETEMU, dan tersimpan di lokasi/indeks %d", cari, i + 1);
            break;
        }
    }

    if (i == n)
        printf("Angka %d TIDAK DITEMUKAN!", cari);

    return 0;
}