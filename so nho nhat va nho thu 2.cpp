#include<iostream> 
using namespace std; 
void sapxeptang(int a[],int n)
{ 
	int i,j,t; 
	for(i=0;i<n-1;i++)
	{ 
		for(j=i+1;j<n;j++)
		{ 
			if(a[i] > a[j])
			{ 
				t = a[i]; a[i] = a[j]; 
				a[j] = t; 
			} 
		} 
	} 
} 
main()
{ 
	int t; 
	cin >> t; 
	while(t--)
	{ 
		int n; 
		cin >> n; 
		int a[n]; 
		for(int i=0; i<n; i++)
		{ 
			cin >> a[i]; 
		} 
		sapxeptang(a,n); 
		if(a[0] == a[1])
		{ 
			cout <<"-1"; 
		}
		else
		{ 
			cout << a[0] <<" "<< a[1]; 
		} 
		cout << endl; 
	} 
}