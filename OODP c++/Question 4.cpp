#include<iostream>
using namespace std;
class TIME
    {
        int hours;
        int minutes;
        int seconds;
        public:
        void getdata()
        {
            cout<<"Input Hours : ";
            cin>>hours;
            cout<<"Input Minutes : ";
            cin>>minutes;
            cout<<"Input seconds : ";
            cin>>seconds;
        }
        void add(TIME &s2)
        {
            this->hours=this->hours+s2.hours;
            this->minutes=this->minutes+s2.minutes;
            this->seconds=this->seconds+s2.seconds;
        }
        void display()
        {
            cout<<"Total Time = ";
            cout<<hours<<"hrs"<<" : "<<minutes<<"mins"<<" : "<<seconds<<"secs"<<endl;
        }

    };

int main()
{
    TIME s1;
    TIME s2;
    s1.getdata();
    cout<<endl;
    s2.getdata();
    s1.add(s2);
    cout<<endl;
    s1.display();

}

