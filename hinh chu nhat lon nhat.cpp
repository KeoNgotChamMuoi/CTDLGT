#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		long long a[n];
		for(int i = 0 ; i< n; i++)
			cin >> a[i];
		stack<int> st1, st2;
		long long l[n], r[n];
		
		for(int i = n-1; i >= 0; i--)
		{
			while(!st1.empty() && a[i] <= a[st1.top()])
				st1.pop();
			if(!st1.empty()) r[i] = st1.top()-1;
			else r[i] = n-1;
			
			st1.push(i);
		}
		
		for(int i = 0; i< n; i++)
		{
			while(!st2.empty() && a[i] <= a[st2.top()])
				st2.pop();
			if(!st2.empty())	l[i] = st2.top()+1;
			else l[i] = 0;
			
			st2.push(i);
		}
		
		long long res = 0;
		
		for(int i = 0; i< n; i++)
		{
			long long tmp = (r[i] - l[i] + 1) * a[i];
			res = max(res, tmp);
		}
		
		cout << res << endl;
	}
}
