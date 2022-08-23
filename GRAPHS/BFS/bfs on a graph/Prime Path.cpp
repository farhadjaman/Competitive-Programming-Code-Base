#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(long long int i=a;i<n;i++)
#define brep(i,a)   for(long long int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<long long int>
#define vectorpair  vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         10001
#define MOD         1000000007
using ll =          long long int;

//..............................................//
vec Primes;
vec edges[MAX];
int visited[MAX];
int dist[MAX];

int isprime(int number)
{

  if (number <= 1 || number > 2 && number % 2 == 0 || number % 3 == 0)
    return 0;
  else
  {
    for (int i = 5; i <= sqrt(number); i = i + 6)
    {

        if (number % i == 0)
        return 0;
    }

  }
  return 1;
}
void primes(int first, int second)
{
  for (int i = first; i <= second; i++)
    if (isprime(i))
      Primes.push_back(i);

}
int isValid(int num1,int num2)
{

  int count1=0;
  int temp1=num1,temp2=num2;
  while(num1!=0)
  {
    if(num1%10!= num2%10)
      count1++;
    num1=num1/10;
    num2=num2/10;

  }
  if(count1==1)
   return 1;
   else return 0;
}
void buildGraph()
{
  for(int i=0;i<Primes.size();i++)
  {

     for(int j=i+1;j<Primes.size();j++)
      if(isValid(Primes[i],Primes[j]))
      {
        edges[Primes[i]].push_back(Primes[j]);
        edges[Primes[j]].push_back(Primes[i]);
      }
  }


}
void BFS(int source)
{
  queue<int>q1;
  visited[source] = 1;
  q1.push(source);
  dist[source]=0;
  while (!q1.empty())
  {
    //cout << 1 << endl;
    int current = q1.front();
    q1.pop();

    for (int child : edges[current])
    {
      if (visited[child]==0)
      {
        q1.push(child);
        visited[child] = 1;
        dist[child] = dist[current] + 1;

      }
    }
  }
}
int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    int first,second;
    cin>>first>>second;
    primes(1000,9999);
    for(int i=1000;i<=9999;i++)
    {
      visited[i]=0;
      dist[i]=-1;
    }
    buildGraph();
    BFS(first);
  if(dist[second]==-1)
      cout<<"Impossible"<<endl;
    else
      cout<<dist[second]<<endl;
}
}
