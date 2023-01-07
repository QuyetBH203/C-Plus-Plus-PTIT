#include<bits/stdc++.h>

using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n=s.length();
		int count=0;
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				if(s[i]==s[j]){
					count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}
