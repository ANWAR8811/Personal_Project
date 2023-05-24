#include<stdio.h>

struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person p1,p2;

    p1.age = 27;
    p1.salary = 12434.323;

    printf("Perso1: \n");
    printf("Age: %d\n",p1.age);
    printf("Salary: %f\n",p1.salary);

    p2.age = 28;
    p2.salary = 12535.425;

    printf("Person2: \n");
    printf("Age: %d\n",p2.age);
    printf("Salary: %f\n",p2.salary);
}
