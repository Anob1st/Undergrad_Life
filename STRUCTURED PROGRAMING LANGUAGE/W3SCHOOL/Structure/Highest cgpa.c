#include <stdio.h>

struct Student
{
    int id;
    char name[50];
    float cgpa;
};

int main()
{
    struct Student students[5];

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &students[i].id);
        scanf("%s", students[i].name);
        scanf("%f", &students[i].cgpa);
    }

    int highest = 0;

    for(int i = 1; i < 5; i++)
    {
        if(students[i].cgpa > students[highest].cgpa)
        {
            highest = i;
        }
    }

    printf("%d %s %.2f",
           students[highest].id,
           students[highest].name,
           students[highest].cgpa);

    return 0;
}
