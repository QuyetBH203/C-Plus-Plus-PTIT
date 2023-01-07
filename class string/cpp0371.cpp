#include<bits/stdc++.h>

using namespace std;

bool check(char c){
	if(c== 'a' || c== 'e' || c== 'i'|| c== 'o' || c=='u' || c== 'y'){
		return true;
	}else{
		return false;
	}
}

int main(){
	string s;
	cin >> s;
	for(auto x: s){
		x=(char)tolower(x);
		if(!check(x)){
			cout << "." << x;
		}
	}
	return 0;
} 
