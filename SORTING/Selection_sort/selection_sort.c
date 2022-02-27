#include <stdio.h>

int main()
{
    printf("INI ADALAH PROGRAM SELECTION SORT SECARA ACSENDING\n");
    printf("--------------------------------------------------\n");

    int pos,swap,i,j,n,array[20];
    printf("masukan jumlah banyak data: ");
    scanf("%d",&n);
    printf("masukan %d angka integer\n",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    //selection sort
    for (int i = 0; i < n-1; i++)
    {
        pos =i;
        for ( j = i+1; j < n; j++)
        {
            if (array[pos]>array[j])
            {
                pos=j;
            }
            
        }
        if (pos !=i)
        {
            swap=array[i];
            array[i]=array[pos];
            array[pos]=swap;
        }
    }
    printf("hasil pengurutan adalah: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}