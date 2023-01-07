#include<bits/stdc++.h>

using namespace std;
void establish1(string &s){
	int n=s.length();
	for(int i=0;i<n;i++){
		s[i]=toupper(s[i]);
	}
}
void establish2(string &s){
	int n=s.length();
	s[0]=toupper(s[0]);
	for(int i=1;i<n;i++){
		s[i]=tolower(s[i]);
	}
}

int main(){
	string str;
	getline(cin,str);
	string s;
	stringstream ss(str);
	vector<string> v;
	while(ss>>s){
		v.push_back(s);
	}
	int l=v.size();
	for(int i=0;i<l-2;i++){
		establish2(v[i]);
		cout << v[i] << " ";
	}
	establish2(v[l-2]);
	establish1(v[l-1]);
	cout << v[l-2] << ", " << v[l-1];
	return 0;
	
}
