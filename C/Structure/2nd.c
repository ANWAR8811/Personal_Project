#include<stdio.h>

struct Person
{
    int age;
    double salary;
};

int main()
{
    struct Person p1,p2;

    printf("Enter info for person1: \n");
    printf("Enter age: ");
    scanf("%d",&p1.age);

    printf("Enter salary: ");
    scanf("%lf",&p1.salary);

    printf("Perso1: \n");
    printf("Age: %d\n",p1.age);
    printf("Salary: %lf\n",p1.salary);

    printf("\nEnter info for person2: \n");
    printf("Enter age: ");
    scanf("%d",&p2.age);

    printf("Enter salary: ");
    scanf("%lf",&p2.salary);

    printf("Person2: \n");
    printf("Age: %d\n",p2.age);
    printf("Salary: %lf\n",p2.salary);
}

