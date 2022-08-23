#include<bits/stdc++.h>
using namespace std;
// union ABC{
//     int a;
//     double b;
// };
// int main()
// {
//      ABC var;
//      ABC *p=&var;
//      var.a=65;
//      var.b=8.555;

//      cout<<p->a<<" "<<p->b<<endl;
     
// }
class book{
           public:
           string title;
           string  author;
           int numofpages;
        };
class store
        {
            public:
            string color;
            string design;
            int size;

        };
    union {
        book b1;
        store s1; 
    }items;
int main()
{
    items.b1.author="farhad";
    // item.b1.author="farhad";
    // cout<<item.b1.author<<endl;
    
    // a.item.book.title="The Alchemist";
    // a.item.book.author="paulo coehlo";
    // a.item.book.numofpages=15;

    // cout<<a.item.book.title<<endl;
}