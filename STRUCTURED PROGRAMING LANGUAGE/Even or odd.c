#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Check if even or odd and print
    if (n % 2 == 0) {
        printf("Even\n");
    }
    else {
        printf("Odd\n");
    }

    return 0;
}
