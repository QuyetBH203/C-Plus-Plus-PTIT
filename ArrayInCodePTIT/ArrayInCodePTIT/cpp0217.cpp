#include<bits/stdc++.h>

using namespace std;


void solve(){
	int n,k;
	cin >> n >> k;
	int arr[n*n];
	for(int i=0;i<n*n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n*n);
	cout << arr[k-1] << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
