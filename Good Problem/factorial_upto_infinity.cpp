#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        int x; cin>>x; while(x--)
#define vec         vector<int>
#define vectorpair  vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         1000000007
#define MOD         1000000007
#define endll       "\n"
using ll = long long int;

//..............................................//

int main()
{
   int n,x;
   ll result=1,rem,count1=0;
   cout<<"Enter your number to see the prime factorial"<<endl;
   cin>>n;
   int value=1000000,value1,flag=0;
   vector<int>result1(value);
   value--;
   x=n;
	while(x!=0)
	{
			rem=x%10;
			x=x/10;
			result1[value]=rem;
			value;


	}
	for(int i=n-1;i>=2;i--)
	{
		count1=0;
		for(int j=value;j>=0;j--)
		    {
				value1=result1[j];
				result1[j]=(i*result1[j]+count1)%10;
				count1=(i*value1 + count1)/10;
				
				
			}
		}

		for(auto it:result1)
           {if(it!=0 && flag==0)
		   {
			   flag=1;
		   }
		   if(flag==1)
		   cout<<it;}
		 cout<<endl;



}

//cout<<"Case "<<case1<<": "<<s<<endl;
