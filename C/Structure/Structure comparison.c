#include<stdio.h>

struct Person
{
    int age;
    double salary;
};

int main()
{
    struct Person p1= {27,3647.34},p2= {26,23747.24},p3;
    p3 = p1;

    if(p1.age==p3.age && p1.salary==p3.salary)
        printf("p1.info==p2.info");

    else
        printf("p1.ifno!=p2.info");
}
