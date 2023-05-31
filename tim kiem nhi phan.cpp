#include<bits/stdc++.h> 
using namespace std; 
int t,n,x; 
int main()
{ 
	cin >> t; 
	while(t--)
	{ 
		cin >> n >> x; 
		int mark,a; 
		bool oke = false; 
		for(int i = 0;i<n;i++)
		{ 
			cin >> a; if(a==x)
			{ 
				mark = i+1; oke = true; 
			} 
		}
		if(oke) cout << mark << endl; 
		else cout <<"NO" << endl; 
	}
	return 0; 
} 