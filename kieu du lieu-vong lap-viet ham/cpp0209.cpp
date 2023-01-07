#include<bits/stdc++.h>
#define SIZE 10000
using namespace std;


int main(){
	int k;
	cin >> k;
	while(k--){
		int arr[SIZE];
	int n;
	cin >> n;
	int t;
	cin >> t;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	while(t--){
		int l,r;
		cin >> l >> r;
		int sum=0;
		for(int i=l-1;i<=r-1;i++){
			sum+=arr[i];
		}
		cout << sum << endl;
	}
	}
	return 0;
}
