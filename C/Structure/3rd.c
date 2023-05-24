
#include<stdio.h>

struct Person
{
    int age;
    double salary;
};

int main()
{
    struct Person p1={27,3647.34},p2={26,23747.24},p3;;

    printf("Perso1: \n");
    printf("Age: %d\n",p1.age);
    printf("Salary: %lf\n",p1.salary);

    printf("Person2: \n");
    printf("Age: %d\n",p2.age);
    printf("Salary: %lf\n",p2.salary);

    p3 = p1;

    printf("Perso3: \n");
    printf("Age: %d\n",p3.age);
    printf("Salary: %lf\n",p3.salary);

}
