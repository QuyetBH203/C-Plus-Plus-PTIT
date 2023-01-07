#include<bits/stdc++.h>
#define SIZE 1000

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[SIZE];
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		int min=arr[0];
		int res=-1;
		for(int i=1;i<n;i++){
			if(arr[i]<=min){
				min=arr[i];
			}else{
				int x=arr[i]-min;
				res=max(res,x);
			}
		}
		cout << res << endl;
	}
	return 0;
}
