#include<bits/stdc++.h>


using namespace std;

void testCase(){
	string s;
	cin >> s;
	int dd[26]={0};
	for(int i=0;i<s.length();i++){
		dd[s[i]-'a']++;
	}
	int d=0;
	for(auto x: dd){
		d=max(d,x);
	}
	if(d<=(s.length()+1)/2){
		cout << 1 << endl;
	}else{
		cout << 0 << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		testCase();
	}
	return 0;
}
