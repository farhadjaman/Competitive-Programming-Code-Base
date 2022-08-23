#include<bits/stdc++.h>
using namespace std;


void add(int subset,int pos){
  
}

void remove(int& subset,int pos){
subset=(subset^(1<<pos-1));//XOR will only change the pos bit of subset to 0 =>(1^1=0) and rest will remain the same
}

void display(int subset){
  int bit_no=9;//numbers in the subset is less than or equal to 10
  for(int i=0;i<=bit_no;i++){
    if(subset & (1<<i)){
      //cout<<(1<<i)<<endl;
      cout<<i+1<<" ";
    }
  }
  cout<<endl;
}

int main(){
  int subset=10;
remove(subset,2);
display(subset);
}