#include<stdio.h>
int main()
{
    int A[3][3], i, j, usum=0, lsum=0;

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

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i<j)
                usum += A[i][j];
            if(i>j)
                lsum += A[i][j];

        }

    }
    printf("The summation of upper triangle elements: %d\n",usum);
    printf("The summation of lower triangle elements: %d\n",lsum);
}
