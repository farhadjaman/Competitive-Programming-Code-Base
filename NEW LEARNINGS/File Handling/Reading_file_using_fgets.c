//fgets() is function to read string from a file
//syntex fgets(str,n,fp) str=char_array n=char_array size fp=file pointer
//fgets returns a null value when it reads EOF(end of file)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[10];
    FILE *fp=fopen("file1.txt","r");

    while(fgets(str,8,fp)!=NULL)
    {
        printf("%s\n",str);
    }
    fclose(fp);



}