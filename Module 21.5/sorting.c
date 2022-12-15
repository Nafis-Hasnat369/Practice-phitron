#include<stdio.h>

int sort_array(int n)
{
    int i,j, ara[n];
    for(i=0; i<n; i++)
        scanf("%d",&ara[i]);

    for(j=0; j<n; j++)
        for(i=0; i<(n-1); i++)
            if(ara[i]>ara[i+1])
            {
                int temp=ara[i];
                ara[i]=ara[i+1];
                ara[i+1]=temp;
            }
    for(i=0; i<n; i++)
        printf("%d ",ara[i]);

}

int main()
{
    int n;
    scanf("%d",&n);

    sort_array(n);

    return 0;
}
