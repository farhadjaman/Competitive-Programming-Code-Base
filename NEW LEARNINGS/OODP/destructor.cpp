#include<bits/stdc++.h>
using namespace std;
    class ratio1
    {
        int num, den;
        public:
            ratio1()
            {
               cout<<"OBJECT IS BORN"<<endl;

            }
            ~ratio1()
            {
                cout<<"Object Dies"<<endl;
            }

    };
    int main()
             {
                 {
                     ratio1 x;//output :OBJECT IS BORN
                 }            //output :Object Dies
                 cout<<"Now x is alive"<<endl;//Now x is alive

             }

    int main()
             {
                 ratio1 x;//output :OBJECT IS BORN
                 cout<<"Now x is alive"<<endl;//Now x is alive

             }//output :Object Dies
