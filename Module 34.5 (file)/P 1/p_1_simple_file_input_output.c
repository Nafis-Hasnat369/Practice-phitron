#include<stdio.h>

int main()
{
    FILE *inputFile = fopen("input.txt","r");
    if(inputFile==NULL)
        printf("Input file not found!\n");
    FILE *outputFile = fopen("output.txt","w");
    while(1)
    {
        int x = fgetc(inputFile);
        if(x==EOF) break;
        fputc(x,outputFile);
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
