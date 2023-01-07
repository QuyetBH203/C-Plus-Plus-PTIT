#include<bits/stdc++.h>

using namespace std;

int main(){


		int n;
		double Sum=0;
		cin >> n;
		for(int i=1;i<=n;i++){
			Sum+= 1.0/i;
		}
		cout << fixed << setprecision(4) << Sum << endl;
	
}
