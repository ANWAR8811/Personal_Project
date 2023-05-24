#include <stdio.h>
   int main()
{   int a, b, c, x;
     printf("Enter user value of x:");
     scanf("%d", &x);
     a=0; b=1;
     printf("%d, %d", a, b);
     for(int i=2; i<=x; i++)
     {
           c=a+b;
           printf(", %d", c);
           a=b;
           b=c;
     }
     return 0;
}
