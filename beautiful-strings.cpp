#include "bits/stdc++.h"
using namespace std;

void solve(){
    string s,t;
    int x,y;
    cin>>x>>y;
    cin>>s>>t;
    
    int n1=0,n2=0;
    int i=0;
    while(i<s.size()-1){
        if(s[i]==s[i+1]) n1++;
        i++;
    }
    i=0;
     while(i<t.size()-1){
        if(t[i]==t[i+1]) n2++;
        i++;
    }
 if(n1==0 && n2==0){
     cout<<"YES"<<endl;
    return;
 }

    if(n1!=0 && n2!=0)  {
        cout<<"NO"<<endl;
        return;
    }

    if(n1>1 || n2>1){
        cout<<"NO"<<endl;
        return;

    }
    if(s[s.size()-1]!=t[t.size()-1]){
      cout<<"YES"<<endl;
    return;
    }
    cout<<"NO"<<endl;
        return;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}