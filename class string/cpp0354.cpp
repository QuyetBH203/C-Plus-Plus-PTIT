#include<bits/stdc++.h>
using namespace std;
int mark[101]={0};

int main(){
	int t;
	cin >> t;
	cin.ignore();
	
	while(t--){
		
		memset(mark,0,sizeof(mark));
		string s;
		getline(cin,s);
		int n=s.length();
		for(int i=0;i<n;i++){
			mark[s[i]]++;
		}
		for(int i=0;i<n;i++){
			if(mark[s[i]]>0){
				cout << s[i] << mark[s[i]];
				mark[s[i]]=0;
			}
		}
		cout << endl;
	}
	return 0;
}
