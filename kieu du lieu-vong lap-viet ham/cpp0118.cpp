#include<bits/stdc++.h>

using namespace std;

void checkFactorizationNumber(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			cout << i << " ";
			n/=i;
		}
	}
	if( n!=1){
		cout << n;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		checkFactorizationNumber(n);
		cout << endl;
	}
	return 0;
}
