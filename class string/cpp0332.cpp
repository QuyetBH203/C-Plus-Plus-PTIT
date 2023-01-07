#include<bits/stdc++.h>

using namespace std;

int main(){
	string str;
	getline(cin,str);
	int n=str.length();
	for(int i=0;i<n;i++){
		str[i]=tolower(str[i]);
	}
	stringstream ss(str);
	string s;
	vector<string> v;
	while(ss>>s){
		v.push_back(s);
	}
	int l=v.size();
	cout << v[l-1];
	for(int i=0;i<l-1;i++){
		cout << v[i][0];
	}
	cout << "@ptit.edu.vn";
	return 0;
	
}
