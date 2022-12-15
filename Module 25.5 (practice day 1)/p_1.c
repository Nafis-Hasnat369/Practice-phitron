#include<stdio.h>

void get_array(int n)
{
    int ara[n];
    int i;
    for(i=0; i<n; i++)
        scanf("%d",&ara[i]);

    int k, count = 0;
    scanf("%d",&k);

    for(i=0; i<n; i++)
        if(ara[i]!=k) count++;

    printf("%d\n",count);
}

int main()
{
    int n;
    scanf("%d",&n);
    get_array(n);
    return 0;
}
