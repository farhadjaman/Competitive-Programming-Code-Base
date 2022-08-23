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
    books ob1;
    //Now we will read the data inside the file
    FILE *fp=fopen("file.txt","rb");
    if(fp==NULL)
    {
        printf("File not found\n");
        return 0;
    }
    while(fread(&ob1,sizeof(ob1),1,fp)>0)//it return a boolian value,if it reachs EOF than it will return 0
    {
        printf("book %d = %s %.2f\n",ob1.bookid,ob1.title,ob1.price);
    }
    fclose(fp);
    
}