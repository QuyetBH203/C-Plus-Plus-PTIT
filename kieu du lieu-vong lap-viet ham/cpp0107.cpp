#include<bits/stdc++.h>

using namespace std;

string test101= "ABBADCCABDCCABD";
string test102= "ACCABCDDBBCDDBB";

void caculatorMark(){
	int n;
	cin >> n;
	double mark=0;
	if(n==101){
		for(int i=0;i<15;i++){
			char c;
			cin >> c;
			if(c==test101[i]){
				mark+= 2.0/3;
			}
		}
	} else if(n==102){
		for(int i=0;i<15;i++){
			char c;
			cin >> c;
			if(c==test102[i]){
				mark+= 2.0/3;
			}
		}
	}
	cout << fixed << setprecision(2) << mark ;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		caculatorMark();
		cout << endl;
	}
}
