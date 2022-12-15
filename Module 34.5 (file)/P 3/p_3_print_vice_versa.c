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
    int T;
    fscanf(inputFile,"%d",&T);
    while(T--)
    {
        int n;
        fscanf(inputFile,"%d",&n);
        if(n>0)
        {
            for(int i=n; i>=-n; i--)
                fprintf(outputFile,"%d ",i);
            fprintf(outputFile,"\n");
        }

        else if(n<0)
        {
            for(int i=n; i<=-n; i++)
                fprintf(outputFile,"%d ",i);
            fprintf(outputFile,"\n");
        }
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
