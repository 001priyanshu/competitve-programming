#include "bits/stdc++.h"
using namespace std;
#define lli long long int


void solve(){
 int n;
        cin >> n;

        vector<int> b(n - 1);
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }

        vector<int> a(n);
        a[0] = b[0];

        for (int i = 1; i < n - 1; i++) {
            if (a[i - 1] >= b[i - 1]) {
                a[i] = 0;
            } else {
                a[i] = b[i - 1] - a[i - 1];
            }
        }

        a[n - 1] = b[n - 2];

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
 
   
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}