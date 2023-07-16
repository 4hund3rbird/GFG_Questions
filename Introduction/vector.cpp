#include<iostream>
#include<vector>
#include<algorithm> //for max_element
#include<numeric> //for accumulate which is the sum
using namespace std;
int main(){
    //finding the max element using the vector methods
    int arr[]={10,20,30,40,199};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    vector<int>v{10,20,30,40,199};
    int max=*max_element(v.begin(),v.end());
    int res=*max_element(arr,arr+n);
    cout<<res<<endl;
    // cout<<max;
    int sum=accumulate(v.begin(),v.end(),0);
    cout<<sum;

    return 0;
}