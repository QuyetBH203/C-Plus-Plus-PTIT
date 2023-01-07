#include<bits/stdc++.h>

using namespace std;

void checkFactorizationPrime(int   n){
	long long  arr[10000];
	int cnt=0;
	for(int  i=2;i<=sqrt(n);i++){
		while(n%i==0){
			arr[cnt++]=i;
			n/=i;
		}
	}
	if( n!=1){
		arr[cnt++]=n;
	}
	int k;
	cin >> k;
	if(k-1>=0 && k-1<=cnt-1){
		cout << arr[k-1] << endl;
	}else{
		cout << "-1" << endl;
	}
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int   n;
		cin >> n;
		checkFactorizationPrime(n);
	}
	return 0;
}
