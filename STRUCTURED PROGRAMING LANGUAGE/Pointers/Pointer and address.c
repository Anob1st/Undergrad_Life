#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("Value = %d\n", x);
    printf("Address = %p\n", (void *)p);

    return 0;
}
