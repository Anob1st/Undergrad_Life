#include <stdio.h>
int main() {
    int roll;
    char name[50];
    float cgpa;

    scanf("%d", &roll);
    scanf("%49s", name);
    scanf("%f", &cgpa);

    printf("Roll: %d\n", roll);
    printf("Name: %s\n", name);
    printf("CGPA: %.2f", cgpa);

    return 0;
}
