#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *lchild=NULL;
    Node *rchild=NULL;
};
class Queue{
    private:
    int front;
    int rear;
    int size;
    Node **ara;
    public:
    Queue()
    {
        front=rear=-1;
        size=10;
        ara=new Node*[size];
    }
    Queue(int size)
    {
        front=rear=-1;
        ara=new Node*[size];
    }
    Node* dequeue();
    void enqueue(Node *x);
    int isEmpty();

    


};
void Queue::enqueue(Node *x)
{
      if((rear+1)%size==front)
       printf("Queue is full \n");
    else
       {
           rear=(rear+1)%size;
           ara[rear]=x;}
    
}
Node* Queue::dequeue()
{
    Node* x=NULL;
      if(front!=rear)
          {
              front=(front+1)%size;
              x=ara[front];
          }
      else 
        printf("Queue is empty \n");
    return x;
}
int Queue::isEmpty()
{
    return front==rear;
}


