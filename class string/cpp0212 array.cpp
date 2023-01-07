#include<bits/stdc++.h>

using namespace std;

const int mod=1e9+7;

void testCase(){
	int n,x;
	cin >> n >> x;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	reverse(a,a+n);
	long long s=0,t=1;
	for(int i=0;i<n;i++){
		s=(s+t*a[i])%mod;
		t=t*x%mod;
	}
	cout << s << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testCase();
	}
	return 0;
}
