#include<stdio.h>

int add_numbers(int n)
{
    int sum;
    sum = n;
    if(n>0)
        sum+=add_numbers(n-1);
    return sum;
}

int main()
{
    int n,r;
    scanf("%d",&n);
    r = add_numbers(n);
    printf("%d\n",r);
    return 0;
}
