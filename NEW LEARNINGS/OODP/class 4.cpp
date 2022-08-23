#include<iostream>
using namespace std;
class rectangle
{
   int height,width;
   public:
       rectangle(int x,int y)
       {
           width=x;
           height=y;
           cout<<width<<" "<<height<<endl;
       }
       rectangle();
       int area()
          {
              return height*width;
          }


};

rectangle::rectangle(void)
{
    width=5;
    height=5;
}

//rectangle::rectangle(int x,int y)
//{

//}

int main()
{
    rectangle rect(5,7),rect2(5,7);
    rectangle rect1;
    cout<<rect.area()<<endl;
    cout<<rect1.area()<<endl;

}

