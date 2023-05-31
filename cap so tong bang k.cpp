#include<bits/stdc++.h>

using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);

int main()
{
    faster();
    int t = 1, n, k, x;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int f[105] = {};
        int cnt = 0;
        while(n--)
        {
            cin >> x;
            ++f[x];
        }
        if((k & 1) ^ 1 and f[k >> 1])
        {
            cnt += f[k >> 1] * (f[k >> 1] - 1) >> 1;
            f[k >> 1] = 0;
        }
        for(int i = 0; i <= k; ++i)
        {
            if(f[i])
            {
                cnt += f[i] * f[k - i];
                f[i] = f[k - i] = 0;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}