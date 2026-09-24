#include <stdio.h>
int square(int);

int main() {
    printf("%d", square(5));

    return 0;
}

int square(int n) {
    return n * n;
}
