#include <stdio.h>

void merge(int a[], int left, int mid, int right)
{




    int temp[100];

    int i = left;
    int j = mid + 1;
    int k = 0;


  

    while(i <= mid && j <= right)
    {
        if(a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }



  

    while(i <= mid)
        temp[k++] = a[i++];

    while(j <= right)
        temp[k++] = a[j++];

    for(i = left, k = 0; i <= right; i++, k++)
        a[i] = temp[k];
}








void mergeSort(int a[], int left, int right)
{
    if(left >= right)
        return;

    int mid = (left + right) / 2;

    mergeSort(a, left, mid);
    mergeSort(a, mid + 1, right);

    merge(a, left, mid, right);
}








int main()
{
    int a[] = {8, 3, 5, 2, 7, 1};

    int n = sizeof(a) / sizeof(a[0]);

    mergeSort(a, 0, n - 1);

    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;



  
}
