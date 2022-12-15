#include<stdio.h>

int is_leap_year(int year)
{
    if (year % 400 == 0)
        return 1;
    else if (year % 100 == 0)
        return 0;
    else if (year % 4 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    FILE *inputFile = fopen("input.txt","r");
    FILE *outputFile = fopen("output.txt","a");
    if(inputFile==NULL)
    {
        fprintf(outputFile,"File not found!");
        fclose(inputFile);
        fclose(outputFile);
        return 0;
    }
    int n;
    fscanf(inputFile,"%d",&n);
    is_leap_year(n) ? fprintf(outputFile,"%d-->YES\n",n) : fprintf(outputFile,"%d-->NO\n",n);
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
