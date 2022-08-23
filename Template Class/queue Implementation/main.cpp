#include <iostream>
#include "QueType.cpp"
using namespace std;

void checkEmpty(bool b)
{
    if(b)
        cout << "Queue is Empty" <<endl;
    else
        cout << "Queue is not Empty" <<endl;
}
void checkFull(bool b)
{
    if(b)
        cout << "Queue is full" <<endl;
    else
        cout << "Queue is not full" <<endl;
}
void Print(QueType<int> Q)
{

    QueType<int> temp;

    while(!Q.IsEmpty())
    {
        int a;
        Q.Dequeue(a);
        temp.Enqueue(a);
        cout << a << " ";

    }
    cout << endl;
      Q =temp;
}


int main()
{

    QueType<int> Q(5);
    checkEmpty(Q.IsEmpty());


    int i, temp;
    cout << "Enqueue 4 items : "<<endl;
    for(int i=0; i<4; i++)
    {
        cin>>temp;
        Q.Enqueue(temp);
    }

    if(Q.IsEmpty())
        cout<<"Queue is  Empty\n";
    else
        cout<<"Queue is not Empty\n";

    if(Q.IsFull())
        cout<<"Queue is full\n";
    else
        cout<<"Queue is not full\n";

    cout << "Enqueue another item : "<<endl;
    int del;
    cin>>del;
    Q.Enqueue(del);
    cout << "Queue is : "<<endl;
    Print(Q);
    checkFull(Q.IsFull());
    cout << "Enqueue another item : "<<endl;
    int del1;
    cin>>del1;
    if(!Q.IsFull())
    {
        Q.Enqueue(del1);
    }
    else
        cout << "Queue Overflow" << endl;

    int k, temp1;
    cout << "Dequeue two items : "<<endl;
    for(int k=0; k<2; k++)
    {
        cin>>temp1;
        Q.Dequeue(temp1);
    }

     Print(Q);
    int L, temp2;
    cout << "Dequeue 3 items : "<<endl;
    for(int L=0; L<3; L++)
    {
        cin>>temp2;
        Q.Dequeue(temp2);
    }

    Q.IsEmpty();
    cout << "Queue is empty "<<endl;

    cout << "Dequeue an item"<<endl;
    int d;
    cin>>d;
    if(!Q.IsEmpty())
        Q.Dequeue(d);
    else
        cout << "Queue Underflow" << endl;

    cout << "Input 10: ";
    QueType<string> qt;
    int n;
    string var;
    cin >> n;
    qt.Enqueue("1");
    while(n--)
    {
        qt.Dequeue(var);
        string s1 = var;
        cout << s1 << endl;
        string s2 = s1;
        qt.Enqueue(s1.append("0"));
        qt.Enqueue(s2.append("1"));
    }


    return 0;
}