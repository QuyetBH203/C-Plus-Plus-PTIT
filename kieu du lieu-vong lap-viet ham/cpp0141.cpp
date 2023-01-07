#include<bits/stdc++.h>

using namespace std;

bool checkFibonaxiNumber(long long n){
	if(n==0 || n==1){
		return true;
	}
	long long fn;
	long long f0=0;
	long long f1=1;
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


int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(checkFibonaxiNumber(n)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}
