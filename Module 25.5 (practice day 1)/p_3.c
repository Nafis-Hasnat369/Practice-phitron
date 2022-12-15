#include<stdio.h>
#include<string.h>
#include<math.h>
int add_cost(char str[])
{
    int i, sum=0;
    for(i=0; i<strlen(str); i++)
        sum+= str[i]-96;
    return sum;
}

void is_power_of_two(int n)
{
    int count = 0,index;
    for(int i=1; i<n/2 ; i++)
        if(pow(2,i)==n)
        {
            count = 1;
            index = i;
        }

    count ? printf("Yes\ncost = 2^%d",index):printf("No");
}

int main()
{
    char str[100];
    scanf("%s",&str);
    int sum_of_char = add_cost(str);

    is_power_of_two(sum_of_char);

    return 0;
}
