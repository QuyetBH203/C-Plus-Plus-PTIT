#include<bits/stdc++.h>
#define SIZE 10000
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int arr[SIZE];
		int n;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		int max=-1e9-1;
		for(int i=0;i<n;i++){
			if(arr[i]>max){
				max=arr[i];
			}
		}
		cout << max << endl;
	}
	return 0;
}
