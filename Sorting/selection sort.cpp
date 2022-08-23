#include<iostream>
using namespace std;
void selection_sort(int A[],int n)
{
    int k,j,temp;
    for(k=0; k<=n-2; k++)
    {
        for(j=k+1; j<=n-1; j++)
        {
            if(A[k]>A[j])
                temp=A[k];
            A[k]=A[j];
            A[j]=A[k];
        }
    }

}


int main()
{
    int n,i;
    cin>>n;
    int A[n];
    for(i=0; i<n; i++)
    {
        cin>>A[i];
    }
    selection_sort(A,n);
    for(i=0; i<n; i++)
    {
        cout<<A[i];
    }

}
