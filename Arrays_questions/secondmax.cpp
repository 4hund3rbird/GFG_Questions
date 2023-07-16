#include<iostream>
#include<vector>
using namespace std;
vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = INT16_MIN, max2= INT16_MIN;
        
       for(int i=0;i<sizeOfArray;i++){
           if(arr[i]>max){
               max2=max;
               max=arr[i];
           }else if(arr[i]>=max2 && arr[i]<max){
               max2=arr[i];
           }

           cout<<"for i="<<i<<" - "<<max<<" "<<max2<<endl;
       }
       
         return {max,max2};
    }
int main()
{
    int n=3,arr[n]={2,1,2};
    for(auto x:largestAndSecondLargest(n,arr))
    cout<<x<<" ";
    return 0;
 
}

