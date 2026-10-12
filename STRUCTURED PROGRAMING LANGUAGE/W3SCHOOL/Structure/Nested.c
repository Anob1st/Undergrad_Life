#include <stdio.h>



struct Teacher
{
    int id;
    char name[30];
};

struct Student
{
    int id;
    char name[30];
};

struct Department
{
    char name[30];
//nested
    struct Teacher teacher;
    struct Student student;
};

int main()

{
  //arr
    struct Department d = {
        "CSE",
        {1, "Karim"},
        {101, "Rahim"}
    };

    printf("Department: %s\n", d.name);
    printf("Teacher: %s\n", d.teacher.name);
    printf("Student: %s\n", d.student.name);

    return 0;
}
