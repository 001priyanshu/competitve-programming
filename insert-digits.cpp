#include "bits/stdc++.h"
using namespace std;
#define lli long long int


void solve(){
   int n;
   char d;
   cin>>n>>d;
   string s;
   cin>>s;
   string temp="";
   bool flag=0;
   for(int i=0;i<n;i++){
    if(s[i]<d && !flag){
        temp+=d;  
        flag=1;
    }
    temp+=s[i];
   }
   if(!flag){
    temp+=d;
   }
   cout<<temp<<endl;
   return;
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}