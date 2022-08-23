#include<iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

class first
{

    int book_no;
    string book_name;
public:
    void getdata()
    {
        cout<<"Enter the Book name : ";
        cin>>book_name;
        cout<<"Enter the Book No : ";
        cin>>book_no;
    }
    void putdata()
    {
        cout<<"Book Name is "<<book_name<<endl;
        cout<<"Book No is "<<book_no<<endl;
    }
};
class second
{
    string author;
    string publisher;
public:
    void getdata()
    {

        cout<<"Enter the name of the Aurthor : ";
        cin>>author;
        cout<<"Enter the name of the publisher : ";
        cin>>publisher;

    }
    void showdata()
    {

        cout<<"Aurthor's Name : "<<author<<endl;
        cout<<"publisher's Name : "<<publisher<<endl;
    }

};
class third:public first,public second
{
    int  pageno;
    int  pubyear;

public:
    void get()
    {
        first::getdata();
        second::getdata();
        cout<<"Enter Number of pages : ";
        cin>>pageno;
        cout<<"Enter the publishing Year : ";
        cin>>pubyear;

    }
    void show()
    {
        first::putdata();
        second::showdata();
        cout<<"Number of Pages : "<<pageno<<endl;
        cout<<"Publishing Year : "<<pubyear<<endl;
    }

};

int main()
{
    int num;
    cout<<"\nEnter the number of books : ";
    cin>>num;
    third book[num];
    rep(i,num)
    {
        book[i].get();
        cout<<endl;
    }
    cout<<endl;
    rep(i,num)
    {
        book[i].show();
        cout<<endl;
    }


}
