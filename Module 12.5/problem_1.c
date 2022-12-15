#include<stdio.h>

int main()
{
    char name[100];
    fgets(name,sizeof(name),stdin);
    int i,j;
    for(i=0;name[i]!='\0';i++)
    {
        printf("%c",name[i]);
    }
    return 0;
}
