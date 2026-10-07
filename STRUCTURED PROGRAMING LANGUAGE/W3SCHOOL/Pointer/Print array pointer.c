#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, 50};

    int *p = a;  //p points to a[0]  so *p=10
 
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));  /* *(p+i) means 4000, 4004, 4008...*/

/* a[0]       = *(p + 0)
   a[1]       = *(p + 1)
   a[2]       = *(p + 2)
   a[3]       = *(p + 3)
*/
    }

    return 0;
}
