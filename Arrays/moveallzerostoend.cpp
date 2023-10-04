#include<bits/stdc++.h>
using namespace std;

void movezerostoend1(int arr[], int N){
    int arr1[N]={0},num=0;

    // for(int i=0;i<N;i++){
    //     if(arr[i]!=0){
    //         arr1[num]=arr[i];
    //         num++;
    //     }
    // }

    for(int i=0;i<N;i++){
        if(arr[i]!=0){
            arr[num]=arr[i];
            num++;
        }
    }

    for(int i=num;i<N;i++){
        arr[i]=0;
    }

    // for(auto a:arr){cout<<a<<" ";}
}


void movezerostoend(int n,int arr[]){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}

int main()
{
    int n=6,arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    movezerostoend(n,arr);
    for(auto a:arr){cout<<a<<' ';}


   return 0;
}




/*


    arr= 1 0 2 0 3 4 5
    arr= 1 2 2 0 3 4 5 i=1
    arr= 1 2 3 0 3 4 5
    arr= 1 2 3 4 3 4 5
    arr= 1 2 3 4 5 4 5
    
    arr1=1 2 3 4 5 
    arr[6]

    arr1[6]={0}

    num=0;

    arr[num]=arr[i];
    num++;


    arr2= 1 2 3 3 4 5 5 5 ;

    for i-> arr.len
        arr[i]
        
        -------------------
       | SAKSHI <3 GANESH |
       -------------------

    Hashmap<Integer,Integer>hs=new Hashmap<>();

    for(int i=0;i<arr.length;i++){
        
        int x=hs.getOrdefault(arr[i],0);

        hs.put(arr[i],x+1);
    }

*/




