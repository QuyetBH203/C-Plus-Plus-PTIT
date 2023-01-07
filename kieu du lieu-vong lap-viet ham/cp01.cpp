#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long  n;
		cin >> n;
		long long S=n*(n+1)/2;
		cout << S << endl;
	}
	return 0;
}
