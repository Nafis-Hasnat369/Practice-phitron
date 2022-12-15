#include<stdio.h>

int solve(int ara[],int n)
{
    if(n==0) return 0;
    int s = solve(ara+1,n-1);
    return s+(*ara%10);
}

int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];
    for(int i=0; i<n; i++)
        scanf("%d",ara+i);
    printf("%d\n",solve(ara,n));
    return 0;
}
