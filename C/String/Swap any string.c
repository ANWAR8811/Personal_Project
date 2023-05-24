#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20]="Rana Ahamed",s2[20]="Anwar",temp[20];

    printf("\nBefore swapping\n");
    printf("s1 = %s\n",s1);
    printf("s2 = %s\n",s2);

    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);

    printf("\nAfter swapping\n");
    printf("s1 = %s\n",s1);
    printf("s2 = %s\n",s2);
}
