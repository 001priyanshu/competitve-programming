// #include "bits/stdc++.h"
// using namespace std;
// #define int  long long int

// int result=0;

// void solve(){
//    int n;
//    cin>>n;
//    vector<int>stocks(n);
//    for(int i=0;i<n;i++) cin>>stocks[i];

//   int ans=0;
//    unordered_map<int,int>mp;
//    for(int i=0;i<n;i++){
//       mp[stocks[i]-i]++;
//       ans=max(ans,mp[stocks[i]-i]);
//    }
//    cout<<ans<<endl;
//    return;
// }

// int32_t main(){
//     int t=1;
//     // cin>>t;
//     while(t--){
//         solve();
//     }

//     return 0;
// }

#include "bits/stdc++.h"
using namespace std;
#define int long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> diff(n);
    for (int i = 0; i < n; i++)
        cin >> diff[i];
    int lB, uB;
    cin >> lB >> uB;
    int ans1 = 0, ans2 = 0;
    int first = lB;
    int maxi = lB,mini=uB;

    for (int i = 0; i < n; i++)
    {
        int temp = first - diff[i];

        maxi = max(maxi, temp);
        mini=min(mini,temp);
        first = temp;
    }
    ans1=min(1+uB-maxi,1+mini-lB);
    first=uB;
    maxi=uB;
    mini=lB;
    for (int i = 0; i < n; i++)
    {
        int temp = first - diff[i];

        maxi = min(maxi, temp);
        mini=max(temp,mini);
        first = temp;
    }
     ans2=min(1+maxi-lB,1+uB-mini);
    cout<<ans1<<"**";

    int ans = max(ans1,ans2);
    int x=0;
    cout<<max(x,ans);
    return;
}

int32_t main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}