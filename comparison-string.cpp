#include "bits/stdc++.h"
using namespace std;
#define lli long long int


void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   int maxi=1;
   int i=0;
   while(i<s.size()){
   int temp=1;
   int flag=1;
    while(i<s.size()-1 && s[i]==s[i+1]){
        flag=0;
        temp++;
        i++;
    }
    maxi=max(maxi,temp);
    if(flag) i++;


   }
   cout<<maxi+1<<endl;
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