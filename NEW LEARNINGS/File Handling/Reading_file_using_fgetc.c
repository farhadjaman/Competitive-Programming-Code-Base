#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
       int i=0;
       char ch;
       FILE *fp=fopen("file1.txt","r");
       if(fp==NULL)
       {
           printf("File not found\n");
           return 0;
       }
       ch=fgetc(fp);
       while(!feof(fp))
       {
           printf("%c",ch);
           ch=fgetc(fp);
       }
}