#include<stdio.h>
#include<string.h>

int concatenation(int n)
{
    char str[100]="";
    for(int i=0; i<n; i++)
    {
        char temp[100];
        scanf("%s",&temp);
        char temp1[100]=" ";
        strcat(temp1,temp);
        (i==0) ? strcat(str,temp): strcat(str,temp1);
    }
    printf("%s\n",str);
}

int main()
{
    int n;
    scanf("%d",&n);
    concatenation(n);
    return 0;
}
