#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    fgets(name,sizeof(name),stdin);
    int i,j,l=strlen(name)-1;

    char reverse[l];

    for(i=l-1,j=0; i>=0; i--,j++)
        reverse[j]=name[i];

    int count=0;
    for(i=0; i<l; i++)
        if(reverse[i]!=name[i])
        {
            count=1;
            break;
        }
    (count==1)?printf("No"):printf("Yes");
    return 0;
}
