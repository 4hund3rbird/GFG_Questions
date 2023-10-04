#include<bits/stdc++.h>
using namespace std;
 
int sum(int arr[],int k){
    int total=0;
    for(int i=0;i<k;i++){
        total+=arr[i];
    }
    return total;
}
vector<int>sumofksubelements(int arr[],int n,int k){
    vector<int>s={};
    int first_sum=sum(arr,k);
    s.push_back(first_sum);
    for(int i=1;i<n-k+1;i++){
        first_sum+=arr[i+k-1];
        first_sum-=arr[i-1];
        s.push_back(first_sum);
    }
    return s;
}

int main()
{
    int n,k=2;
    cin>>n;
    int arr[n]={};
    for(int i=0;i<n;i++){cin>>arr[i];}
    vector<int>result=sumofksubelements(arr,n,k);
    for(auto a:result){cout<<a<<' ';}


   return 0;
}