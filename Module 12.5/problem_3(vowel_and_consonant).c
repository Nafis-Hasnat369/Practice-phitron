#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    fgets(name,sizeof(name),stdin);
    int i,l=strlen(name)-1;
    int vowel=0,consonant=0;
    for(i=0;i<l;i++)
    {
        if(name[i]== ' ' || name[i]==',')
            continue;
        if(name[i]=='a' ||name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
        {
            vowel++;
            continue;
        }
        else
            consonant++;
    }
    printf("Vowel- %d\n",vowel);
    printf("Consonant- %d\n",consonant);
    return 0;
}
