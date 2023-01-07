#include<bits/stdc++.h>

using namespace std;

void checkFactorization(long long n){
	int res=0; 
	
	for(long long i=2;i<=sqrt(n);i++){
		while(n%i==0){
			n/=i;
			res=i;
			
		}
	
	}
	if(n>1){
		cout << n << endl;
	}else{
		cout << res << endl;
	}
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		checkFactorization(n);
		
	}
	return 0;
}
