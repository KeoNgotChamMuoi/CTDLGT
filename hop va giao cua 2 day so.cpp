#include <bits/stdc++.h>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define pb push_back

int main()
{
    faster();
    int t = 1, n, m;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        vector<int> v1(n), v2(m);
        vector<int> ans;
        int a[100005] = {}, b[100005] = {};
        for(int &i : v1)
        {
            cin >> i;
            ++a[i];
        }
        for(int &i : v2)
        {
            cin >> i;
            ++b[i];
        }
        set<int> s;
        for(int i : v1)
        {
            if(b[i])
            {
                ans.pb(i);
                b[i] = 0;
            }
            s.insert(i);
        }
        for(int i : v2) s.insert(i);
        for(int i : s) cout << i << ' ';
        cout << endl;
        for(int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}