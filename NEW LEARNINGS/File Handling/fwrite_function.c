//there are two type of mode use in file handling to to open data
//binary mode and text mode,in binary mode,the opened file will be checked in binary
//in text mode the file will be checked in text for example fputc,fputs,fgets all are 
//opened in text mode and fwrite and fread will using binary mode
//we using 'b' suffix after mode(wb,rb,ab,wb+) in fopen function to open the file in binary mode

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct book
{
    int bookid;
    char title[20];
    float price;
}books;

int main()
{
    struct book ob1;
    FILE *fp=fopen("file.txt","ab");
    printf("Enter book id,Tile and price\n");
    scanf("%d",&ob1.bookid);
    fflush(stdin);
    gets(ob1.title);
    scanf("%f",&ob1.price);
    printf("%d%s%.3f",ob1.bookid,ob1.title,ob1.price);
    //Now we will write the data inside the file
    
    fwrite(&ob1,sizeof(ob1),1,fp);//first argument->address of variable that we want write inside file
                                  //size of variable we want to write
                                  //number of record of the variable ob1 we want to write
                                  //fp->file pointer
    fclose(fp);
    
}