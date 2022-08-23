#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char c;
    FILE *fp=fopen("file.txt","w");
    while(1)
    {
        scanf("%c",&c);
        if(c=='0')
          break;
        fputc(c,fp);

    }
    
    
}