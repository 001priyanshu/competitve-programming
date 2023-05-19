

// // #include "bits/stdc++.h"
// // using namespace std;

// // bool cmp(pair<pair<int,int>,int>&a,pair<pair<int,int>,int>&b){
// //     return a.first.second<b.first.second;
// // }

// // int solve(vector<pair<pair<int,int>,int>>v,int i,int lastEnd,vector<vector<int>>&dp){
    
// //     if(i>=v.size()) return 0;
// //    if(lastEnd!=0 &&  dp[i][lastEnd-1]!=-1) return dp[i][lastEnd-1];
// //     int take=0,notTake=0;
// //     if( lastEnd==0 ||  v[i].first.first>=v[lastEnd-1].first.second){
// //         take = solve(v,i+1,i,dp)+v[i].second;
// //     }
// //     notTake=solve(v,i+1,lastEnd,dp);

// //     return dp[i][lastEnd-1] =  max(take,notTake);

// // }

// // int main(){
// //     int n;
// //     cin>>n;
// //     vector<pair<pair<int,int>,int>>v(n);
// //     for(int i=0;i<n;i++){
// //         int a,b,c;
// //         cin>>a>>b>>c;
// //         v.push_back({{a,b},c});
       
// //     }
// //     sort(v.begin(),v.end(),cmp);
// //    vector<vector<int>>dp(n+2,vector<int>(n+2,-1));

// //     int lastEnd=0;
// //     cout<<solve(v,0,lastEnd,dp)<<endl;
// //     return 0;
// // }







// #include "bits/stdc++.h"
// using namespace std;

// bool cmp(pair<pair<int,int>,int>&a,pair<pair<int,int>,int>&b){
//     return a.first.second<b.first.second;
// }

// int solve(vector<pair<pair<int,int>,int>>v,int i,int lastEnd,vector<vector<int>>&dp){
    
//     if(i>=v.size()) return 0;
//    if( dp[i][lastEnd+1]!=-1) return dp[i][lastEnd+1];
//     int take=0,notTake=0;
//     if( lastEnd==-1 ||  v[i].first.first>=v[lastEnd].first.second){
//         take = solve(v,i+1,i,dp)+v[i].second;
//     }
//     notTake=solve(v,i+1,lastEnd,dp);

//     return dp[i][lastEnd+1] =  max(take,notTake);

// }

// int main(){
//     int n;
//     cin>>n;
//     vector<pair<pair<int,int>,int>>v(n);
//     for(int i=0;i<n;i++){
//         int a,b,c;
//         cin>>a>>b>>c;
//         v.push_back({{a,b},c});
       
//     }
//     sort(v.begin(),v.end(),cmp);
//    vector<vector<int>>dp(n+1,vector<int>(n+1,-1));

//     int lastEnd=-1;
//     cout<<solve(v,0,lastEnd,dp)<<endl;
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<pair<int,int>,int>& a, pair<pair<int,int>,int>& b) {
    return a.first.second < b.first.second;
}

int solve(vector<pair<pair<int,int>,int>> v, int i, int lastEnd, vector<vector<int>>& dp) {
    if (i >= v.size()) {
        return 0;
    }
    if (lastEnd != -1 && dp[i][lastEnd + 1] != -1) {
        return dp[i][lastEnd + 1];
    }
    int take = 0, notTake = 0;
    if (lastEnd == -1 || v[i].first.first >= v[lastEnd].first.second) {
        take = solve(v, i + 1, i, dp) + v[i].second;
    }
    notTake = solve(v, i + 1, lastEnd, dp);
    return dp[i][lastEnd + 1] = max(take, notTake);
}

int main() {
    int n;
    cin >> n;
    vector<pair<pair<int,int>,int>> v(n);
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        v[i] = {{a, b}, c};
    }
    sort(v.begin(), v.end(), cmp);
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    int lastEnd = -1;
    cout << solve(v, 0, lastEnd, dp) << endl;
    return 0;
}
