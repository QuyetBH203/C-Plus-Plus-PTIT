#include<bits/stdc++.h>
using namespace std;


void checkReversibleNumber(long long  n){
	long long m=n;
	long long dao=0;
	while(m>0){
		dao=dao*10+m%10;
		m/=10;
	}
	if(dao==n){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		checkReversibleNumber(n);
		
	}
}
