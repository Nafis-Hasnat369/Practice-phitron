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

    for(int i=1; i<=n; i++)
        ara[i-1]=i;
    for(int i=0; i<n; i++)
        fprintf(outputFile,"%d ",ara[i]);
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
