#include<bits/stdc++.h>

using namespace std;

void testCase(){
	int n;
	cin >> n;
	int a[n],b[n];
	for(auto &x: a) cin >> x;
	for(auto &x: b) cin >> x;
	int maxLen=0;
	for(int i=0;i<n;i++){
		int sum1=0,sum2=0;
		for(int j=i;j<n;j++){
			sum1+=a[j];
			sum2+=b[j];
			if(sum1==sum2){
				int len=j-i+1;
				if(len>maxLen){
					maxLen=len;
				}
			}
		}
	}
	cout << maxLen << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		testCase();
	}
}
