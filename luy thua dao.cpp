#include <bits/stdc++.h>
using namespace std;
long long dao(long long n)
{
	long long p = 0;
	while(n>0)
	{
		p = p*10 + n%10;
		n/=10;
	}
	return p;
}
int M=1e9 + 7;
long long power(long long n,long long p)
{
	if(p==0) return 1;
	long long x = power(n,p/2);
	if(p%2==0) return x*x%M;
	return n*(x*x%M)%M;
}
int main()
{
	int t;
    long long n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		long long p = dao(n);
		cout << power(n,p);
		cout << endl;
	}
}