#include<stdio.h>

int main()
{
    int i,is_binary;
    char str[100];
    scanf("%s",&str);

    for(i=0;str[i]!='\0';i++)
    {
        is_binary=1;
        if(str[i]>='a' && str[i]<='z')
        {
            is_binary=0;
            break;
        }
        if(str[i]>='A' && str[i]<='Z')
        {
            is_binary=0;
            break;
        }
    }
    is_binary==1 ? printf("Yes"):printf("No");
    return 0;
}
