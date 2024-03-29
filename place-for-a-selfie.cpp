#include "bits/stdc++.h"
using namespace std;
#define lli long long int

void solve(){
     int n, m;
    cin >> n >> m;
    vector <int> lines(n);
    for (int i = 0; i < n; i++) {
        cin >> lines[i];
    }
    sort(lines.begin(), lines.end());

    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        int ind = lower_bound(lines.begin(), lines.end(), b) - lines.begin();
        if (ind < n && (lines[ind] - b) * (lines[ind] - b) < 4 * a * c) {
            cout << "YES\n" << lines[ind] << "\n";
            continue;
        }
        if (ind > 0 && (lines[ind - 1] - b) * (lines[ind - 1] - b) < 4 * a * c) {
            cout << "YES\n" << lines[ind - 1] << "\n";
            continue;
        }
        cout << "NO\n";

        
   
    }
        cout<<endl;
}

int main(){
    lli t=1;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}