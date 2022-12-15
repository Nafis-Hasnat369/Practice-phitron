#include<stdio.h>
#include<math.h>
int main()
{
    int i,sum=0;
    char str[100];
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++)
    {
        sum+= str[i]-96;
    }

    for(i=1;i<sum;i++)
    {
        if(pow(2,i)==sum)
        {
            printf("Yes\n");
            printf("cost = 2^%d",i);
            break;
        }
        if(pow(2,i)<sum)
            continue;
        else
            printf("No");
            break;
    }
    return 0;
}
