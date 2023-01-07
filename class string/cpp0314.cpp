#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	cin.ignore();
	set<string> mp;
	for(int i=0;i<n;i++){
		string a;
		getline(cin,a);
		mp.insert(a);
	}
	cout << mp.size();
}
