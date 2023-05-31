#include<bits/stdc++.h>

using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(), (x).end()

int main()
{
    faster();
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> v1(n), v2(n);
        for(int i = 0; i < n; ++i) cin >> v1[i];
        v2 = v1;
        sort(all(v1));
        for(int i = 0; i < n; ++i)
        {
            if(v1[i] != v2[i])
            {
                cout << i + 1 << ' ';
                break;
            }
        }
        for(int i = n - 1; i; --i)
        {
            if(v1[i] != v2[i])
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}