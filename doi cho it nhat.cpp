#include <bits/stdc++.h>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);

int main()
{
    faster();
    int t = 1, n, idx;
    cin >> t;
    while(t--)
    {
        int cnt = 0;
        cin >> n;
        int a[n];
        for(int &i : a) cin >> i;
        for(int i = 0; i < n; ++i)
        {
            idx = i;
            for(int j = i + 1; j < n; ++j) if(a[idx] > a[j]) idx = j;
            cnt += idx != i;
            swap(a[i], a[idx]);
        }
        cout << cnt << endl;
    }
    return 0;
