#include<bits/stdc++.h>

using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);

bool notPrime[1000010] = {};

int calc(int &n)
{
    int mid = n >> 1;
    for(int i = 2; i <= mid; ++i) if(!notPrime[i] and !notPrime[n - i]) return i;
    return -1;
}

int main()
{
    faster();
    int t = 1, n, k;
    int N = 1e6 + 5;
    int sqr = sqrt(N);
    notPrime[0] = notPrime[1] = 1;
    for(int i = 2; i <= sqr; ++i)
        if(!notPrime[i])
            for(int j = i * i; j <= 1e6; j += i)
                notPrime[j] = 1;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int ans = calc(n);
        if(ans == -1) cout << ans << endl;
        else cout << ans << ' ' << n - ans << endl;
    }
    return 0;
}