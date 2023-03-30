#include <stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp=fopen("Text.txt", "r");
    if (fp == NULL)
        printf("File doesn't exist\n");
    else
    {
        char ch[50];
        while(!feof(fp))
        {
            fgets(ch,50,fp);
            printf("%s",ch);
        }
    }
}