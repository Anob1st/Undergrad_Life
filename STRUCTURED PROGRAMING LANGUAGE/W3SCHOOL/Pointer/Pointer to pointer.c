#include <stdio.h>
int main() {
    int number = 25;
    int *ptr = &number;
    int **ptr2 = &ptr;

    printf("%d", **ptr2);

    return 0;
}
