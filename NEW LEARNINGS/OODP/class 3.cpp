#include<iostream>
using namespace std;
class rectangle
{
   int height,width;
   public:
       rectangle(int,int);
       int area()
          {
              return height*width;
          }


};
rectangle::rectangle(int x,int y)
{
    width=x;
    height=y;
}

int main()
{
    rectangle rect(5,7);
    cout<<rect.area()<<endl;

}
