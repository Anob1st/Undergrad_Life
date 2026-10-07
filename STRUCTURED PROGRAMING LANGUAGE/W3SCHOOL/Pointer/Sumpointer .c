#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int *p = a;
    int sum = 0;

    for(int i = 0; i < 5; i++)
    {
        sum += *(p + i);
    }

    printf("Sum = %d", sum);

    return 0;
}
