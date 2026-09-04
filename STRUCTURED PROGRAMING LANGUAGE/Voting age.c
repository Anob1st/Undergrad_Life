#include <stdio.h>

int main() {
    char name[100];
    int age;
    scanf("%s", name);
    scanf("%d", &age);

    // Check and print
    if (age >= 18) {
        printf("%s can vote\n", name);
    }
    else {
        printf("%s cannot vote\n", name);
    }

    return 0;
}
