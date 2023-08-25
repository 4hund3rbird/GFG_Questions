#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    cout<<'>'<<endl;
    char a='A';
    char z='Z';

    

    int e=64;
    int r=0;
    int Ascii=0;
    string s="FXSHRXW";

   
// Without Loop 
int m=0;
if(s.length()==7){
    m=
    pow(26,6)*((int)s[0]-64)+
    pow(26,5)*((int)s[1]-64)+
    pow(26,4)*((int)s[2]-64)+
    pow(26,3)*((int)s[3]-64)+
    pow(26,2)*((int)s[4]-64)+
    pow(26,1)*((int)s[5]-64)+
    pow(26,0)*((int)s[6]-64);
}else
if(s.length()==6){
    m=
    pow(26,5)*((int)s[0]-64)+
    pow(26,4)*((int)s[1]-64)+
    pow(26,3)*((int)s[2]-64)+
    pow(26,2)*((int)s[3]-64)+
    pow(26,1)*((int)s[4]-64)+
    pow(26,0)*((int)s[5]-64);
}else
if(s.length()==5){
    m=
    pow(26,4)*((int)s[0]-64)+
    pow(26,3)*((int)s[1]-64)+
    pow(26,2)*((int)s[2]-64)+
    pow(26,1)*((int)s[3]-64)+
    pow(26,0)*((int)s[4]-64);
}else
if(s.length()==4){
    m=
    pow(26,3)*((int)s[0]-64)+
    pow(26,2)*((int)s[1]-64)+
    pow(26,1)*((int)s[2]-64)+
    pow(26,0)*((int)s[3]-64);
}else
if(s.length()==3){
    m=
    pow(26,2)*((int)s[0]-64)+
    pow(26,1)*((int)s[1]-64)+
    pow(26,0)*((int)s[2]-64);
}else
if(s.length()==2){
    m=
    pow(26,1)*((int)s[0]-64)+
    pow(26,0)*((int)s[1]-64);
}else
if(s.length()==1){
    m=
    pow(26,0)*((int)s[0]-64);
}

//with loop


for(int i=0;i<s.length();i++){
    Ascii=(int)s[i]-e;
    r+=(pow(26,s.length()-(i+1))*Ascii);
}

    cout<<r<<endl;
    cout<<m<<endl;
    int arr[3]={1,2};
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;

    return 0;
}