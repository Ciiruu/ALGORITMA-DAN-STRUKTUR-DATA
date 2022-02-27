#include <stdio.h>
 
void insertionSort(int array[], int n)
{
    int i,j,temp;
    for (i = 1; i < n; i++) {
        temp = array[i];
        j = i - 1;
 
        while (j >= 0 && array[j] > temp) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = temp;
    }
}
void printArray(int array[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");
}
 
int main()
{
    int array[] = {23,67,89,5,45,20,15,27};
    int n = sizeof(array) / sizeof(array[0]);
 
    insertionSort(array, n);
    printArray(array, n);
 
    return 0;
}