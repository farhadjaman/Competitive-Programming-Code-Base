#include<iostream>
using namespace std;
class temp
{
        int count;
   public:
       temp():count(1){}
       void operator ++()
       {
           count=count+5;
       }
       void operator ++(int)
       {
           count=count+5;
       }
       void display()
       {
           cout<<"count:"<<count;
       }
};
int main()
{
    temp t;
    t++;
    ++t;

    //as we are incrementing a object of test class,operator funtion ++() is called;
    t.display();
}
