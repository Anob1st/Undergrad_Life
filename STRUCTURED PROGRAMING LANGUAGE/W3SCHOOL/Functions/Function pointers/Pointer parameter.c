#include <stdio.h>
int add(int a, int b) {
    return a + b;
}

int calculate(int a, int b, int (*operation)(int, int)) {
    return operation(a, b);
}

int main() {
    printf("%d", calculate(10, 20, add));

    return 0;
}
