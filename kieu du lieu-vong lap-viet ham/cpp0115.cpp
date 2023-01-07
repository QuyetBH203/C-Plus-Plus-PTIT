#include<bits/stdc++.h>

using namespace std;

void checkFactorizationPrime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			int cnt=0;
			cout << i << " ";
			while(n%i==0){
				cnt++;
				n/=i;
			}
			cout << cnt << " ";
		}
	}
	if(n !=1){
		cout << n << " 1";
	}
} 

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		checkFactorizationPrime(n);
		cout << endl;
	}
	return 0;
}

