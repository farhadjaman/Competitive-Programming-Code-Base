#ifndef STACKTYPE_H
#define STACKTYPE_H

const int MAX_ITEMS = 20;

class FullStack
{

};

class EmptyStack
{

};

template <class T>

class StackType
{

    private:
        int top;
        T item[MAX_ITEMS];

    public:
        StackType();
        bool IsFull();
        bool IsEmpty();
        void Push(T);
        void Pop();
        int Size();
        void reverse();
        T Top();
        

    
};

#endif // STACKTYPE_H