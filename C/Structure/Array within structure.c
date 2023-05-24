#include<stdio.h>
#include<string.h>

struct Person
{
    char name[50];
    int age;
    double salary;
};

int main()
{
   struct Person p[3];
   int i;

   for(i=0; i<3; i++)
   {
       printf("\nEnter info for Person %d\n",i+1);

       printf("Enter name: ");
       fflush(stdin);
       gets(p[i].name);

       printf("Enter age: ");
       scanf("%d",&p[i].age);

       printf("Enter salary: ");
       scanf("%lf",&p[i].salary);
   }

   for(i=0; i<3; i++)
   {
       printf("\n\nInfo for Person %d\n",i+1);
       printf("Name: %s\n",p[i].name);
       printf("Age: %d\n",p[i].age);
       printf("Salary: %lf\n",p[i].salary);

   }

}

