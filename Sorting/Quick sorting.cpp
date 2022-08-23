#include<iostream>
using namespace std;
int partition(int *A,int start,int end)
{

    int pivot=A[end];
    int i;
    int partitionIndex=start;//set partition index as start initially
    for(i=start;i<end;i++)
    {
        if(A[i]<=pivot)
        {
            swap(A[i],A[partitionIndex]);
            partitionIndex++;

        }
    }
    swap(A[partitionIndex],A[end]);
    return partitionIndex;

}

void QuickSort(int *A,int start,int end)
{
    if(start<end)
    {
        int partitionIndex=partition(A,start,end);
        QuickSort(A,start,partitionIndex-1);
        QuickSort(A,partitionIndex+1,end);

    }
}
int main()
{
  int i;
int A[]={7,6,5,4,3,2,1,0};
Quicksort(A,0,7);
for(i=0;i<8;i++)
cout<<A[i]<<" ";
}



