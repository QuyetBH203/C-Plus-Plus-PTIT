#include<bits/stdc++.h>

using namespace std;
bool checkNumber(string s){
	int n=s.length();
	for(int i=0;i<=n/2;i++){
		if(s[i]==s[n-i-1]){
			return true;
		}
	}
	return false;

}
bool checkEven(string s){
	int n=s.length();
	for(int i=1;i<=n;i++){
		if(s[i]%2 !=0){
			return false;
		}
	}
	return true;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin.ignore();
		string s;
		getline(cin,s);
		if(checkNumber(s) && checkEven(s)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
		
	}

}
