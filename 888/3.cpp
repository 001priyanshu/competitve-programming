#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int a = v[0];
    int b = v[n - 1];
    vector<int> freq(n, 0);
    int temp = 0;

    int temp1 = 0;
    int temp2 = 0;
    int i = 0;
    while (i < n)
    {
        if (v[i] == a)
            temp1++;
        if (temp1 >= k)
        {
            i++;
            break;
        }
        i++;
    }
    while (i < n)
    {
        if (v[i] == b)
        {
            temp2++;
        }
        i++;
    }

    if (temp1 >= k && temp2 >= k)
    {
        cout << "YES" << endl;
        return;
    }
    if (a == b && temp1 >= k)
    {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}