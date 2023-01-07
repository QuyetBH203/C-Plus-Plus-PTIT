#include<bits/stdc++.h>

using namespace std;

bool checkPrimeNumber(long long n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int t;
	cin >> t;
	while(t--){
	int a,b;
	cin >> a >> b;
	for(int i=a;i<=b;i++){
		if(checkPrimeNumber(i)){
			cout << i << " ";
		}
	}
	cout << endl;
	}
	return 0;
}
