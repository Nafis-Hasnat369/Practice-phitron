#include<stdio.h>

int main()
{
    int chess[8][8];
    int N,i,j,k;
    scanf("%d",&N);
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            chess[i][j]=0;
        }
    }

    for(k=0;k<N;i++)
    {
        scanf("%d%d",&i,&j);
        chess[i-1][j-1]=1;
    }
    printf("\n");



    return 0;
}
