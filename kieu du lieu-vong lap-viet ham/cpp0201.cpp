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
	int max=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(j-i>max && arr[j]>=arr[i]){
				max=j-i;
			}
		}
	}
	cout << max << endl;
	}

	return 0;
}
