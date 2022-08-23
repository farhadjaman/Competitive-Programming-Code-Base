#include<stdio.h>
int main(){
    int n,i,p_max,p_min,count=0,maxd=-1,mind=1000000;
    scanf("%i",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%i",&A[i]);
        if(maxd<A[i])
         {
            maxd=A[i];
            p_max=i;
         }
         if(mind>=A[i])
         {
            mind=A[i];
            p_min=i;
         }
    }



  if(p_min<p_max){
      count = p_max + (n - 1 - p_min)-1;
  }
  else{
      count = p_max + (n - 1 - p_min);
  }
  printf("%i\n",count);
  
}