#include<stdio.h>
int main()
{
    int r1,r2,c1,c2,i,j,k,sum = 0;
    int A[10][10],B[10][10],res[10][10];

    printf("Enter the number of rows amd cols for A matrix : ");
    scanf("%d %d",&r1,&c1);

    printf("Enter the number of rows amd cols for B matrix : ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error !! A matrix column number and B matrix row number should be same always for matrix multiplication.");

        printf("\nEnter the number of rows amd cols for A matrix : ");
        scanf("%d %d",&r1,&c1);

        printf("\nEnter the number of rows amd cols for B matrix : ");
        scanf("%d %d",&r2,&c2);

    }

    // scaning A matrix
    printf("Enter elements for A matrix: \n");
    for(i=0; i<r1; i++)
    {

        for(j=0; j<c1; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");

    // scaning B matrix
    printf("Enter elements for B matrix: \n");
    for(i=0; i<r2; i++)
    {

        for(j=0; j<c2; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    printf("\n");


    //printing A matrix
    printf("\nA = ");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


    //printing B matrix
    printf("\nB = ");
    for(i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    //multiplying A & B matrices
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum = sum + A[i][k]*B[k][j];
            }
            res[i][j] = sum;
            sum = 0;
        }
    }

    //printing result matrix
    printf("\nResult = ");
    for(i=0; i<r1; i++)
    {

        for(j=0; j<c2; j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
        printf("\t");
    }


}
