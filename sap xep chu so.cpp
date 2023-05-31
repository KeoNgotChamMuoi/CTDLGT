#include<bits/stdc++.h>

using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);

int main()
{
    faster();
    int t = 1, n;
    cin >> t;
    string s;
    while(t--)
    {
        bool f[15] = {};
        cin >> n;
        while(n--)
        {
            cin >> s;
            for(char i : s) if(isdigit(i)) f[i - '0'] = 1;
        }
        for(int i = 0; i < 10; ++i) if(f[i]) cout << i << ' ';
        cout << endl;
    }
    return 0;
}