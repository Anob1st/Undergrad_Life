#include <stdio.h>
int main() {
    char grade = 'A';

    switch (grade) {
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Good");
            break;
        default:
            printf("Other");
    }

    return 0;
}
