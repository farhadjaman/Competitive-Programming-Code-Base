#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *lchild=NULL;
    Node *rchild=NULL;;
}*root=NULL;
Node* search(Node *temp,int key)
{
     if(temp==NULL) return NULL;
     else if(temp->data==key) return temp;
     else if(key>temp->data) return temp->rchild;
     else return temp->lchild;
}
Node* Insert(Node* parent,int key)
{

    if(parent==NULL)
    {
        Node* temp=new Node();
        temp->data=key;
        return temp;

    }
    else
    {
        if(key<parent->data)
        {
             parent->lchild=Insert(parent->lchild,key);
        }
        else
        {
             parent->rchild=Insert(parent->rchild,key);
        }
    }
}
int height(Node* p)
{
    int x=0,y=0;
    if(p==NULL) return 0;
    x=height(p->lchild);
    y=height(p->rchild);
    return x>y?x+1:y+1;


}

Node* findmax(Node* node)///this function will return the right most node of node object
{
    if(node)
    {
        while(node->rchild!=NULL)
        node=node->rchild;
    }
    return node;
}
Node* findmin(Node* node)///this function will return the left most node of node object
{

    if(node)
    {
        while(node->lchild!=NULL)
        node=node->lchild;
    }
    return node;
}
Node* Delete(Node* node,int key)
{
    if(node==NULL)
             return NULL;
    //at first we find the node that has the same key as parameter
     if(key<node->data)
        {
             node->lchild=Delete(node->lchild,key);
        }
    else if(key>node->data)
        {
             node->rchild=Delete(node->rchild,key);
        }
        else
        {
            //case-01:No child
            if (node->lchild == NULL && node->rchild == NULL)
            {
                if (node == root)
                    root = NULL;
                    free(node);
                    return NULL;
            }
            //case-02:one child
            else if(node->lchild==NULL)
            {
                Node* p=node->rchild;
                node->data=p->data;
                free(p);
            }
             else if(node->rchild==NULL)
            {
                Node* p=node->lchild;
                node->data=p->data;
                free(p);
            }
            //case-03:for two children
            else
            {

            }
            // now we will decide whether we will insert the inorder successor
            // or inorder predecissor on the key node
            // we decide it by calcuating the height
            if (height(node->lchild) > height(node->rchild)) // if this condition is true than we will take the inorder predecessor
            {
                // so now we have to delete an inorder precessor from the left side and put insert the value on the node
                // we will create a function to find Inorder predecessor as findmax
                Node *temp = findmax(node->lchild);
                node->data = temp->data;
                node->lchild = Delete(node->lchild, node->data);
            }
            else
            {
                Node *temp = findmin(node->rchild);
                node->data = temp->data;
                node->rchild = Delete(node->rchild, node->data);
            }
        }
}
void Inorder(Node* temp)
{
    Inorder(temp->lchild);
    cout<<temp->data<<endl;
    Inorder(temp->rchild);
}

int main()
{
    //Inserting element in BST
    root=Insert(root,5);
    Insert(root,10);
    Insert(root,15);
    Insert(root,20);
    Insert(root,6);
    Insert(root,8);


}