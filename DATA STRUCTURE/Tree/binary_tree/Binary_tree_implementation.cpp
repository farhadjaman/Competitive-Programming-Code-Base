#include<bits/stdc++.h>
#include "Queue.h"
using namespace std;
class Tree
{
public:
    Node *root,*left_pointer,*right_pointer;
    Tree()
    {
        root = NULL;
    }
    void createtree();
    void preorder(Node *temp);
    void postorder(Node *temp);
    void inorder(Node *temp);
    void height(Node *root);
};

void Tree::createtree()
{
    int x;
    
    Queue q(100);//letting queue size as 100
    //at first we will take root value
    printf("Enter root value \n");
    cin>>x;
    root->data=x;
    q.enqueue(root);
    while(!q.isEmpty())
    {
        Node *parent=q.dequeue();
        printf("Enter left child,if there is no child than enter -1");
        cin>>x;
        if(x!=-1)
        {
            Node *temp=new Node;
            temp->data=x;
            q.enqueue(temp);
            parent->lchild=temp;
        }
        printf("Enter right child,if there is no child than enter -1");
        cin>>x;
        if(x!=-1)
        {
            Node *temp=new Node;
            temp->data=x;
            q.enqueue(temp);
            parent->rchild=temp;
        }
    }

}
void Tree::preorder(Node *temp)
{
    if(temp==NULL) return ;

    cout<<temp->data<<endl;
    preorder(temp->lchild);
    preorder(temp->rchild);
}
void Tree::inorder(Node *temp)
{
    if(temp==NULL) return ;

    preorder(temp->lchild);
    cout<<temp->data<<endl;
    preorder(temp->rchild);
}
void Tree::postorder(Node *temp)
{
    if(temp==NULL) return ;
    preorder(temp->lchild);
    preorder(temp->rchild);
    cout<<temp->data<<endl;
}