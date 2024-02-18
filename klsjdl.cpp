#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    //array size;
    int a;cin>>a;
    
    int A[a];
    // array input
    for(int i=0;i<a;i++)cin>>A[i];

   // for i=1 to A.length-1(iteriting element);
   for(int i=1;i<a;i++){
    
    int d=A[i];
    int j=i-1;
    // Insert A [i] into the sorted sequence A[0… i-1]

    while(j>0 && A[j]>d){
        A[j+1]=A[j];
        j=j-1;
        A[j+1]=d;
    }
   }
   for(int i=0;i<a;i++){
    cout<<A[i]<<" ";
   }
   cout<<endl;
    
  
    
}