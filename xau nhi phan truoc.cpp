#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define F(i, a, b) for(int i = a; i < b; ++i)
int main()
{
    faster();
    int t = 1, n, k, x;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        int i = s.length() - 1;
        while(s[i] == '0')
        {
            s[i] = '1';
            --i;
        }
        if(i < 0) F(i, 0, s.length()) cout << 1;
        else
        {
            s[i] = '0';
            cout << s;
        }
        cout << endl;
    }
    return 0;
}