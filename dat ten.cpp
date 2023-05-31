#include<bits/stdc++.h> 
using namespace std; 
set<string> st; 
vector<string> v; 
int n, x[100], k; 
void in()
{ 
	for(int i=1; i<=k; i++)
	{ 
		cout << v[x[i]-1] << " "; 
	} 
	cout << endl; 
} 
void Try(int i)
{ 
	for(int j=x[i-1]+1; j<=st.size()-k+i; j++)
	{ 
		x[i] = j; 
		if(i == k)
		{ 
			in(); 
		} 
		else
		{ 
			Try(i+1); 
		} 
	} 
} 
main()
{ 
	cin >> n >> k; 
	string s; 
	for(int i=0; i<n; i++)
	{ 
		cin >> s; st.insert(s); 
	} 
	for(auto x:st)
	{ 
		v.push_back(x); 
	} 
	x[0] = 0; 
	Try(1); 
}