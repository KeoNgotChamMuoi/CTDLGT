#include<bits/stdc++.h>
using namespace std;

void solve(string s)
{
	stack<int> st;
	int n = s.size();
	for(int i = 0; i< n; i++)
	{
		if(isdigit(s[i]))
		{
			st.push(s[i] - '0');
		}
		else
		{
			int y = st.top();
			st.pop();
			int x = st.top();
			st.pop();
			
			if(s[i] == '+')
				st.push(x+y);
			else if(s[i] == '-')
				st.push(x-y);
			else if(s[i] == '*')
				st.push(x*y);
			else st.push(x/y);
		}
	}
	
	cout << st.top();
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
    	string s;
    	cin >> s;
    	solve(s);
    	cout << endl;
	}
}
