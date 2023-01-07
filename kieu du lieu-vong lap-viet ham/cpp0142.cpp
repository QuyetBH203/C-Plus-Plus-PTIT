#include<bits/stdc++.h>

using namespace std;

bool checkPrimeNumber(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int gcd(int a,int b){
	while(a!=b){
		if(a>b){
			a-=b;
		}
		if(b>a){
			b-=a;
		}
	}
	return a;
	
}
void testCase(){
	int n;
	cin >> n;
	int d=1;
	for(int i=2;i<n;i++){
		if(gcd(i,n)==1){
			d++;
		}
	}
	if(checkPrimeNumber(d)){
		cout << 1 << endl;
	}else{
		cout << 0 << endl;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testCase();
	}
	return 0;
}

