#include<bits/stdc++.h>

using namespace std;




int main(){
	long long n;
	cin >> n;
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0){
			int cnt=0;
			cout << i << " ";
			while(n%i==0){
				cnt++;
				n/=i;
			} 
			cout << cnt;
		}
		cout << endl;
	}
	if( n != 1){
		cout << n << " 1";
	}
	return 0;
} 
