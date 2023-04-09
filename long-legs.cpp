// #include "bits/stdc++.h"
// using namespace std;
// #define lli long long int

// int getAns(int x,int y,int a,int b,vector<vector<vector<int>>>&dp,int m){
//     if(a<x || b<y) return 1e9;
//     // cout<<a<<" "<<b<<" "<<dp[a][b]<<endl;
//     if(a==x && b==y) return 0;
//     if(dp[x][y][m]!=-1) return dp[x][y][m];

//    int p=getAns(x+m,y,a,b,dp,m);
//    int q=getAns(x,y+m,a,b,dp,m);
//    int u= getAns(x+m,y,a,b,dp,m+1);
//    int v=getAns(x,y+m,a,b,dp,m+1);
//    if(u!=1e9) u++;
//    if(v!=1e9) v++;

//     if(x==1e9 && y==1e9 && p==1e9 && q==1e9) return dp[x][b][y]=1e9;
//     return dp[a][b][m]=min(u,min(v,min(p,q)))+1;

    
   

// }
// void solve(){
//    int a,b;
//    cin>>a>>b;
//    vector<vector<vector<int>>>dp(a+1,vector<vector<int>>(b+1,vector<int>(a+b+1,-1)));
   
//    int m=1;
// //    dp[0][0][1]=0;
//   cout<< getAns(0,0,a,b,dp,m)<<endl;
//   return;

   

// }

// int main(){
//     int t=1;
//     cin>>t;
//     while(t--){
//         solve();
//     }


//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        int dist = abs(a - b); // compute the distance between (a, a) and (b, b)

        int m = 0;
        while (m * (m + 1) / 2 < dist) m++; // compute the minimum leg length required

        int ans = m; // start with m moves to increase the leg length
        int diff = m * (m + 1) / 2 - dist; // compute the difference between actual and required distance
        if (diff % 2 == 1) { // if difference is odd, add 2 moves to make the difference even
            ans += 2;
            m++;
            diff += m;
        }
        ans += diff / 2; // add remaining moves

        cout << ans << endl;
    }
    return 0;
}
