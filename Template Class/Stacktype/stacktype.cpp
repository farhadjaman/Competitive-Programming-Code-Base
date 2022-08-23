#include "StackType.h"

template <class T>
StackType<T>::StackType()
{
    top = -1;
}

template <class T>
bool StackType<T>::IsEmpty()
{
    return (top == -1);
}

template <class T>
bool StackType<T>::IsFull()
{
    return (top == MAX_ITEMS-1);
}

template <class T>
void StackType<T>::Push(T newItem)
{
    if(IsFull()) throw FullStack();
    top++;
    item[top] = newItem;
}

template <class T>
void StackType<T>::Pop()
{
    if( IsEmpty() ) throw FullStack();
    top--;
}

template <class T>
T StackType<T>::Top()
{
    if( IsEmpty() ) throw EmptyStack();
    return item[top];
}

template <class T>
int StackType<T>::Size()
{
    if( IsEmpty() ) throw EmptyStack();
    return top+1;
}