#include<bits/stdc++.h>

using namespace std;

long long  gcd(long long  a,long long  b){
	if(a==0 || b==0){
		return a+b;
	}else{
		while(a !=b ){
			if(a>b){
				a-=b;
			}else{
				b-=a;
			}
		}
		return a;
	}
}
long long  lcm(long long  a,long long  b){
	return (a*b)/gcd(a,b);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		cout << lcm(a,b) << " " << gcd(a,b) << endl;
	}
	return 0;
}


