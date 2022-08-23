#include<bits/stdc++.h>
using namespace std;
class Queue{
   public:
   int data;
   Queue *next=NULL;
}*front=NULL,*rear=NULL;
void enqueue(int x)
{

    Queue *temp=NULL;
    temp=new Queue();
    if(temp==NULL) printf("Queue is full \n");
    else
   { 
       temp->data=x;
       if(front==NULL)
       {
           front=rear=temp;
       }
       else
       {
           rear->next=temp;
           rear=temp;
       }
       
    }



}
int dequeue()
{
    int x=-1;
    if(front==NULL)
    {
        printf("Queue is empty \n");
    }
    else
    {
        Queue *temp=front;
        front=front->next;
        x=temp->data;
        free(temp);

    }
    return x;


}
void display()
{  
        Queue *temp=front;
        while(temp)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }

}

int main()
{
    enqueue(10);
    dequeue();
    dequeue();
    display();
}