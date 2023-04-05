// #include "bits/stdc++.h"
// using namespace std;
// #define lli long long int


// void solve(){
    
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     int m;
//     cin>>m;
//     lli mod = 1e9+7;
//     unordered_map<lli,string>mp;
//     for(int i=0;i<m;i++){
//         lli hash=0;
//         lli pow=1;
//         lli p=31;
//          string temp;
//          cin>>temp;
//          for(auto &c:temp){
//             if(c>='a' && c<='z'){
//                 hash=(hash+(c-'a'+1)*pow)%mod;
//             }
//             else{
//                 hash=(hash+(c-'A'+1)*pow)%mod;
//             }
//             pow=(pow*p)%mod;
//          }
//          mp[hash]=temp;
//          cout<<hash<<" "<<temp<<endl;

//     }

//     reverse(s.begin(),s.end());
//     vector<int>dp(n+1,0);
//     dp[n]=1;

//     }

// int main(){
//     int t=1;
//     // cin>>t;
//     while(t--){
//         solve();
//     }


//     return 0;
// }


#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 10005, M = 105;
const int base = 27, mod = 1e9 + 7;

int n, m, dp[N];
string s, dict[M];
unordered_set<int> st;

int hasha(string s) {
    int h = 0;
    for (char c : s) {
        h = (1LL * h * base % mod + c - 'a' + 1) % mod;
    }
    return h;
}
int main() {
    // getline(cin, s);
    // n = s.length();
  cin>>n;
  cin>>s;
    s = "#" + s;
    // Read the dictionary and store the hashes of all words
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> dict[i];
        int h = 0;
        for (char c : dict[i]) {
            h = (1LL * h * base % mod + c - 'a' + 1) % mod;
        }
        st.insert(h);
    }

    // Compute the DP array
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        int h = 0;
        for (int j = i; j >= 1 && i - j + 1 <= 100; j--) {
            h = (1LL * h * base % mod + s[j] - 'a' + 1) % mod;
            if (st.find(h) != st.end() && dp[j - 1]) {
                dp[i] = 1;
                break;
            }
        }
    }

    // Reconstruct the sentence
    vector<string> ans;
    for (int i = n; i > 0;i--) {
        for (int j = i; j > 0; j--) {
            if (dp[j - 1] && st.find(hasha(s.substr(j, i - j + 1))) != st.end()) {
                cout<<"*";
                ans.push_back(s.substr(j, i - j + 1));
                i = j - 1;
                dp[j]=1;
                break;
            }
        }
    }
    cout<<ans.size()<<" ";

    // Reverse and print the reconstructed sentence
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
        if (i < ans.size() - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
