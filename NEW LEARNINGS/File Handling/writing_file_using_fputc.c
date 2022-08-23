#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,size1;
    char *s;
    printf("Enter your Text\n");
    scanf("%s",s);
    FILE *fp=fopen("file1.txt","w");
    //printf("%c",s[0]);
    size1=strlen(s);
    //printf("%d",size1);
    for(i=0;i<size1;i++)
    {
        printf("%c\n",s[i]);
        fputc(s[i],fp);
    }
    fclose(fp);
    

  
}