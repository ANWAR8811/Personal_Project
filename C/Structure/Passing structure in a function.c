#include<stdio.h>
#include<string.h>

struct Person
{
    char name[30];
    int age;
    double salary;
};

void display(struct Person p)
{
    printf("\nName: %s\n",p.name);
    printf("Age: %d\n",p.age);
    printf("Name: %lf\n",p.salary);
}

int main()
{
    struct Person p1,p2;

    strcpy(p1.name,"Rana Ahamed");
    p1.age = 20;
    p1.salary = 5;

    display(p1);

    strcpy(p2.name,"Anwar");
    p2.age = 21;
    p2.salary = 10;

    display(p2);
}
