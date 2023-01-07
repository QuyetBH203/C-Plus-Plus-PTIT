#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		cin.ignore();
		string a;
		getline(cin,a);
		int k;
		cin >> k;
		set<char> s;
		for(auto x: a){
			s.insert(x);
		}
		int n=s.size();
		if(k>=26-n){
			cout << 1 << endl;
		}else{
			cout << 0 << endl;
		}
	}
	return 0;
}
