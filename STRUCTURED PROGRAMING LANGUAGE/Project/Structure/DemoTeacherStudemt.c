#include <stdio.h>
#include<string.h>


struct attr
{
    char skill[70];
};

struct teacher
{
    char dept[60];
    char name[50];
    int id;
    struct attr attr;
};

struct student
{
    char dept[68];
    char name[60];
    int roll;
    float marks;
    struct attr attr;
};

int main()
{
    struct teacher T[5] = {
        {"CSE", "abirr", 2023,
            {"From SUST CSE, strong academic background"}},

        {"MATH", "sagar", 2025,
            {" National University student to a Engineering teacher!?"}},

        {"DM", "Teachee 3", 2010,
            {"Experienced, leadership qua.., advisor, communication"}},

        {"EEE", "Teacher4", 2025,
            {"Very strong CUET academic background"}},

        {"PHY", "Teacher5", 2025,
            {"who knows"}}
    };
    
    printf("TEACHER INFORMATION \n");

    for (int i = 0; i < 5; i++)
    {
        printf("\nTeacher %d\n", i + 1);
        printf("Dept: %s\nName: %s\nID: %d\nBackground: %s\n",
        T[i].dept,T[i].name,T[i].id,T[i].attr.skill);
    }
    



    struct student S[10];

    printf("\nSTUDENT INFORMATION\n");
//Too lazy to input 10 students. Changed i<10
    for (int i = 0; i <2; i++)
    {
        printf("\nStudent %d\n ENTER YOUR STUDENT INFO BELOW\n", i + 1);
        
        printf("Dept: ");
        scanf(" %67[^\n]", S[i].dept);
        printf("Name: ");
        scanf(" %59[^\n]", S[i].name);
        printf("Roll: ");
        scanf("%d", &S[i].roll);
        printf("Marks: ");
        scanf("%f", &S[i].marks);
        printf("Skills/background: ");
        scanf(" %69[^\n]", S[i].attr.skill);
    }

    printf("\n\nSTUDENT 8nfo\n");
//i<10
    for (int i = 0; i < 2; i++)
    {
        printf("\n\n\nStudent %d\n", i + 1);
        printf("Department: %s\n", S[i].dept);
        printf("Name: %s\n", S[i].name);
        printf("Roll: %d\n", S[i].roll);
        printf("Marks: %.2f\n\n", S[i].marks);
        printf("Skills/background: %s\n", S[i].attr.skill);
    }

    return 0;
}
