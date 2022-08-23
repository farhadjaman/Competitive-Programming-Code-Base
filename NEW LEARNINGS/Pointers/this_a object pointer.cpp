//this is a pointer pointing the current instance we are working with
#include<bits/stdc++.h>
using namespace std;
class Entity
{
    public:int* x,y;//x is pointer but y is still a integer
    //int *x,*y;//now both x,y is an integer
    Entity(int x,int y)
    {
        this->x=x;
        this->y=y;
        //or
        (*this).x=x;
        (*this).y=y;
    }
    int GetX()const//here const means this methid cannot change any data member of the class
    {
        return this->x;
    }
    const int* const GetX()const//this means we are returning a int type pointer
                                //that can not be modified or reasigned to another address
                                //and method can change the data member of the class
    {
        return this->x;
    }
};

int main()
{
    const int max_age=90;
    const int* a=new int;//can't change the data in the pointer
    int* const a=new int;//can't reassigned the pointer to point to another address
    const int* a=new int;//cant\'t change the data nor reassigned the pointer to another address
    *a=(int*)2;//error for line 19
    a=(int*)&max_age;//error for line 20
    cout<<*a<<endl;
}
