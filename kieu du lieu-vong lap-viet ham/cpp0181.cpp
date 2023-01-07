#include<bits/stdc++.h>

using namespace std;

long long gcd(long long x,long long y){
	while(x != y){
		if(x>y){
			x-=y;
		}
		if(y>x){
			y-=x;
		}
	}
	return x;
} 

void testCase(){
	long long a,x,y;
	cin >> a >> x >> y;
	long long m=gcd(x,y);
	while(m--){
		cout << a;
	}
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testCase();
		cout << endl;
	}
	
}
