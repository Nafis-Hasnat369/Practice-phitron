#include<stdio.h>

int matrix_multiplication(int r1,int r2,int c1,int c2)
{
    int i,j,k,sum;
    int mat1[r1][c1],mat2[r2][c2],result[r1][c2];
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
            scanf("%d",&mat1[i][j]);
    for(i=0; i<r2; i++)
        for(j=0; j<c2; j++)
            scanf("%d",&mat2[i][j]);

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum+= mat1[i][k] * mat2[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int r1,r2,c1,c2;
    scanf("%d%d",&r1,&c1);
    scanf("%d%d",&r2,&c2);
    int mat1[r1][c1],mat2[r2][c2],result[r1][c2];
    while(c1!=r2)
    {
        printf("Error! first column and second row is not same!\n");
        scanf("%d%d",&r1,&c1);
        scanf("%d%d",&r2,&c2);
    }

    matrix_multiplication(r1,r2,c1,c2);

    return 0;
}
