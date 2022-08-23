#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[100];
    FILE *fp=fopen("file1.txt","a"); //to append new text in the exiting file
    gets(str);
    fputs(str,fp);
    fclose(fp);
    
    


}