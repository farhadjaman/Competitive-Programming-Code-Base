#include<bits/stdc++.h>

using namespace std;


class Person
{

    friend std::ostream &operator<<(std::ostream &os,const Person &p);
    string name;
    int age;
public:
    Person():name{"Unknown"},age{0} {}
    Person(string name,int age)
        :name(name),age(age) {}
    bool operator<(const Person &rhs)const
    {
        return this->age<rhs.age;

    }
    bool operator==(const Person& rhs)const
    {
        return (this->name==rhs.name&& this->age==rhs.age);

    }


};
std::ostream &operator<<(std::ostream &os,const Person &p)
{
    os<<p.name<<":"<<p.age;
    return os;
}
template<typename T>

void display(const std::list<T>&l)
{

    cout<<"[";
    for(const auto &elem:l)
    {
        cout<<elem<<" ";
    }
    cout<<"]"<<endl;
}
void test1()
{
    cout<<"\nTEST1===================="<<endl;
    list<int>l1;
    display(l1);

    list<string>l2;
    l2.push_back("middle");
    l2.push_back("Last");
    l2.push_front("First");

    list<int>l3;
    l3={1,2,3,4,5,6,7,8,9,10};
    display(l3);

    list<int>l4(10,150);

}
void test2()
{
    cout<<"\nTEST2===================="<<endl;

    list<int>l1{1,2,3,4,5,6,7,9,10};
    display(l1);
    cout<<"SIZE : "<<l1.size()<<endl;
    cout<<"FRONT : "<<l1.front()<<endl;
    cout<<"BACK : "<<l1.back()<<endl;
    l1.clear();
    display(l1);
    cout<<"SIZE : "<<l1.size()<<endl;


}

void test3()
{
    cout<<"\nTEST3===================="<<endl;
    list<int>l1{1,2,3,4,5,6,7,9,10};
    display(l1);

    l1.resize(5);
    display(l1);
    list<Person>persons;
    persons.resize(5);//using the persons default constractor
    display(persons);

}

void test4()
{
    cout<<"\nTEST4===================="<<endl;
    list<int>l1{1,2,3,4,5,6,7,9,10};
    display(l1);
    auto it=find(l1.begin(),l1.end(),5);//iterator it will find the first 5 and point to it
    if(it!=l1.end())
        l1.insert(it,100);//iterator it will insert 100 before 5;
    display(l1);

    list<int>l2{1000,2000,3000};
    l1.insert(it,l2.begin(),l2.end());//iterator it will insert the whole l2 list before 5
    display(l1);

    advance(it,-4);//point to the 100 by going backward 4 steps from 5
    cout<<*it<<endl;
    l1.erase(it);//it will erase 100 and iterator it will become invalid
    cout<<*it<<endl;
    display(l2);



}
void test5()
{
    cout<<"\nTEST5===================="<<endl;
    list<Person>stooges{
   {"Larry",18},
   {"Moe",25},
   {"Curly",17}
    };
    display(stooges);
string name;
int age;
cout<<"\nEnter the name of the next Stooge: ";
getline(cin,name);
cout<<"\nEnter the age: ";
cin>>age;
stooges.emplace_back(name,age);
display(stooges);
//insert Frank before
auto it=find(stooges.begin(),stooges.end(),Person{"Moe",25});

if(it!=stooges.end())
    stooges.emplace(it,"Frank",18);
display(stooges);

}
void test6()
{
    cout<<"\nTEST6===================="<<endl;
    list<Person>stooges{
   {"Larry",18},
   {"Moe",25},
   {"Curly",17}
    };
    display(stooges);
    stooges.sort();
    display(stooges);


}




int main()
{

    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
}
