#include <stdio.h>



struct Student
{
    int id;
    float cgpa;
};



int main()
{
    struct Student students[3] = {
        {101, 3.50},
        {102, 3.75},
        {103, 3.90}
    };




    struct Student *p = students;

    for(int i = 0; i < 3; i++)
    {
        printf("%d %.2f\n", p[i].id, p[i].cgpa);
    }

    return 0;
}
