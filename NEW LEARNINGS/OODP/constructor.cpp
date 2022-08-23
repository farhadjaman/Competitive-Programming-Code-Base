#include<iostream>
using namespace std;

class Point {
public:
    Point() { cout << "Normal Constructor called"<<endl; }
    Point(const Point &t) { cout << "Copy constructor called"<<endl; }
};

int main()
{
   Point *t1, *t2;
   t1 = new Point;
   t2 = new Point(*t1);
   Point t3 = *t1;
   Point t4;
   t4 = t3;
   //return 0;
}
/*#include<iostream>
using namespace std;

class X
{
public:
    int y;
    int x;
    int z;

};

int main()
{
    X a = {10,10};//initializing y and x consecutively
                  //if there were more data member than they would be initialized to 0
    X b = a;
    cout << a.x << " " << b.y<<" "<<b.z;
    return 0;
}*/
