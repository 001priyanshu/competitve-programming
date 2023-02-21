#include "bits/stdc++.h"
using namespace std;


void solve(){
    int n,s,r;
    cin>>n>>s>>r;

    int a1=s-r;
    if(n-1>r || (n-1)*a1<r){
        cout<<-1<<endl;
        return;
    }
   n--;
   int rem = r;
   rem=rem-n;
   cout<<a1<<" ";   
   while(n--){
    if(rem!=0){
         if(rem>=a1-1){
            cout<<a1<<" ";
            rem=rem-a1+1;
         }
         else{
            cout<<rem+1<<" ";
            rem=0;
         }
    }
    else{
        cout<<"1 ";
    }
   }
   cout<<endl;
   return;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}