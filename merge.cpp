#include<bits/stdc++.h>
using namespace std;
void merg(int A[],int l,int mid,int r){
    
    int n1=mid-l+1,n2=r-mid;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++){
        a[i]=A[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=A[mid+1+i];
    }
    int left=0,right=0,k=l;
    while(left<n1 && right<n2)
    {
        if(a[left]<=b[right]){
            A[k]=a[left];
            left++,k++;

        }
        else{
            A[k]=b[right];
            right++,k++;
        }
    }
    while(left<n1){
        A[k] = a[left];
        left++, k++;
        }
        while (right< n2)
        {
            A[k] = b[right];
            right++, k++;
        }
}
void mergesrt(int A[],int l,int r){
    if(l>=r) return;
    int mid=(l+r)/2;
    mergesrt(A,l,mid);
    mergesrt(A,mid+1,r);
    merg(A,l,mid,r);

}


int main(){

    int A[]={4,3,6,1,8};
    mergesrt(A,0,4);
    for(int i=0;i<5;i++) cout<<A[i]<<" ";

}