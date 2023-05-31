#include<iostream>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,x;cin>>n>>x;
		bool check= false;
		int a[n];
		for(int i=0;i<n;i++)	cin>>a[i];
		for(int i=0;i<n;i++){
			if(a[i]==x)	{check=true;
			break;
			}
		}
		if(check)	cout<<"1"<<endl;
		else cout<<"-1"<<endl;
	}
}