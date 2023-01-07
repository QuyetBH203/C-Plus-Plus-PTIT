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
	int x,y,z;
	cin >> x >> y >> z;
	long long  a= (x*y)/(gcd(x,y));
	long long b=(z*a)/(gcd(z,a));
	long long n;
	cin >> n;
	long long l=pow(10,n-1);
	long long r=pow(10,n)-1;
	if(b>r){
		cout << -1 << endl;
	}else if(l%b==0){
		cout << l << endl;
	}else{
		long long d=l/b;
		cout << b*(d+1) << endl;
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


