#include <stdio.h>

struct Student
{
    int id;
    float cgpa;
};

int main()
{
    struct Student s = {101, 3.75};

    struct Student *p = &s;

    printf("%d\n", p->id);
    printf("%.2f", p->cgpa);

    return 0;
}
