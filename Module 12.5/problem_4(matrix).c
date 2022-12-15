#include<stdio.h>

int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",&a[i][j]);
    }
    int b[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",&b[i][j]);
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            a[i][j]+=b[i][j];
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
