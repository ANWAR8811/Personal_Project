#include<stdio.h>

struct Person
{
    int age;
    double salary;
};

int main()
{
   struct Person p[3];
   int i;

   for(i=1; i<4; i++)
   {
       printf("Enter info for Person %d\n",i);
       printf("Enter age: ");
       scanf("%d",&p[i].age);

       printf("Enter salary: ");
       scanf("%lf",&p[i].salary);
   }

   for(i=1; i<4; i++)
   {
       printf("Info for Person %d\n",i);
       printf("Age: %d\n",p[i].age);
       printf("Salary: %lf\n",p[i].salary);

   }
}
