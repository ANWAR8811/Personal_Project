#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);

    if(marks >= 80)
        printf("A+");

    else if(70<=marks && 80<marks)
        printf("A");

    else if(60<=marks && 70<marks)
        printf("A-");

    else if(50<=marks && 60<marks)
        printf("B");

    else if(40<=marks && 50<marks)
        printf("C");

    else if(33<=marks && 40<marks)
        printf("D");

    else
        printf("Fail");


}
