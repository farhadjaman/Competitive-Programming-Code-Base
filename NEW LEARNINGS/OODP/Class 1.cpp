#include<bits/stdc++.h>
using namespace std;

class rectangle
{
   int width,height;
   public:
       void set_values(int,int);
       int area()
       {
           return width*height;
       }

} ;

void rectangle::set_values(int x,int y)
{
    width = x;
    height = y;
}

   int main()
   {
       rectangle rect1;
       rect1.set_values(6,5);
       cout<<rect1.area()<<endl;



       //cout<<a.k<<" "<<b.k<<endl;

   }
