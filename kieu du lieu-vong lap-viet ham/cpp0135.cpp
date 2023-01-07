#include<bits/stdc++.h>

using namespace std;

bool checkPrimeNumber(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}

void checkNumber(int n){
	for(int i=1;i<=sqrt(n);i++){
		if(checkPrimeNumber(i)){
			cout << i*i << " ";
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		checkNumber(n);
		cout << endl;
	}
	return 0;
}
