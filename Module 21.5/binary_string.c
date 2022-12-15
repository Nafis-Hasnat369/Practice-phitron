#include<stdio.h>
#include<string.h>
int is_binary_string(char str[])
{
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' )
            return 0;
    }
    return 1;
}

int main()
{
    char str[100];
    scanf("%s",&str);
    int is_binary=is_binary_string(str);
    is_binary ? printf("Yes\n"): printf("No\n");
    return 0;
}
