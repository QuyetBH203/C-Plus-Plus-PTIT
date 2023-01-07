#include<bits/stdc++.h>

using namespace std;

void testCase(){
	int b,p;
	cin >> b >> p;
	int dem=0;
	for(int i=1;i<=b;i++){
		if((i*i)%p==1){
			dem++;
		}
	}
	cout << dem << endl;
	
}


int main(){
	int t;
	cin >> t;
	while(t--){
		testCase();
		
	}
	return 0;
}
