#include "bits/stdc++.h"
using namespace std;
#define lli long long int

void solve()
{
    int n, m;
    cin >> n >> m;
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1--;
    y1--;
    x2--;
    y2--;
    if(x1==x2 && y1==y2){
        cout<<0<<endl;
        return;
    }
    int ans = 0;
    if (x1 + 1 < n)
    {
        if (x1 + 1 == x2 && y1 == y2)
        {
            ans--;
        }
        ans++;
    }
    if (y1 + 1 < m  )
    {
        if(x1 == x2 && y1 + 1 == y2)
        {
            ans--;
        }
        ans++;
    }
    if (x1 - 1 >= 0  )
     {
        if (x1 - 1 == x2 && y1 == y2)
        {
            ans--;
        }
        ans++;
    }
      
    if (y1 - 1 >= 0  )
     {
        if (x1 == x2 && y1 - 1 == y2)
        {
            ans--;
        }
        ans++;
    }
      

      int ans2=0;


       if (x2 + 1 < n)
    {
        if (x1  == x2+1 && y1 == y2)
        {
            ans2--;
        }
        ans2++;
    }
    if (y2 + 1 < m  )
    {
        if(x1 == x2 && y1  == y2+1)
        {
            ans2--;
        }
        ans2++;
    }
    if (x2 - 1 >= 0  )
     {
        if (x1  == x2-1 && y1 == y2)
        {
            ans2--;
        }
        ans2++;
    }
      
    if (y2 - 1 >= 0  )
     {
        if (x1 == x2 && y1  == y2-1)
        {
            ans2--;
        }
        ans2++;
    }
      


    cout << min(ans,ans2) << endl;
    return;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}