#include <bits/stdc++.h>
using namespace std;
 
class Node
{
    public:
    int data;
    Node *next;
    Node *prev;
};
 

void insertEnd( Node* start, int value)
{
  
    if (start == NULL)
    {
        Node* new_node = new Node;
        new_node->data = value;
        new_node->prev = new_node;
        new_node->next = new_node->prev;
        start = new_node;
        return;
    }
 
    Node *last = (start)->prev;
 
    Node* new_node = new Node;
    new_node->data = value;
    new_node->next = start;
    (start)->prev = new_node;
    new_node->prev = last;
    last->next = new_node;
}
 

void insertBegin( Node* start, int value)
{
    Node *last = (start)->prev;
    Node* new_node = new Node;
    new_node->data = value;
    new_node->next = start;
    new_node->prev = last;
    last->next = (start)->prev = new_node;
    start = new_node;
}
 

void insertAfter( Node* start, int value1,int value2)
{
     Node* new_node = new Node;
    new_node->data = value1;
     Node *temp = start;
    while (temp->data != value2)
        temp = temp->next;
     Node *next = temp->next;
    temp->next = new_node;
    new_node->prev = temp;
    new_node->next = next;
    next->prev = new_node;
}
 
 
// void display( Node* start)
// {
//      Node *temp = start;
 
//     printf("\nTraversal in forward direction \n");
//     while (temp->next != start)
//     {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
//     printf("%d ", temp->data);
 
//     printf("\nTraversal in reverse direction \n");
//     Node *last = start->prev;
//     temp = last;
//     while (temp->prev != last)
//     {
//         printf("%d ", temp->data);
//         temp = temp->prev;
//     }
//     printf("%d ", temp->data);
// }
 
/* Driver program to test above functions*/
int main()
{
    /* Start with the empty list */
     Node* start = NULL;
 
    // Insert 5. So linked list becomes 5->NULL
    insertEnd(&start, 5);
 
    // Insert 4 at the beginning. So linked
    // list becomes 4->5
    insertBegin(&start, 4);
 
    // Insert 7 at the end. So linked list
    // becomes 4->5->7
    insertEnd(&start, 7);
 
    // Insert 8 at the end. So linked list
    // becomes 4->5->7->8
    insertEnd(&start, 8);
 
    // Insert 6, after 5. So linked list
    // becomes 4->5->6->7->8
    insertAfter(&start, 6, 5);
 
    printf("Created circular doubly linked list is: ");
    display(start);
 
    return 0;
}