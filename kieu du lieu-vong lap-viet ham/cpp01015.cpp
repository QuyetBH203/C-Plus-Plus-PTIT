#include<bits/stdc++.h>

using namespace std;

bool checkBeautyNumber(long long n){
	while(n>0){
		int m;
		m=n%10;
		if(m!= 0 && m != 6 && m != 8){
			return false;
		}
		n/=10;
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(checkBeautyNumber(n)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}
