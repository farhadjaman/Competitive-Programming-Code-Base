#include <iostream>
using namespace std;
class C;
class B;
class A {
    int a;
public:
    A()
       {
        a=0;
       }
friend void show(A x, B y,C z);
};

class B {
private:
    int b;
public:
    B()
        {
         b=0;
        }
    friend void show(A x, B y,C z);
};
class C
{
    int c;
public:
    C()
    {
        c=5;
    }
    friend void show(A x, B y,C z);
};




void show(A x, B y,C z)
{
    x.a = 10;
    cout << "A::a=" << x.a << " B::b=" << y.b<<" C::c="<<z.c;
}

int main() {
    A a;
    B b;
    C c;
    show(a,b,c);
    return 0;
}
