#include<iostream>
using namespace std;
class complex_number
{
 int real;
 float imaginary;
 public:
     complex_number(){}
     complex_number(int r,float i)
     {
        real=r;
        imaginary=i;
     }
    void display_data()
    {
        cout<<"Complex Number is:"<<real<<"+"<<imaginary<<"i"<<endl;
    }

};

complex_number add2number(complex_number n1,complex_number n2 )
int main()
{
    complex_number comp1(5,4);
    comp1.display_data();
}
