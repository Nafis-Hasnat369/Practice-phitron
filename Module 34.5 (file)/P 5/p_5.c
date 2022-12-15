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
    for(int i=0; i<n; i++)
    {
        for(int j=n-i-1; j>0; j--)
            fprintf(outputFile," ");
        for(int k=0; k<n; k++)
            fprintf(outputFile,"#");
        fprintf(outputFile,"\n");
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
