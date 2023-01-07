#include<bits/stdc++.h>
#define SIZE 1000

using namespace std;

bool checkFibonaxi(long long  n){
	if(n==0 || n==1){
		return true;
	}
	int f0=0;
	int f1=1;
	long long fn;
	for(int i=2;i<=93;i++){
		fn=f0+f1;
		if(fn==n){
			return true;
		}
		f0=f1;
		f1=fn;
	}
	return false;
}
void solve(){
	int n;
	cin >> n;
	int arr[SIZE];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	for(int i=0;i<n;i++){
		if(checkFibonaxi(arr[i])){
			cout << arr[i] << " ";
		}
	}
}


int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
	
}
