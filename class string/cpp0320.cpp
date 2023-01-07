#include<bits/stdc++.h>

using namespace std;


int check(string s){
	if(s[0]=='0') return -1;
	set<char> mp;
	for(auto x: s){
		if(!isdigit(x)){
			return -1;
		}
		mp.insert(x);
	}
	if(mp.size()==10){
		return 1;
	}else{
		return 0;
	}

} 
int main(){
	int t;
	cin >> t;
	while(t--){
		cin.ignore();
		string s;
		cin >> s;
		if(check(s)== -1){
			cout << "INVALID" << endl;
		}else if(check(s)==1){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
		
	}
	return 0;
}
