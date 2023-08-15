#include "bits/stdc++.h"
using namespace std;
#define lli long long int

bool cmp(pair<int,int>&a,pair<int,int>&b){
    return a.first>b.first;
}
void solve(){
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
       for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<pair<int,int>>c(n);
    for(int i=0;i<n;i++){
         c[i] = {a[i]-b[i],i};
    }
    sort(begin(c),end(c),cmp);
    int maxi = c[0].first;
    int ans=0;
    vector<int>temp;
    for(int i=0;i<n;i++){
        if(c[i].first==maxi) {
            
            temp.push_back(c[i].second);
        }
    }
    cout<<temp.size()<<endl;
    for(auto &i:temp) cout<<i+1<<" ";
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