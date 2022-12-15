#include<stdio.h>

int chess_board(int n)
{
    int row=8,col=8;
    int chess[row][col];
    int i,j;
    for(i=0;i<row; i++)
        for(j=0; j<col; j++)
            chess[i][j]=0;
    while(n--)
    {
        int r,c;
        scanf("%d %d",&r,&c);
        chess[r-1][c-1]=1;
    }

    for(i=0;i<row; i++)
    {
        int count = 0;
        for(j=0; j<col; j++)
        {
            if(chess[i][j]==1)
                count++;
        }
        if(count>1)
            for(j=0; j<col; j++)
                chess[i][j]=0;
    }
    for(i=0;i<col; i++)
    {
        int count = 0;
        for(j=0; j<row; j++)
        {
            if(chess[j][i]==1)
                count++;
        }
        if(count>1)
            for(j=0; j<row; j++)
                chess[j][i]=0;
    }

    printf("\n");

    for(i=0;i<row; i++)
        for(j=0; j<col; j++)
            if(chess[i][j]!=0)
                printf("%d %d\n",i+1,j+1);
}

int main()
{
    int n;
    scanf("%d",&n);
    chess_board(n);

    return 0;
}
