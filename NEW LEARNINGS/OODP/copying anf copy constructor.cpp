#include<iostream>
using namespace std;
class vector1{
public:
int  x,y;


};
int main()
{
    vector1 a={2,3};//assigned to x and y
    vector1 b=a;
    b.x=5;
    cout<<a.x<<" "<<a.y<<endl;


}
