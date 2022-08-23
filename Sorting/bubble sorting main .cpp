#include<iostream>
using namespace std;
void bubble_sort(int ara[],int n);

int main()
{
    int n,i;
    cin>>n;
    int ara[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    bubble_sort(ara,n);
    for(i=0; i<n; i++)
    {
        cout<<ara[i];
    }
}

void bubble_sort(int ara[],int n)
{
    int i,round,temp,flag;
    for(round=1; round<=(n-1); round++)
    {
        flag=0;
        for(i=0; i<n-1-round; i++)
            if(ara[i]>ara[i+1])
            {
                temp=ara[i];
                ara[i]=ara[i+1];
                ara[i+1]=temp;
                flag=1;


            }

        if(flag==0)
        {
            cout<<"round = "<<round+1<<endl;

            return;
        }


    }

}

