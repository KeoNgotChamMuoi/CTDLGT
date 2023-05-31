#include<bits/stdc++.h>

using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define all(x) (x).begin(), (x).end()

int main()
{
    faster();
    int t = 1, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vi v(n), a(n);
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i];
            v[i] = i + 1;
        }
        if(a == v) cout << 1 << endl;
        else
        {
            int cnt = 1;
            while(v != a)
            {
                ++cnt;
                next_permutation(all(v));
            }
            cout << cnt << endl;
        }
    }
    return 0;
}