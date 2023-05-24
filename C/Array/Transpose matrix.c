#include<stdio.h>
int main()
{
    int A[10][10], trans[10][10], i, j, row, col;

    printf("Enter the number of rows and columns for the matrix: ");
    scanf("%d %d",&row,&col);

    //scaning the elements
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    //printing the matrix
    printf("\nA =\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\t");

    //transposing matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            trans[j][i] = A[i][j];
        }
        printf("\n");
    }

    //printing transposing matrix
    printf("\nTranspose matrix: \n");
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }

}
