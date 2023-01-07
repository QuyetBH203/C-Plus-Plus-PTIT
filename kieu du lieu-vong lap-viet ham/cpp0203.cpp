#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int arr[10000];
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int check=1;
	int max=arr[0];
	for(int i=1;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	for(int i=1;i<=max+1;i++){
		int dem=0;
		for(int j=0;j<n;j++){
			if(i==arr[j]){
				dem++;
			}
		}
		if(dem==0){
			cout << i << endl;
			break;
		}
	}
	}
	return 0;
}
