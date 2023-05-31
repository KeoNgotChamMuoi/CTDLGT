#include<bits/stdc++.h>
using namespace std;

struct task{
	int start, finish;
} a[100005];

bool cmp(task x, task y){
	return x.finish < y.finish;
}

main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i=0; i<n; i++) {
			cin >> a[i].start >> a[i].finish;
		}
		sort(a, a+n, cmp);
		int i=0, count=1;
		for(int j=1; j<n; j++){
			if(a[j].start >= a[i].finish){
				i=j;
				count++;
			}
		}
		cout << count << endl;
	}
}