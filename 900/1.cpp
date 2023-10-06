#include "bits/stdc++.h"
using namespace std;
#define int long long int

bool check(unordered_map<int,int>&mp,int k){
    int count = mp[k];
 for(auto &it:mp){
    if(it.first!=k && it.second>=count) return 0;
 }
 return 1;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i=0;i<n;i++){
        unordered_map<int,int>mp;
        for(int j=i;j<n;j++){
            mp[arr[j]]++;
            if(check(mp,k) || arr[j]==k){
                cout<<"YES"<<endl;
                return;
            }
        }
    }  

    cout<<"NO"<<endl;
    return;  
}

int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}