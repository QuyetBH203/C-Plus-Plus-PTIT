#include<bits/stdc++.h>

using namespace std;

void testCase(){
	string str,s;
	getline(cin,str);
	stringstream ss(str);
	vector<int> even;
	vector<int> odd;
	while(ss>>s){
		int x=stoi(s);
		if(x%2==0){
			even.push_back(x);
		}else{
			odd.push_back(x);
		}
	}
	if((even.size()+odd.size())%2==0 && even.size()>odd.size()){
		cout << "YES" << endl;
	}else if((even.size()+odd.size())%2==1 && even.size()<odd.size()){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		
		testCase();
	}
	return 0;
}
