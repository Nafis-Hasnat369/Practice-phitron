#include<stdio.h>

int main()
{
    int chess[3][3];
    int x,i,j,k;
    scanf("%d",&x);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            chess[i][j]=0;
        }
    }
    for(k=0;k<x;k++)
    {
        scanf("%d%d",&i,&j);
        chess[i-1][j-1]=1;
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(chess[i][j]!=0)
                continue;
            else
                printf("%d %d\n",i+1,j+1);
        }
    }
    return 0;
}
