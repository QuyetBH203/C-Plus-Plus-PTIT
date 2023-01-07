#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int p=s.find("084");
		string m=s.erase(p,3);
		cout << m << endl;
	}
	return 0;
}
