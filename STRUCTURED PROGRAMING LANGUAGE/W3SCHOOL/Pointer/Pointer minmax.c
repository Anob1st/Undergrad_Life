#include <stdio.h>

void MinMax(int arr[], int len, int *min, int *max)
{
    *min = *max = arr[0];

    for(int i = 1; i < len; i++)
    {
        if(arr[i] < *min)
        {
            *min = arr[i];
        }

        if(arr[i] > *max)
        {
            *max = arr[i];
        }
    }
}

int main()
{
    int a[] = {72, 83, 7, 929, 82, 6, 9, 92, 9, 100};

    int min, max;

    int len = sizeof(a) / sizeof(a[0]);

    MinMax(a, len, &min, &max);

    printf("Minimum = %d\n", min);
    printf("Maximum = %d", max);

    return 0;
}
