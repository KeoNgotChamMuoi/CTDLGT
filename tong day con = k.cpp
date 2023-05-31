#include <bits/stdc++.h>
using namespace std;

void next_bit(int a[], int n){
	int i = n-1;
	while(a[i] == 1 && i >0){
		a[i] = 0;
		i--;
	}
	a[i] = 1;
}

void xuat(int a[], int b[], int n){
	for(int i = 0; i < n; i++){
		if(a[i] == 1){
			cout << b[i] << " ";
		}
	}
	cout << endl;
}

int check(int a[], int b[], int n, int k){
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += a[i] * b[i];
	}
	if(sum == k) return 1;
	else return 0;
}

int main(){
	int n, k, count = 0;
	cin >> n >> k;
	int a[n], b[n];
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}
	for(int i = 0; i < n; i++){
		a[i] = 0;
	}
	for(int i = 0; i < pow(2,n); i++){
		next_bit(a,n);
		if(check (a, b, n, k)){
			xuat(a,b,n);
			count ++;
		}
	}
	cout << count;
	return 0;
}