#include<bits/stdc++.h>
using namespace std;
class cars
{
    string company_name;
    string model_name;
    string fuel_type;
    float mileage;
    double price;

public:

    cars(cars &obj);
    cars()
       {
           cout<<"default constractors were called"<<endl;
       }
    void set_data(string cname,string mname,string ftype,float m,double p)
    {
        company_name=cname;
        model_name=mname;
        fuel_type=ftype;
        mileage=m;
        price=p;

    }
    void display_data()
    {
        cout<<"Car Properties : "<<company_name<<endl;
        cout<<"Car Company Name : "<<model_name<<endl;
        cout<<"Car Company Model : "<<fuel_type<<endl;
        cout<<"Car Mileage-"<<mileage<<endl;
        cout<<"car Price:"<<price<<endl;
    }


};
int main()
{
    cars car1;
   // car1.set_data("Toyota","fj","Petrol",150,1500000);
    car1.display_data();
}
