#include<stdio.h>

int solve(int base, int power)
{
    if(power!=0)
        return base*solve(base,power-1);
    else return 1;
}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d\n",solve(x,y));
    return 0;
}
