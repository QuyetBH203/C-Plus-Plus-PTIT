#include<bits/stdc++.h>

using namespace std;

void perfectNumber(long long n){
	if(n>= 1e12 || n%2==1){
		cout << 0 << endl;
		return ;
	}
	long long Sum=1;
	for( int i=2;i<sqrt(n);i++){
		if(n%i==0){
			Sum+=i;
			Sum+=n/i;
		}
	}
	if(int (sqrt(n))==sqrt(n)) Sum+=sqrt(n);
	if(Sum==n){
		cout << 1 << endl;
	}else{
		cout << 0 << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		perfectNumber(n);
	}

}

