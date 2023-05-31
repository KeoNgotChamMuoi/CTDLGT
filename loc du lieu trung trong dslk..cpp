#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; int a[1001];
	cin >> n;
	map<int,int> mp;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] != -999) {
				if (a[j] == a[i]) a[j] = -999;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i] != -999) cout << a[i]<<" ";
	}
}
