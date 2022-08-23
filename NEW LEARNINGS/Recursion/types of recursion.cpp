
#include<bits/stdc++.h>
using namespace std;
/*
//tail recursion
//if a recursive function is calling it self and
//that calling is the last statement of the function
//than it's a tail recursion
//at tail recursion it doesn't have to perform anyhting
//so the calling function doesn't have any extra part like
//fun(n)+x-y;
void fun(int n)
{
    if(n>0)
    {

        cout<<n<<endl;
        fun(n-1);//last statement of the recursive function

    }
}
int main()
{
    int n;
    cin>>n;
    cout<<fun(n)<<" ";
}
*/



/*
//head recursion
//if a recursive function is calling it self and
//that calling is the first statement of the function
//than it's a head recursion
//at head recursion it only perform in the returnning time
//so the calling function can have extra part like
//fun(n)+x-y;


#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    if(n>0)
    {
        return fun(n-1)+n;//first statement of the recursive function
        cout<<n<<endl;


    }
}
int main()
{
    int n;
    cin>>n;
    cout<<fun(n)<<" ";
}*/


/*
//tree recursion
//if a recursive function call it self more than one times
//than it is tree recursion

void fun(int n)
{
   if(n>0)
   {
       cout<<n<<endl;
       fun(n-1);
       fun(n-1);
   }

}
int main()
{
   fun(3);
}
*/



/*
//Indirect recursion
//if there is more than one recursive function and one recursive function is calling others
//than it's working in a circular way,and its call indirect function
void funA(int n);
void funB(int n)
{
   if(n>0)
   {
       cout<<n<<endl;
       funA(n-1);
       cout<<n<<endl;
   }

}
void funA(int n)
{
   if(n>0)
   {
       cout<<n<<endl;
       funB(n-1);
       cout<<n<<endl;
   }

}
int main()
{
   funA(3);
}

*/

/*
//nested recursion
//if the parameter itself is a recursive call of the same function than its a nested recursion

int fun(int n)
{
   if(n>=100)
       return n-10;
   else
       return fun(fun(n+11));//parameter as a recursive call of the same function

}
int main()
{
   cout<<fun(98);
}

*/

