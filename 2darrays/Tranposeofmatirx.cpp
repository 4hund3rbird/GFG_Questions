#include <iostream>
using namespace std;
int main(){
    /*
        1 1
        2 3
        ->
        1 2
        1 3
    */
   int n=5;
   int arr[][n]={
    {1,1,1,1,1},
    {2,2,2,2,2},
    {3,3,3,3,3},
    {4,4,4,4,4},
    {5,5,5,5,5}
   };

   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }cout<<endl;
   }

   cout<<endl;

   for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        int t=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=t;
    }
   }

   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }cout<<endl;
   }
    return 0;
}