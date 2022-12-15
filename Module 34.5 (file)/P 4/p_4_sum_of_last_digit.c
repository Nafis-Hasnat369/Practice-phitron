#include<stdio.h>

int main()
{
    FILE *inputFile = fopen("input.txt","r");
    FILE *outputFile = fopen("output.txt","w");
    if(inputFile==NULL)
    {
        fprintf(outputFile,"File not found!");
        fclose(inputFile);
        fclose(outputFile);
        return 0;
    }
    int n;
    fscanf(inputFile,"%d",&n);
    int ara[n];
    for(int i=0; i<n; i++)
        fscanf(inputFile,"%d",(ara+i));
    int sum = 0;
    for(int i=0; i<n; i++)
        sum+=(*(ara+i)%10);
    fprintf(outputFile,"Sum = %d",sum);
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
