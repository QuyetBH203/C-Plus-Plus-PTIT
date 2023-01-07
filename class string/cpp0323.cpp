#include<bits/stdc++.h>

using namespace std;


void testCase(){
	string s;
	long long m;
	cin >> s >> m;
	long long k=0;
	for(auto x: s){
		k=k*10+(x-'0');
		k%=m;
	}
	cout << k << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		testCase();
	}
	return 0;
}
