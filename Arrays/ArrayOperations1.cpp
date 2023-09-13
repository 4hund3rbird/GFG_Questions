#include <bits/stdc++.h>
using namespace std;


void insert1(int arr[],int n,int ele,int pos,int cap){
    for(int i=0;i<n;i++){
      if(i>=pos){
        int temp=arr[i];
        arr[i]=ele;
        ele=temp;
      }
     
    }

}

int insertopt(int arr[],int n,int ele,int pos,int cap){
    
    if(n==cap){
        return n;
    }

    int idx=pos-1;
    for(int i=n-1;i>=idx;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=ele;
    return 10;
}

int del(int arr[],int n,int pos){
    if(pos==n){
        return n;
    }
    for(int i=pos-1;i<n;i++){
        arr[i]=arr[i+1];

    }
    return n;
}

int delele(int arr[],int n,int ele){
    int index;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            index=i;
            break;
        }
    }
    for(int i=index;i<n;i++){
        arr[i]=arr[i+1];

    }
    return n-1;
}


int main(){
    int arr[20]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);

    delele(arr,8,7);
    for(auto a:arr)
    cout<<a<<" ";
    
    return 0;
}