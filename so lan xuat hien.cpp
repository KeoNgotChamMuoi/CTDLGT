#include<bits/stdc++.h>

using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);

int main()
{
    faster();
    int t = 1, n, x;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        int a[n];
        int f[1000005] = {};
        for(int &i : a)
        {
            cin >> i;
            ++f[i];
        }
        if(!f[x]) cout << -1 << endl;
        else cout << f[x] << endl;
    }
    return 0;
}