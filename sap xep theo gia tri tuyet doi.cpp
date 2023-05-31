#include <bits/stdc++.h>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.fi < b.fi;
}

int main()
{
    faster();
    int t, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        vector<pair<int, int>> vp(n);
        for(int i = 0; i < n; ++i)
        {
            cin >> vp[i].se;
            vp[i].fi = abs(vp[i].se - k);
        }
        stable_sort(all(vp), cmp);
        for(pair<int, int> i : vp) cout << i.se << ' ';
        cout << endl;
    }
    return 0;
}