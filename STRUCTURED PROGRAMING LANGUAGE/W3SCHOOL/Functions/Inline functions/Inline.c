#include <stdio.h>
static inline int square(int n) {
    return n * n;
}

int main() {
    printf("%d", square(5));

    return 0;
}
