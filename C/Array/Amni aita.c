#include<stdio.h>
int main()
{
    int A[3][3], i, j, sum=0;

    //scaning the elements
    printf("Enter the elements for the matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    //printing the matrix
    printf("\nA =\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //sum of diagonal elements
    printf("\nDiagonal elements are: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j)
            {
                printf("%d ",A[i][j]);
                sum = sum + A[i][j];
            }
        }
    }
    printf("\nSummation of diagonal elements: %d\n",sum);
}
