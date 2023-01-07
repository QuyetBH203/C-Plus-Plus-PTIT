#include<bits/stdc++.h>
#define SIZE 10000

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int arr[SIZE];
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		long long S=0;
		for(int i=1;i<=n;i++){
			S+=arr[i]*pow(x,n-i);
		}
		cout << S << endl;
	}
}
