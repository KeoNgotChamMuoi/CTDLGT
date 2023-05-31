#include<bits/stdc++.h>

using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define vi vector<int>
#define all(x) (x).begin(), (x).end()

int main()
{
    faster();
    int t = 1, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        vi a(n);
        for(int &i : a) cin >> i;
        sort(all(a));
        int idx = n - 1;
        while(k--) cout << a[idx--] << ' ';
        cout << endl;
    }
    return 0;
}