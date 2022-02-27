//challange1
#include <stdio.h>
  
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int array[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (array[j] < array[min_idx])
            min_idx = j;

        swap(&array[min_idx], &array[i]);
    }
}
void printArray(int array[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}
int main()
{
    int array[] = {23,67,89,5,45,20,15,27};
    int n = sizeof(array)/sizeof(array[0]);
    selectionSort(array, n);
    printArray(array, n);
    return 0;
}

