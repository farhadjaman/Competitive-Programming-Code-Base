#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(long long int i=a;i<n;i++)
#define brep(i,a)  for(long long int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<long long int>
#define vectorpair  vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         1000000007
#define MOD         1000000007
using ll = long long int;
/*
bool compare(const pair<int,int>& a,const pair<int,int>& b)//here we put the parameter according to our need
  {
      if(a.second==b.second)
           return a.first<a.second;
      return a.second>b.second; //decreasing order

      

  }
int main()
{
    vector<pair<int,int>> v1;
    v1.push_back(make_pair(1,1));
    v1.push_back(make_pair(2,3));
    v1.push_back(make_pair(3,3));
    v1.push_back(make_pair(4,1));
    sort(all(v1),compare);

    for(int i=0;i<v1.size();i++)
      cout<<v1[i].first<<" "<<v1[i].second<<endl;

}*/
//now i will compare class objects using comparator

  class student{
  public :
      string name;
      int roll;
      int marks;
      student(string s,int r,int m)
      {
          this->name=s;
          this->roll=r;
          this->marks=m;
      }
  };
  bool compare(student ob1,student ob2)
  {
      if(ob1.marks==ob2.marks)
       return ob1.roll<ob2.roll;

      return ob1.marks>ob2.marks;

      

  }
int main()
{
    student s1("s1",1,50),s2("s2",2,60),s3("s3",3,60);
    vector<student> v1;

    v1.push_back(s1);
    v1.push_back(s2);
    v1.push_back(s3);
    sort(all(v1),compare);

    for(int i=0;i<v1.size();i++)
      cout<<v1[i].name<<" "<<v1[i].roll<<" "<<v1[i].marks<<endl;

}