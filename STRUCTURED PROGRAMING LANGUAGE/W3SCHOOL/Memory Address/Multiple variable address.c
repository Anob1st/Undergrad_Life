#include <stdio.h>
int main() {
    int a = 10;
    int b = 20;
    float c = 3.5;

    printf("%p\n", (void *)&a);
    printf("%p\n", (void *)&b);
    printf("%p", (void *)&c);

    return 0;
}
