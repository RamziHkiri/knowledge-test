#include <stdio.h>
#include <stdlib.h>
void swap( int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int erange(int array[], int start_idx, int end_idx)
{
    int pivot =array[start_idx];
    int begining = start_idx;
    int end = end_idx;

    while(begining < end)
    {
        while(array[begining]<= pivot)
        {
            begining ++;
        }
        while(array[end]>pivot)
        {
            end --;
        }
        if (begining < end)
        {
            swap(&array[end], &array[begining]);
        }
    }
    swap(&array[start_idx],&array[end]);
    return(end);
}
void quicksort(int array[], int start_idx, int end_idx)
{
    int pi = 0;
  

    if (start_idx < end_idx)
    {
        pi=erange(array,start_idx,end_idx);
        quicksort(array,start_idx,pi-1);
        quicksort(array,pi+1, end_idx);
    }
}



int main() 
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    quicksort(arr, 0, n - 1);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}


