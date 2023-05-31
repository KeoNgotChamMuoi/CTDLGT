#include<bits/stdc++.h>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define sz size()
#define fi first

int n, k;
vector<string> vs, ans;
int b[35];

void print()
{
    for(int i = 1; i <= k; ++i) cout << vs[b[i] - 1] << ' ';
    cout << endl;
}

void Try(int i)
{
    for(int j = b[i - 1] + 1; j <= vs.sz - k + i; ++j)
    {
        b[i] = j;
        if(i == k) print();
        else Try(i + 1);
    }
}

int main()
{
    faster();
    int t = 1;
    while(t--)
    {
        cin >> n >> k;
        string s;
        map<string, bool> m;
        for(int i = 0; i < n; ++i)
        {
            cin >> s;
            m[s] = 1;
        }
        for(auto &i : m) vs.pb(i.fi);
        Try(1);
    }
    return 0;
}