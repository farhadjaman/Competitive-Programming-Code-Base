#include<bits/stdc++.h>
using namespace std;
class Queue{
    private:
    int front;
    int rear;
    int size;
    int *ara;
    public:
    Queue()
    {
        front=rear=-1;
        size=10;
        ara=new int[size];
    }
    Queue(int size)
    {
        front=rear=-1;
        ara=new int[size];
    }
    int dequeue();
    void enqueue(int x);
    void display();
    


};
void Queue::enqueue(int x)
{
      if((rear+1)%size==front)
       printf("Queue is full \n");
    else
       {
           rear=(rear+1)%(size);
           ara[rear]=x;
       }
    
}
int Queue::dequeue()
{
    int x=-1;
      if(rear!=front)
          {
              front=(front+1)%(size);
              x=ara[front];
          }
      else 
        printf("Queue is empty \n");
    return x;
}


void Queue::display()
{
     while(front<rear)
     {
         front++;
         cout<<ara[front]<<" ";

     }
     printf("\n");
}
int main()
{
    Queue q(5);
    q.enqueue(5);
    q.enqueue(5);
    q.enqueue(5);
    q.enqueue(5);
    q.enqueue(5);
    q.dequeue();
    q.display();
}

