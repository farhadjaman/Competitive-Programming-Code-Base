#include <iostream>
class Test
{
public:
    static void fun();
};
 void Test::fun()
{
    std::cout<<"fun() is staticn";
}
int main()
{
    Test::fun();
    return 0;
}
