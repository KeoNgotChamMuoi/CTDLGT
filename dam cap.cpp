#include<bits/stdc++.h>

using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define F(i, a, b) for(int i = a; i < b; ++i)

int count(int x, int y[], int n, int f[])
{
    if (!x) return 0;
    if (x == 1) return f[0];
    int* idx = upper_bound(y, y + n, x);
    int ans = (y + n) - idx;
    ans += (f[0] + f[1]);
    if (x == 2) ans -= (f[3] + f[4]);
    if (x == 3) ans += f[2];
    return ans;
}

int calc(int x[], int y[], int m, int n)
{
    int f[5] = {};
    F(i, 0, n) if (y[i] < 5) ++f[y[i]];
    sort(y, y + n);
    int ans = 0;
    F(i, 0, m) ans += count(x[i], y, n, f);
    return ans;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int m, n;
        cin >> m >> n;
        int x[m], y[n];
        for(int &i : x) cin >> i;
        for(int &i : y) cin >> i;
        cout << calc(x, y, m, n) << endl;
    }
    return 0;
}