#include<iostream>
using namespace std;
class A
{
    friend class B;
    int x;
public:

    A(int a)
    {
        x=a;
    }

};
class B
{
public:
    void show(A obj)
    {
        cout<<"x value is: "<<obj.x;
    }
};
int main()
{
    A obj1(5);
    B obj2;
    obj2.show(obj1);
}
