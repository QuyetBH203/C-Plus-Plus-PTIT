#include<bits/stdc++.h>

using namespace std;

void testCase(){
	int n;
	long long k;
	cin >> n >> k;
	long long S=0;
	for(int i=1;i<=n;i++){
		S+=i%k;
	}
	cout << S << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		testCase();
	}
	return 0;
}
