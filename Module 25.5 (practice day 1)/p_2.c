#include<stdio.h>

int n;
void k_th_largest(int ara[n],int k)
{
    printf("%dth largest element = %d\n",k,ara[n-k]);
}
void k_th_smallest(int ara[n],int k)
{
    printf("%dth smallest element = %d\n",k,ara[k-1]);
}

int sort_array(int n)
{
    int i,j,temp;
    int ara[n];
    for(i=0; i<n; i++)
        scanf("%d",&ara[i]);
    for(j=0; j<n; j++)
        for(i=0; i<(n-1); i++)
            if(ara[i]>ara[i+1])
            {
                temp=ara[i];
                ara[i]=ara[i+1];
                ara[i+1]=temp;
            }
    int k;
    scanf("%d",&k);
    k_th_largest(ara,k);
    k_th_smallest(ara,k);
}

int main()
{
    scanf("%d",&n);
    sort_array(n);
    return 0;
}
