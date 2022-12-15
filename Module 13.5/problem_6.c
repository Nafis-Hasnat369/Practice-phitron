#include<stdio.h>

int main()
{
    int N,i,j;
    scanf("%d",&N);
    int mat[N][N];
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            scanf("%d",&mat[i][j]);
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i==j)
                continue;
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
