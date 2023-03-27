#include "bits/stdc++.h"
using namespace std;

void solve(){
    string s;
    int n;
    cin>>n;
    cin>>s;
   int i=0;
   bool p=0;
   

  while(i<s.size()){
    int a=0,b=0,c=0,d=0;
    while(i<s.size() && (s[i]=='m' || s[i]=='M')){
        a=1;
        i++;
    }
    while(i<s.size() && (s[i]=='e' || s[i]=='E')){
        b=1;
        i++;
    }
     while(i<s.size() && (s[i]=='o' || s[i]=='O')){
        c=1;
        i++;
    }
     while(i<s.size() && (s[i]=='W' || s[i]=='w')){
        d=1;
        i++;
    }
    if(a==1 && b==1 && c==1 && d==1 && i==n){
        p=1;
       
    }
  
 break;
  }
   if(p==1){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
   return;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}