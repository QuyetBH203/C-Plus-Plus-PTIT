#include<bits/stdc++.h>

using namespace std;


void testCase(){
	int n;
	cin >> n;
	cin.ignore();
	vector<string> v;
	string str,s;
	getline(cin,str);
	stringstream ss(str);
	while(ss >> s){
		for(auto& x: s){
			x=tolower(x);
		}
		s[0]=toupper(s[0]);
		v.push_back(s);
	}
	if(n==1){
		cout << v.back() << " ";
		for(int i=0;i< v.size()-1;i++){
			cout << v[i] << " ";
		}
	}else if(n==2){
		for(int i=1;i<v.size();i++){
			cout << v[i] << " ";
		}
		cout << v[0];
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testCase();
	}
	return 0;
}
