#include "bits/stdc++.h"
using namespace std;
#define int long long int

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
  int p=n-k;
    int nSum = (n * (n + 1)) / (long long)2;
    int kSum = (k * (k + 1)) / 2;
    int pSum = nSum-(p*(p+1))/2;
    if (x > nSum || x < kSum || x>pSum)
    {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
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