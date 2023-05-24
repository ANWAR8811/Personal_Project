
#include<stdio.h>
int main()
{
    int i,j,nors,nocs;
    int A[10][10],B[10][10],C[10][10];

    printf("Enter the number of rows amd cols: ");
    scanf("%d %d",&nors,&nocs);

    //scanning A matrix
    printf("Enter elements for A matrix: \n");

    for(i=0; i<nors; i++)
    {
        for(j=0; j<nocs; j++)
        {
        printf("A[%d][%d] = ",i,j);
        scanf("%d",&A[i][j]);
        }
        printf("\n");
    }


    //pirnting A matrix
    printf("A = ");
    for(i=0; i<nors; i++)
    {
        printf("\t");
        for(j=0; j<nocs; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //scanning B matrix
    printf("\n\nEnter elements for B matrix: \n");

    for(i=0; i<nors; i++)
    {
        for(j=0; j<nocs; j++)
        {
        printf("B[%d][%d] = ",i,j);
        scanf("%d",&B[i][j]);
        }
        printf("\n");
    }


    //pirnting B matrix
    printf("B = ");
    for(i=0; i<nors; i++)
    {
        printf("\t");
        for(j=0; j<nocs; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    //Subtracting two matrices
    for(i=0; i<nors; i++)
    {
        for(j=0; j<nocs; j++)
        {
           C[i][j] = A[i][j] - B[i][j];
        }

    }
    //printf("")

    //Printing C matrix
    printf("\n A - B = ");
    for(i=0; i<nors; i++)
    {

        for(j=0; j<nocs; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
        printf("\t");
    }
}

