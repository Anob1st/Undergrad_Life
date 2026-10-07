#include <stdio.h>

int main()
{
    int a[] = {28, 482, 1, 8, 15, 92};
    int *p = a;

    int largest = *p;

    for(int i = 1; i < 6; i++)
    {
        if(*(p + i) > largest)
        {
            largest = *(p + i);
        }
    }

    printf("Largest = %d", largest);

    return 0;
}
