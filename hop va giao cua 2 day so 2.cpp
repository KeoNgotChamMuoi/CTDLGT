#include<bits/stdc++.h>

using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);

int main()
{
    faster();
    int t = 1, n, m, x;
    cin >> t;
    while(t--)
    {
        set<int> Hop;
        cin >> n >> m;
        int a[100005] = {}, b[100005] = {};
        while(n--)
        {
            cin >> x;
            Hop.insert(x);
            ++a[x];
        }
        while(m--)
        {
            cin >> x;
            Hop.insert(x);
            ++b[x];
        }
        for(int i : Hop) cout << i << ' ';
        cout << endl;
        for(int i = 0; i <= 1e5; ++i) if(a[i] and b[i]) cout << i << ' ';
        cout << endl;
    }
    return 0;
}