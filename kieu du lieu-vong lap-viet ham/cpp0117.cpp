#include<bits/stdc++.h>

using namespace std;

long long  lastSum( unsigned long long n){
	if(n<=9){
		return n;
	}else{
		int S=0;
		while(n>0){
			S+=n%10;
			n/=10;
		}
		n=S;
		return lastSum(n);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		unsigned long long n;
		cin >> n;
		cout << lastSum(n) << endl;
	}
}
