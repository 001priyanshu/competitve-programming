#include "bits/stdc++.h"
using namespace std;

void solve()
{
    long long int n;
    cin >> n;
    vector<long long int> v(n);
    for (long long int i = 0; i < n - 1; i++)
    {
        cin >> v[i];
    }
    unordered_map<long long int, long long int> mp;
    for (int i = 1; i <= n; i++)
    {
        mp[i]++;
    }
    long long int a = v[0];

    long long int last = 0;
    long long int c = 0;
    long long int temp = 0;
    for (long long int i = 0; i < n - 1; i++)
    {
        long long int num = v[i] - last;
        if (mp.find(num) != mp.end())
        {
            mp.erase(num);
        }
        else
        {
            c++;
            temp = num;
        }
        last = v[i];
    }
    if (mp.size() == 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (c > 1 || mp.size() != 2)
    {
        cout << "NO" << endl;
        return;
    }
    long long int total = 0;
    for (auto &it : mp)
        total += it.first;
    if (total != temp)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
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