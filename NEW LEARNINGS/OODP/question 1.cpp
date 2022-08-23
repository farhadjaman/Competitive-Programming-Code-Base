#include<bits/stdc++.h>
using namespace std;


/*class TestClass
{
public:
    // Constructors
    TestClass():x(0) { }
    TestClass(int a):x(a) { }
    void printValue()
    {
        cout<< "Value :"<<x;
    }
private:
    int x;
};
int main()
{
    TestClass obj;
    obj.printValue();
}*/
/*int main()
{
    int i,x[5],y,z[5];
    for(i=0;i<5;i++)
    {
        x[i]=i;
        z[i]=i+3;
        y=z[i];
        x[i]=y++;
    }
    for(i=0;i<5;i++)
    {
        cout<<x[i]<<endl;
    }

}*/

/*int main()
{
    int i,x[]={12,25,30,55,110} ;
     int* p=x;
    while(*p<110)
    {
        if(*p%3!=0)
        {
           *p=*p+1;
        }
        else
            *p=*p+2;
        p++;
    }
    for(i=4;i>=1;i--)
        cout<<x[i]<<" ";
}*/

void fun(char s[],int n)
{
    for(int i=0; s[i]!='\0'; i++)
        if(i%2==0)
            s[i]=s[i]-n;
        else
            s[i]=s[i]+n;
}
int main()
{
    char str[]="_";//"_"+2=a "_"-2=[
    fun(str,3);
    cout<<str<<endl;
    return 0;
}
