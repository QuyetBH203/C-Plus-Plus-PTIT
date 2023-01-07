#include<bits/stdc++.h>

using namespace std;

void testCase(){
	string s;
	cin >> s;
	vector<char> v;
	int sum=0;
	for(int i=0;i<s.length();i++){
		if(isalpha(s[i])){
			v.push_back(s[i]);
		}else{
			sum+=s[i]-'0';
		}
	}
	sort(v.begin(),v.end());
	for(auto x: v){
		cout << x;
	}
	cout << sum;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testCase();
	}
	return 0;
}
