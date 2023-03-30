#include <stdio.h>
struct student
{
    char name[30];
    int roll;
    float mark;
};

int main()
{
    int n;
    printf("How many Students: ");
    scanf("%d", &n);
    struct student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter information for student-%d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%f", &s[i].mark);
    }
    printf("\nStudents Informations: \n");
    for (int i = 0; i < n; i++)
    {
        printf("\nInformation for student-%d\n", i + 1);
        printf("Name: %s\n",s[i].name);
        printf("Roll: %d\n",s[i].roll);
        printf("Marks: %.2f\n",s[i].mark);
    }
}