#include<iostream>
using namespace std;
class B;
class A
{
private:
    int numA;
public:
    A(){numA=12;}
    friend int add(A,B);

};
class B
{
private:
    int numB;
public:
    B():numB(5) {}
    friend int add(A,B);
};

int add(A numberA,B numberB)
{
    return numberA.numA+numberB.numB;
}


int main()
{
    A count1;
    B count2;

    int display=add(count1,count2);
    cout<<display<<endl;
}

