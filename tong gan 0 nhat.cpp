#include<bits/stdc++.h>

using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main()
{
    faster();
    int t = 1, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n + 1];
        FOR(i, 1, n) cin >> a[i];
        int ans = INT_MAX;
        FOR(i, 1, n) FOR(j, i + 1, n) if(abs(ans) > abs(a[i] + a[j])) ans = a[i] + a[j];
        cout << ans << endl;
    }
    return 0;
}