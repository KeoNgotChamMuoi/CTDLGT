#include<bits/stdc++.h>
using namespace std;

int n, a[15] = {};

void print()
{
    for (int i = 1; i <= n; ++i) cout << (char) (a[i] + 'A' - 1);
    cout << ' ';
}
 
void Try(int i)
{
    for (int j = 1; j <= 2; ++j)
    {
        a[i] = j;
        if(i == n) print();
        else Try(i + 1);
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        cin >> n;
        Try(1);
        cout << endl;
    }
    return 0;
}