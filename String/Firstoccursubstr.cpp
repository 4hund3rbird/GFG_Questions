#include<iostream>
#include<string>

using namespace std;
 
int strstr(string s, string x)
{
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==x[0]){
            cout<<i<<endl;
            count=0;
            for(int j=0;j<x.length();j++){
                if(s[i+j]==x[j]){
                    count++;
                }
            }
            if(count==x.length()){
                return i;
            }
        }
    }
    return -1;
}

int findSum(string str)
    {
        char A[10]={'0','1','2','3','4','5','6','7','8','9'};
        int sum=0;
        int count=0;
        
        for(int i=0;i<str.length();i++)
        {
            if(isdigit(str[i]))
            {
                if(i!=str.length()-1)
                {
                    if(isdigit(str[i+1])){
                        count=0;
                        for(int j=1;j<=str.length();j++){
                            if(isdigit(str[i+j])){
                                count++;
                            }else{
                                string s=str.substr(i,count);
                                int n=stoi(s);
                                sum+=n;
                            }
                        }
                    }else{
                        string s=str.substr(i,i);
                        int n=stoi(s);
                        sum+=n;
                    }

                }
            }
        }
       	
    	// Your code here
        return sum;
    	
    }

int main()
{
    cout<<'>'<<endl;
    string s="ababaaaaaa",x="abaa";
    // cout<<strstr(s,x)<<endl;

    string str="1abc23";
    cout<<findSum(str)<<endl;


 
    return 0;
}