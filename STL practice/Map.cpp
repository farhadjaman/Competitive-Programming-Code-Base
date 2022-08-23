#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,char>A;
    A[2]='F';
    A[4]='A';
    A[6]='R';
    A[9]='H';
    A[4]='A';
    A[1]='D';
 //or you can give input like this

    map<int,char>AR{ {1,'J'},{5,'V'},{9,'I'}};


    map<int,char>::iterator p=A.begin();
    while(p!=A.end())
    {
        cout<<p->second<<endl;
        p++;

    }
    AR.insert(pair<int,char>(4,'M'));

    map<int,char>::iterator R=AR.begin();
    while(R!=AR.end())
    {
        cout<<R->second<<endl;
        R++;
    }




}
