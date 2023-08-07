#include "bits/stdc++.h"
using namespace std;
#define lli long long int


void solve(){
    int n;
    cin>>n;
    int x= (n*(n-1))/2;
    vector<int>v(x);
    // cout<<x<<" ";
    for(int i=0;i<x;i++) cin>>v[i];
    map<int,int>mp;
    for(int i=0;i<x;i++){
        mp[v[i]]++;
    }
vector<int>ans(n);
int i=0;
    for(auto &it:mp){
           int freq=it.second;
           int num = it.first;
        // cout<<num<<" "<<freq<<endl;
           while(freq>0){
            // cout<<num<<" ";
                 ans[i] = num;
                 int temp = n-i-1;
                 freq-=temp;
                 i++;
                 

           }
    }
    cout<<endl;
    while(i<n)  ans[i++]=1e9;
    
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    cout<<endl;
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