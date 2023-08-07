#include "bits/stdc++.h"
using namespace std;
#define lli long long int


void solve(){
   int n,m;
   cin>>n>>m;
   string s;
   cin>>s;
   vector<int>freq(s.size(),0);
   if(s[0]=='0') freq[0]=1;
   for(int i=1;i<s.size();i++){
    if(s[i]=='0') freq[i]+=freq[i-1]+1;
    else freq[i]=freq[i-1];

   
   }
   set<string>st;
   for(int i=0;i<m;i++){
    int l,r;
    cin>>l>>r;
    l--;
    r--;
    string temp =s;
    int numZ=0;
    for(int i=l;i<=r;i++){
        if(s[i]=='0') numZ++;
    }
    
    for(int i=l;i<=r;i++){
        if(numZ>0) temp[i]='0';
        else temp[i]='1';
        numZ--;
    }
    string subs=s.substr(l,r-l+1);
    cout<<subs<<endl;
    st.insert(temp);
   }
   cout<<st.size()<<endl;
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