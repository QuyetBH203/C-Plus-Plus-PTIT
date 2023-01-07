#include<bits/stdc++.h>

using namespace std;


int solve(string s){
	int res=0;
	int sum=0;
	
	for(auto x: s){
		if(isdigit(x)){
			res=res*10+x-'0';
		}else{
			sum=sum+res;
			res=0;
		}
	}
	sum=sum+res;
	return sum;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << solve(s) << endl;
	}
	return 0;
}
