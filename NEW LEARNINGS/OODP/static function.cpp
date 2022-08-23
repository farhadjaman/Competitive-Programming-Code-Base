#include <iostream>
using namespace std;

class Test
{
    static int x;
public:
    Test() { x++; }
    static int getX() {return x;}
};

int Test::x = 0;

int main()
{
    cout << Test::getX() << " ";
    Test t[5];
    cout << Test::getX();
}
/*
Static functions can be called without any object. So the call “Test::getX()” is fine.
Since x is initialized as 0, the first call to getX() returns 0.
Note the statement x++ in constructor.
When an array of 5 objects is created, the constructor is called 5 times.
So x is incremented to 5 before the next call to getX().
*/
