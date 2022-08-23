#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
template <typename T>
void vecprint(vector<T>&v1){for(auto it:v1) cout<<it<<" ";cout<<endl;}

int main(){

int n,x;
cin>>n;
vector<int>vec;

rep(i,n){
cin>>x;
vec.push_back(x);
}
vecprint(vec);
}