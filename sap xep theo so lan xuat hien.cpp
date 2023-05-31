#include<bits/stdc++.h> 
using namespace std; 
bool compare( pair<int,int> a , pair<int,int> b)
{ 
	if(a.second==b.second)
	{ 
		return a.first< b.first; 
	} 
	return a.second> b.second; 
} 
int main()
{ 
	int t;
	cin>>t; 
	while(t--)
	{ 
		int n;
		cin>>n; 
		int a[n]; 
		map <int,int> mp; 
		for(int&x: a)
		{ 
			cin>>x; mp[x]++; 
		} 
		vector<pair<int,int>> v(mp.begin(),mp.end()); 
		sort(v.begin(),v.end(),compare); 
		for(auto x: v)
		{ 
			while(x.second--)
			{ 
				cout<<x.first<<" "; 
			} 
		} 
		cout<<endl; 
	} 
	return 0; 
}