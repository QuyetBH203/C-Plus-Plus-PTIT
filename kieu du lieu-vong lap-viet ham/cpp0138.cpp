#include<bits/stdc++.h>

using namespace std;

bool checkPrimeNumber(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
void findTwofirstPrimeNumber(int n){
	for(int i=2;i<=n/2;i++){
		if(checkPrimeNumber(i) && checkPrimeNumber(n-i)){
			cout << i << " " << n-i;
			return ;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		findTwofirstPrimeNumber(n);
		cout << endl;
	}
}
