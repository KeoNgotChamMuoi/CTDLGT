#include<bits/stdc++.h>
using namespace std;

struct task{
	int A, B;
} a[100005];

bool cmp(task x, task y){
	return x.B < y.B;
}

main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i].A >> a[i].B;
		}
		sort(a, a+n, cmp);
		int i=0, count=1;
		for(int j=1; j<n; j++){
			if(a[j].A >= a[i].B){
				i=j;
				count++;
			}
		}
		cout << count << endl;
	}
}