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
	int a,b;
	cin >> a >> b;
	if(a>b){
		for(int i=b+1;i<=a-1;i++){
			if(checkPrimeNumber(i)){
				cout << i << " ";
			}
		}
	}else if(a<b){
		for(int i=a+1;i<=b-1;i++){
			if(checkPrimeNumber(i)){
				cout << i << " ";
			}
		}
	}
	return 0;
}
