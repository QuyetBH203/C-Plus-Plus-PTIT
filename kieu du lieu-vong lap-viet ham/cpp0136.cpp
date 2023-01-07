#include<bits/stdc++.h>

using namespace std;

bool checkPrimeNumber(long long  n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}

void checkNumber(long long  n){
	int cnt=0;
	for(int i=1;i<=sqrt(n);i++){
		if(checkPrimeNumber(i)){
			cnt++;
		}
	}
	cout << cnt;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long  n;
		cin >> n;
		checkNumber(n);
		cout << endl;
	}
	return 0;
}
