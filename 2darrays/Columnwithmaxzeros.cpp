#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>a={
                        {1,1,0},
                        {0,1,0},
                        {1,1,0},
                            };

    int max_colm=0,max_zero=0;
    int now_colm=0,now_zero=0;

    for(int i=0;i<a.size();i++)
    {   now_zero=0;
        for(int j=0;j<a[i].size();j++){
            // cout<<a[j][i];
            if(a[j][i]==0){
                now_zero+=1;
            }
        }
        if(now_zero>max_zero){
            max_zero=now_zero;
            max_colm=i;
        }
        cout<<now_zero<<" ";

       
    }
    cout<<endl;

    cout<<max_zero<<endl;
    cout<<max_colm<<endl;

    return 0;
}