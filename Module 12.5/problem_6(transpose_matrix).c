#include<stdio.h>

int main()
{
    int row,col;
    scanf("%d%d",&row,&col);
    int mat[row][col];
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",&mat[i][j]);
    }
    int new_mat[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            new_mat[j][i]=mat[i][j];
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d ",new_mat[i][j]);
        printf("\n");
    }

    return 0;
}
