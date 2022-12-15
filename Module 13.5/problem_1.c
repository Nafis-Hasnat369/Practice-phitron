#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char input[20];
    for(i=0;i<n;i++)
    {
        scanf("%s",&input);
        printf("%s ",input);
    }

    return 0;
}
