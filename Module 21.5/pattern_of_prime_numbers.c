#include<stdio.h>

int is_prime(int n)
{
    int i,is_prime=1;
    for(i=2; i<n; i++)
        if(n%i==0)
        {
            is_prime=0;
            break;
        }
    return is_prime;
}

int pattern(int n)
{
    int i,j,prime=2;
    for(i=1; i<=n; i++)
    {
        for(j=1;j<=i;j++)
        {
            while(j--)
            {

            }
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    pattern(n);
    return 0;
}
